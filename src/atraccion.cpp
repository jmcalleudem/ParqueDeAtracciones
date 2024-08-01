#include <park.hpp>

Atraccion::Atraccion(const std::string& nombre, const int& capacidad, const bool& estado): nombre(nombre), capacidad(capacidad), estado(estado) {}

const std::string& Atraccion::get_nombre() const noexcept {
    return nombre;
}
