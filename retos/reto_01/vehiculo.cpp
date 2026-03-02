#include "vehiculo.h"
#include <iostream>

using namespace std;
// Constructor por defecto
Vehiculo::Vehiculo() {
    marca = "";
    modelo = "";
    anio = 0;
    placa = "";
}

// Constructor con parámetros
Vehiculo::Vehiculo(string marca, string modelo, int anio, string placa) {
    this->marca = marca;
    this->modelo = modelo;
    this->anio = anio;
    this->placa = placa;
}

// Métodos para actualizar
void Vehiculo::actualizarMarca(string nuevaMarca) {
    marca = nuevaMarca;
}

void Vehiculo::actualizarModelo(string nuevoModelo) {
    modelo = nuevoModelo;
}

void Vehiculo::actualizarAnio(int nuevoAnio) {
    anio = nuevoAnio;
}

void Vehiculo::actualizarPlaca(string nuevaPlaca) {
    placa = nuevaPlaca;
}

// Método para mostrar
void Vehiculo::mostrarInformacion() {
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Año: " << anio << endl;
    cout << "Placa: " << placa << endl;
}

// Getters
string Vehiculo::obtenerMarca() {
    return marca;
}

string Vehiculo::obtenerModelo() {
    return modelo;
}

int Vehiculo::obtenerAnio() {
    return anio;
}

string Vehiculo::obtenerPlaca(){
    return placa;
}
