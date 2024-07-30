using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ParqueDeAtracciones
{
    public class Visitante
    {
        private string Id { get; set; }
        private List<Atraccion> AtraccionesVisitadas { get;  set; }

        public Visitante(string id)
        {
            Id = id;
            AtraccionesVisitadas = new List<Atraccion>();
        }

        public void VisitarAtraccion(Atraccion atraccion)
        {
            //Lógica
        }
    }
}
