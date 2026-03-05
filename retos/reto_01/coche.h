#ifndef COCHE_H
#define COCHE_H

#include <string>
#include "vehiculo.h"

using namespace std;
class Coche : public Vehiculo {
private:
    int numeroPuertas;

public:
    // Constructores
    Coche();
    Coche(string marca, string modelo, int anio, string placa, int numeroPuertas);

    // Métodos para actualizar
    void actualizarNumeroPuertas(int nuevoNumero);

    // Sobrescritura del método de la clase base
    void mostrarInformacion();

    // Getter
    int obtenerNumeroPuertas();
};

#endif // COCHE_H
