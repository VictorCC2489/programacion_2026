#ifndef AUTOBUS_H
#define AUTOBUS_H

#include <string>
#include "vehiculo.h"

class Autobus : public Vehiculo {
private:
    int compania; //si es aty, ado, maya bus etc.

public:
    // Constructores
    Autobus();
    Autobus (std::string marca, std::string modelo, int anio, int compania);

    // Métodos para actualizar
    void actualizarCompania(int nuevaCompania);

    // Sobrescritura del método de la clase base
    void mostrarInformacion();

    // Getter
    int obtenerCompania();
};

#endif // COCHE_H
