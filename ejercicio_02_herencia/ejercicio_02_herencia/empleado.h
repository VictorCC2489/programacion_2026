#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado {
protected:
    string nombre;
    string id;
    float salarioBase;

public:
    // Constructores
    Empleado();
    Empleado(string nombre, string id, float salarioBase);

    // Métodos para actualizar
    void actualizarNombre(string novoNombre);
    void actualizarId(string novoId);
    void actualizarSalarioBase(float novoSalario);

    // Métodos para mostrar
    void mostrarInformacion();

    // Getters
    string obtenerNombre();
    string obtenerId();
    float obtenerSalarioBase();
};

#endif
