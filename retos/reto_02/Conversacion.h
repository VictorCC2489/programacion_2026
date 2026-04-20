#ifndef CONVERSACION_H
#define CONVERSACION_H
#include <iostream>
#include <vector>
#include <ctime>
#include "mensaje.h"

#include <string>
using namespace std;

class Conversacion {
private:
    vector<Mensaje> mensajes;

public:
    // Constructor
    Conversacion ();
    Conversacion (vector<Mensaje> mensajes);

    // Métodos para actualizar
    void actualizarMensajes (Mensaje nuevoMensaje);

    // Métodos para mostrar
    void mostrarMensajeEspecifico(int numMensaje);
    void mostrarTodosLosMensajes();

    // Getters (opcionales, pero útiles)
    vector<Mensaje> obtenerMensajes();

    // Funciones de utilidad
    void guardarMensajes ();
};

#endif
