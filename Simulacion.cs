using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ParqueDeAtracciones
{
    public class Simulacion
    {
        public Parque Parque { get; private set; }
        public GestorMenu GestorMenu { get; private set; }
        public AdministradorParque AdministradorParque { get; private set; }

        public Simulacion()
        {
            Parque = new Parque();
            GestorMenu = new GestorMenu();
            AdministradorParque = new AdministradorParque(Parque);
        }

        public void IniciarSimulacion()
        {
            //Esto está bien según nuestro diseño?

            // Agregar atracciones
            Parque.AgregarAtraccion(new Atraccion("Montaña Rusa", 20));
            Parque.AgregarAtraccion(new Atraccion("Casa Embrujada", 15));
            Parque.AgregarAtraccion(new Atraccion("Carrusel", 10));
            Parque.AgregarAtraccion(new Atraccion("Rueda de la Fortuna", 25));
            Parque.AgregarAtraccion(new Atraccion("Tirolesa", 5));

            // Registrar visitantes
            Visitante visitante1 = new Visitante("V1");
            Visitante visitante2 = new Visitante("V2");
            Visitante visitante3 = new Visitante("V3");

            Parque.RegistrarVisitante(visitante1);
            Parque.RegistrarVisitante(visitante2);
            Parque.RegistrarVisitante(visitante3);

            // Simular visitas
            visitante1.VisitarAtraccion(Parque.BuscarAtraccionPorNombre("Montaña Rusa"));
            visitante2.VisitarAtraccion(Parque.BuscarAtraccionPorNombre("Casa Embrujada"));
            visitante3.VisitarAtraccion(Parque.BuscarAtraccionPorNombre("Rueda de la Fortuna"));

            // Mostrar estado de las atracciones
            Parque.MostrarEstadoAtracciones();

            // Mostrar historial de visitas de cada visitante
            Console.WriteLine("Historial de visitas:");
            Console.WriteLine($"{visitante1.Id}: {string.Join(", ", visitante1.AtraccionesVisitadas)}");
            Console.WriteLine($"{visitante2.Id}: {string.Join(", ", visitante2.AtraccionesVisitadas)}");
            Console.WriteLine($"{visitante3.Id}: {string.Join(", ", visitante3.AtraccionesVisitadas)}");
        }
    }
}
