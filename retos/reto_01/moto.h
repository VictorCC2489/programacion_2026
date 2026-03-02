#ifndef MOTO_H
#define MOTO_H

#include <string>
#include "vehiculo.h"

using namespace std;

class Moto : public Vehiculo {
private:
    int cilindraje; //imprimir bajo medio o alto y entre parentecis el total

public:
    // Constructores
    Moto();
    Moto(string marca, string modelo, int anio, int cilindraje);

    // Métodos para actualizar
    void actualizarCilindraje(int nuevoCilindraje);

    // Sobrescritura del método de la clase base
    void mostrarInformacion();

    // Getter
    int obtenerCilindraje();
};

#endif // MOTO_H
