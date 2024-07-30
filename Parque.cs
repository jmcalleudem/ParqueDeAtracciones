using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ParqueDeAtracciones
{
    // Clase Parque
    public class Parque
    {
        private List<Atraccion> Atracciones { get;  set; }
        private List<Visitante> Visitantes { get;  set; }

        public Parque()
        {
            Atracciones = new List<Atraccion>();
            Visitantes = new List<Visitante>();
        }

        public void AgregarAtraccion(String nombre, int capacidad, bool estado)
        {
            //Lógica
        }

        public void RegistrarVisitante(int id)
        {
            //Lógica
        }

        public void RegistrarVisitaAtraccion(int visitante_id, String atraccion_nombre)
        {
            //Lógica
        }

        //...
    }
}
