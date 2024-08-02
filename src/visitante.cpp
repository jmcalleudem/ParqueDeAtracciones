#include <park.hpp>

Visitante::Visitante(const int& id) : id(id) {}

const int& Visitante::get_id() const {
   return id; 
}

void Visitante::visitar_atraccion(const Atraccion* const atraccion_a_visitar) {
    atracciones_visitadas.push_back(atraccion_a_visitar);
}

const std::vector<const Atraccion*>& Visitante::ver_historial_atracciones_visitadas() const {
    return atracciones_visitadas;
}
