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
    EmpleadoDTC();
    EmpleadoDTC(string Crnombre, string Crid, float CrsalarioBase, int CrhorasSemanales, float Crbono);

    // Métodos para actualizar
    void actualizarHorasSemanales(int novoHoras);
    void actualizarBono (float novoBono);

    // Sobrescritura del método de la clase base
    void mostrarInformacion();

    // Getter
    int obtenerHorasSemanales();
    float obtenerBono();

    // Funciones de utilidad
    float calcularSalarioTotal();
};

#endif
