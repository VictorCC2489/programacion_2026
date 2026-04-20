#include "conversacion.h"
#include <iostream>
#include <vector>
#include <ctime>
#include "mensaje.h"

#include <string>

using namespace std;

//Construccion
Conversacion::Estudiante(){
    vector<Mensaje> mensajes;
}

Conversacion::Estudiante(vector<Mensaje> mensajes){
    this -> vector<Mensaje> mensajes = vector<Mensaje> mensajes;
}


//Actualizadores

void Conversacion::actualizarMensajes (Mensaje nuevoMensaje){
    mensajes.push_back(nuevoMensaje);
}

//Funciones para mostrar

void Conversacion::mostrarMensajeEspecifico(int numMensaje){
    if (numMensaje >= 0 && numMensaje < mensajes.size()){
        cout<<"Mensaje "<<numMensaje<<": "<<mensajes[numMensaje].mostrarInformacionCompleta()<<endl;
    }else{
        cout<<"Error, mensaje no encontrado"<<endl;
    }
}

void Conversacion::mostrarTodosLosMensajes()(){
    for (int i = 0; i < mensajes.size(); i++){
        cout<<"Mensaje "<<i<<": "<<mensajes[i].mostrarInformacionCompleta()<<endl;
    }
}

//funciones de retorno del valor
vector<Mensaje> Conversacion::obtenerMensajes(){
    return mensajes;
}


//Funciones de utilidad

void Conversacion::guardarMensajes (){
    // Implementación para guardar mensajes
}

