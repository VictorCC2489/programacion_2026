#ifndef AUTOBUS_H
#define AUTOBUS_H

#include <string>
#include "vehiculo.h"

using namespace std;
class Autobus : public Vehiculo {
private:
    string compania; //si es aty, ado, maya bus etc.

public:
    // Constructores
    Autobus();
    Autobus (string marca, string modelo, int anio, string placa, string compania);

    // Métodos para actualizar
    void actualizarCompania(string nuevaCompania);

    // Sobrescritura del método de la clase base
    void mostrarInformacion();

    // Getter
    string obtenerCompania();
};

#endif // COCHE_H
