#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
using namespace std;

class Vehiculo {
protected:
    string marca;
    string modelo;
    int anio;
    string placa;

public:
    // Constructores
    Vehiculo();
    Vehiculo(string marca, string modelo, int anio, string placa);

    // Métodos para actualizar
    void actualizarMarca(string nuevaMarca);
    void actualizarModelo(string nuevoModelo);
    void actualizarAnio(int nuevoAnio);
    void actualizarPlaca(string nuevaPlaca);

    // Métodos para mostrar
    void mostrarInformacion();

    // Getters
    string obtenerMarca();
    string obtenerModelo();
    int obtenerAnio();
    string obtenerPlaca();
};

#endif // VEHICULO_H
