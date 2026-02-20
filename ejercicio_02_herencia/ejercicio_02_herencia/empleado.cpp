#include "empleado.h"
#include <iostream>

using namespace std;
// Constructor por defecto
void Empleado::Empleado(){
    nombre = "";
    id = "";
    salarioBase = 0.0;
}

// Constructor con parámetros
void Empleado::Empleado(string Crnombre, string Crid, float CrsalarioBase){
    nombre = Crnombre;
    id = Crid;
    salarioBase = CrsalarioBase;
}

// Métodos para actualizar
void Empleado::actualizarNombre(string novoNombre){
    nombre = novoNombre;
}

void Empleado::actualizarId(string novoId){
    id = novoId;
}

void Empleado::actualizarSalarioBase(float novoSalario){
    salarioBase = novoSalario;
}
// Método para mostrar
void Empleado::mostrarInformacion(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"Salario: "<<salarioBase<<endl;
}

// Getters
string Empleado::obtenerNombre(){
    return nombre;
}

string Empleado::obtenerId(){
    return id;
}

float Empleado::obtenerSalarioBase(){
    return salarioBase;
}
