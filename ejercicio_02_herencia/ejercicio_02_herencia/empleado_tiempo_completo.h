#ifndef EMPLEADO_D_T_C_H
#define EMPLEADO_D_T_C_H

#include <string>
#include "empleado.h"

class EmpleadoDTC : public Empleado {
private:
    int horasSemanales;
    float bono;

public:
    // Constructores
    Coche();
    Coche(std::string marca, std::string modelo, int anio, int numeroPuertas);

    // Métodos para actualizar
    void actualizarNumeroPuertas(int nuevoNumero);

    // Sobrescritura del método de la clase base
    void mostrarInformacion();

    // Getter
    int obtenerNumeroPuertas();
};

#endif
