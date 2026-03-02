#include "coche.h"
#include <iostream>

using namespace std;
// Constructor por defecto: llama al constructor por defecto de Vehiculo
Coche::Coche() : Vehiculo() {
    numeroPuertas = 0;
}

// Constructor con parámetros: pasa los datos del vehículo a la base
Coche::Coche(string marca, string modelo, int anio, int numeroPuertas)
    : Vehiculo(marca, modelo, anio) {
    this->numeroPuertas = numeroPuertas;
}

// Método para actualizar
void Coche::actualizarNumeroPuertas(int nuevoNumero) {
    numeroPuertas = nuevoNumero;
}

// Sobrescritura: reutiliza el método de la base y añade información del coche
void Coche::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    cout << "Número de puertas: " << numeroPuertas << endl;
}

// Getter
int Coche::obtenerNumeroPuertas() {
    return numeroPuertas;
}
