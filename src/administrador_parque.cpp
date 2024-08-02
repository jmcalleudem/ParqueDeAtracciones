#include <park.hpp>

AdministradorParque::AdministradorParque(Parque parque) : parque(parque) {}

void AdministradorParque::agregar_atraccion(const std::string& nombre, const int& capacidad, const bool& estado) {
    parque.agregar_atraccion(nombre, capacidad, estado);
}

void AdministradorParque::registrar_visitante(const int& id) {
    parque.registrar_visitante(id);
}

void AdministradorParque::registrar_visita_atraccion(const int& visitante_id, const std::string& atraccion_nombre) {
    parque.registrar_visita_atraccion(visitante_id, atraccion_nombre);
}

