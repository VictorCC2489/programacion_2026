#include "estudiante.h"
#include <iostream>

using namespace std;

//Construccion
Estudiante::Estudiante(){
    nombre = "";
    codigo = "";
    edad = 0;
    promedio = 0.0;
    activo = false;
}

Estudiante::Estudiante(string nombre, string codigo, int edad, float promedio, bool activo){
    this -> nombre = nombre;
    this -> codigo = codigo;
    this -> edad = edad;
    this -> promedio = promedio;
    this -> activo = activo;
}

//Actualizadores
void Estudiante::actualizarNombre(string nuevoNombre){
    nombre = nuevoNombre;
}

void Estudiante::actualizarCodigo(string nuevoCodigo){
    codigo = nuevoCodigo;
}

void Estudiante::actualizarEdad(int nuevaEdad){
    edad = nuevaEdad;
}

void Estudiante::actualizarPromedio(float nuevoPromedio){
    if (nuevoPromedio >= 0 && nuevoPromedio <= 10){
        promedio = nuevoPromedio;
    }else{
        cout<<"Error, número no válido, el rango permitido es de 0.0 al 10.0"<<endl;
    }
}

void Estudiante::actualizarActivo(bool nuevoActivo){
    activo = nuevoActivo;
}

//Funciones para mostrar

void Estudiante::mostrarNombre(){
    cout<<"Nombre: "<<nombre<<endl;
}

void Estudiante::mostrarCodigo(){
    cout<<"Código: "<<codigo<<endl;
}

void Estudiante::mostrarEdad(){
    cout<<"Edad: "<<edad<<" años"<<endl;
}

void Estudiante::mostrarPromedio(){
    cout<<"Promedio: "<<promedio<<endl;
}

void Estudiante::mostrarActivo(){
    cout<<"Estado: ";
    if (activo == true){
        cout<<"Activo"<<endl;
    }else{
        cout<<"Inactivo"<<endl;
    }
}

void Estudiante::mostrarInformacionCompleta(){
    mostrarNombre();
    mostrarCodigo();
    mostrarEdad();
    mostrarPromedio();
    mostrarActivo();
    calcularEstadoAcademico();
}

//funciones de retorno del valor
string Estudiante::obtenerNombre(){
    return nombre;
}

string Estudiante::obtenerCodigo(){
    return codigo;
}

int Estudiante::obtenerEdad(){
    return edad;
}

float Estudiante::obtenerPromedio(){
    return promedio;
}

bool Estudiante::obtenerActivo(){
    return activo;
}


//Funciones de utilidad

void Estudiante::incrementarEdad(){
    edad += 1;
}

void Estudiante::calcularEstadoAcademico(){
    if (promedio < 6){
        cout<<"Estado académico: Necesita mejorar"<<endl;
    }

    if (promedio >= 6 && promedio < 7){
        cout<<"Estado académico: Regular"<<endl;
    }

    if (promedio >= 7 && promedio < 8){
        cout<<"Estado académico: Bueno"<<endl;
    }

    if (promedio >= 8 && promedio < 9){
        cout<<"Estado académico: Muy bueno"<<endl;
    }

    if (promedio >= 9){
        cout<<"Estado académico: Excelente"<<endl;
    }
}
