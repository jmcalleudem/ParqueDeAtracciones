#include <vector>
#include <string>

class Atraccion {
private:
    std::string nombre;
    int capacidad;
    bool estado;
public:
    Atraccion(const std::string& nombre, const int& capacidad, const bool& estado);
    const std::string& get_nombre() const noexcept;
    const int& get_capacidad() const;
    bool verificar_estado() const;

    void cambiar_estado(bool nuevo_estado);
};

class Visitante {
private:
    int id;
    std::vector<const Atraccion*> atracciones_visitadas;
public:
    Visitante(const int& id);
    const int& get_id() const;
    void visitar_atraccion(const Atraccion* const atraccion_a_visitar);
    const std::vector<const Atraccion*>& ver_historial_atracciones_visitadas() const;
};

class Parque {
private:
    std::vector<Atraccion> atracciones; 
    std::vector<Visitante> visitantes;
    int buscar_atraccion(const std::string& nombre) const;
    int buscar_visitante(const int& id) const;
    bool existe_atraccion(const std::string& nombre) const noexcept;
    bool existe_visitante(const int& id) const noexcept;
public:
    void agregar_atraccion(const std::string& nombre, const int& capacidad, const bool& estado);
    void registrar_visitante(const int& id);
    void registrar_visita_atraccion(const int& visitante_id, const std::string& atraccion_nombre);
};

class AdministradorParque {
private:
    Parque parque;
public:
    AdministradorParque(Parque parque);
    void agregar_atraccion(const std::string& nombre, const int& capacidad, const bool& estado);
    void registrar_visitante(const int& id);
    void registrar_visita_atraccion(const int& visitante_id, const std::string& atraccion_nombre);
};

class Menu {
private:
    std::vector<std::string> opciones;
public:
    virtual void mostrar_opciones() const = 0;
};

class MenuAdministradorParque : public Menu {};

class MenuVisitante : public Menu {};

class GestorMenu {
private:
    Menu* menu;
public:
    void elegir_perfil();
    void cargar_menu();
};

class Simulacion {
private:
    GestorMenu gestor_menu;
    AdministradorParque administrador_parque;
public:
    void simular();
    void agregar_atraccion();
    void registrar_visitante();
    void registrar_visita_atraccion(int visitante_id, std::string atraccion_nombre);
};
