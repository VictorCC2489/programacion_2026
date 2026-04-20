#include "conversacion.h"
#include <iostream>
#include <vector>
#include <ctime>
#include "mensaje.h"
#include <fstream>

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
    ofstream archivo("mensajes.txt", ios::app);
    
    if (archivo.is_open()) {
        if (mensajes.size() > 0) {
            Mensaje ultimoMensaje = mensajes[mensajes.size() - 1];
            
            archivo << "--- Mensaje " << mensajes.size() << " ---" << endl;
            archivo << "Prompt: " << ultimoMensaje.obtenerPrompt() << endl;
            archivo << "Fecha Prompt: " << ultimoMensaje.obtenerFechaPrompt() << endl;
            archivo << "Hora Prompt: " << ultimoMensaje.obtenerHoraPrompt() << endl;
            archivo << "Salida: " << ultimoMensaje.obtenerSalida() << endl;
            archivo << "Fecha Salida: " << ultimoMensaje.obtenerFechaSalida() << endl;
            archivo << "Hora Salida: " << ultimoMensaje.obtenerHoraSalida() << endl;
            archivo << "---" << endl << endl;
        }
        archivo.close();
    }
}

