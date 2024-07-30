namespace ParqueDeAtracciones
{
    public class Atraccion
    {
        private string Nombre { get; set; }
        private int Capacidad { get; set; }
        private bool Estado { get; set; }

        public Atraccion(string nombre, int capacidad, bool estado = true)
        {
            Nombre = nombre;
            Capacidad = capacidad;
            Estado = estado;
        }

        public void CambiarEstado(bool nuevoEstado)
        {
            //Lógica
        }

        public bool VerificarEstado()
        {
            //lógica...
            return true;
        }
    }
}
