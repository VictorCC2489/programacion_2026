#include "camion.h"
#include <iostream>

using namespace std;
// Constructor por defecto: llama al constructor por defecto de Vehiculo
Camion::Camion() : Vehiculo() {
    cargaEstimada = 0;
}

// Constructor con parámetros: pasa los datos del vehículo a la base
Camion::Camion(string marca, string modelo, int anio, string placa, int cargaEstimada)
    : Vehiculo(marca, modelo, anio, placa) {
    this->cargaEstimada = cargaEstimada;
}

// Método para actualizar
void Camion::actualizarCargaEstimada(int nuevaCarga){
    cargaEstimada = nuevaCarga;
}

// Sobrescritura: reutiliza el método de la base y añade información del camión
void Camion::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    cout << "Carga estimada del camión: " << cargaEstimada << endl;
}

// Getter
int Camion::obtenerCargaEstimada() {
    return cargaEstimada;
}
