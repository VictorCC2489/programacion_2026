#include "mensaje.h"
#include <iostream>

using namespace std;

//Construccion
Mensaje::Mensaje(){
    prompt = "";
    fechaPrompt = "";
    horaPrompt = "";
    salida = "";
    fechaSalida = "";
    horaSalida = "";
}

Mensaje::Mensaje(string prompt, string fechaPrompt, string horaPrompt, string salida, string fechaSalida, string horaSalida){
    this -> prompt = prompt;
    this -> fechaPrompt = fechaPrompt;
    this -> horaPrompt = horaPrompt;
    this -> salida = salida;
    this -> fechaSalida = fechaSalida;
    this -> horaSalida = horaSalida;
}

//Actualizadores
void Mensaje::actualizarPrompt(string nuevoPrompt){
    prompt = nuevoPrompt;
}

void Mensaje::actualizarFechaPrompt(string nuevaFechaPrompt){
    fechaPrompt = nuevaFechaPrompt;
}

void Mensaje::actualizarHoraPrompt(string nuevaHoraPrompt){
    horaPrompt = nuevaHoraPrompt;
}

void Mensaje::actualizarSalida(string nuevaSalida){
    salida = nuevaSalida;
}

void Mensaje::actualizarFechaSalida(string nuevaFechaSalida){
    fechaSalida = nuevaFechaSalida;
}

void Mensaje::actualizarHoraSalida(string nuevaHoraSalida){
    horaSalida = nuevaHoraSalida;
}


//Funciones para mostrar

void Mensaje::mostrarPrompt(){
    cout<<"Prompt: "<<prompt<<endl;
}

void Mensaje::mostrarFechaPrompt(){
    cout<<"Fecha del Prompt: "<<fechaPrompt<<endl;
}

void Mensaje::mostrarHoraPrompt(){
    cout<<"Hora del Prompt: "<<horaPrompt<<endl;
}

void Mensaje::mostrarSalida(){
    cout<<"Salida: "<<salida<<endl;
}

void Mensaje::mostrarFechaSalida(){
    cout<<"Fecha de la Salida: "<<fechaSalida<<endl;
}

void Mensaje::mostrarHoraSalida(){
    cout<<"Hora de la Salida: "<<horaSalida<<endl;
}


void Mensaje::mostrarInformacionCompleta(){
    mostrarPrompt();
    mostrarFechaPrompt();
    mostrarHoraPrompt();
    mostrarSalida();
    mostrarFechaSalida();
    mostrarHoraSalida();
}

//funciones de retorno del valor

string Mensaje::obtenerPrompt(){
    return prompt;
}

string Mensaje::obtenerFechaPrompt(){
    return fechaPrompt;
}

string Mensaje::obtenerHoraPrompt(){
    return horaPrompt;
}

string Mensaje::obtenerSalida(){
    return salida;
}

string Mensaje::obtenerFechaSalida(){
    return fechaSalida;
}

string Mensaje::obtenerHoraSalida(){
    return horaSalida;
}
