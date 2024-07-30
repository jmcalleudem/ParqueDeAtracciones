using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ParqueDeAtracciones
{
    abstract class Menu
    {
        protected List<String> opciones;
        public abstract String MostrarOpciones();
    }
}
