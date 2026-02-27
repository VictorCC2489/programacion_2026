#ifndef CAMION_H
#define CAMION_H

#include <string>
#include "vehiculo.h"

class Camion : public Vehiculo {
private:
    int cargaEstimada; //si se usara con uno o mas

public:
    // Constructores
    Camion();
    Camion(std::string marca, std::string modelo, int anio, int cargaEstimada);

    // Métodos para actualizar
    void actualizarCargaEstimada(int nuevaCarga);

    // Sobrescritura del método de la clase base
    void mostrarInformacion();

    // Getter
    int obtenerCargaEstimada();
};

#endif // CAMION_H
