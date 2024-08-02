#include <park.hpp>
#include <stdexcept>

int Parque::buscar_atraccion(const std::string& nombre) const {
   for (int i = 0, size = atracciones.size(); i < size; i++) {
        if (atracciones[i].get_nombre() == nombre) {
            return i;
        }
   } 
   throw std::runtime_error("Atraccion no encontrada");
}

int Parque::buscar_visitante(const int& id) const {
    for (int i = 0, size = visitantes.size(); i < size; i++) {
        if (visitantes[i].get_id() == id) {
            return i;
        }
    }
    throw std::runtime_error("No se encontró el visitante");
}

bool Parque::existe_atraccion(const std::string& nombre) const noexcept {
    for (const auto& it : atracciones) {
        if (it.get_nombre() == nombre)
            return false;
    }
    return true;
}

bool Parque::existe_visitante(const int& id) const noexcept {
    for (const auto& it : visitantes) {
        if (it.get_id() == id)
            return false;
    }
    return true;
}

void Parque::agregar_atraccion(const std::string& nombre, const int& capacidad, const bool& estado) {
    if (!existe_atraccion(nombre)) {
        atracciones.push_back(Atraccion(nombre, capacidad, estado));
    }
    // lanzar excepcion
}

void Parque::registrar_visitante(const int& id) {
   if (!existe_visitante(id))
      visitantes.push_back(Visitante(id)); 
   // lanzar excepcion
}

void Parque::registrar_visita_atraccion(const int& visitante_id, const std::string& atraccion_nombre) {
   if (existe_atraccion(atraccion_nombre) && existe_visitante(visitante_id)) {
       auto index = buscar_visitante(visitante_id);
       auto index_atraccion = buscar_atraccion(atraccion_nombre);
       visitantes[index].visitar_atraccion(&atracciones[index_atraccion]);
    }
   // lanzar excepcion
}
