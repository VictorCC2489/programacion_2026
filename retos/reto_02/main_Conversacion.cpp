#include <iostream>
#include <vector>
#include <ctime>
#include "mensaje.h"
#include "Conversacion.h"

#include <string>
#include <locale>
#include <sstream>
#include <iomanip>

using namespace std;

// Función para obtener la fecha actual en formato DD/MM/YYYY
string obtenerFechaActual() {
    time_t tiempoActual = time(nullptr);
    tm* tiempoLocal = localtime(&tiempoActual);
    
    ostringstream oss;
    oss << setfill('0') << setw(2) << tiempoLocal->tm_mday << "/"
        << setw(2) << (tiempoLocal->tm_mon + 1) << "/"
        << (tiempoLocal->tm_year + 1900);
    
    return oss.str();
}

// Función para obtener la hora actual en formato HH:MM:SS
string obtenerHoraActual() {
    time_t tiempoActual = time(nullptr);
    tm* tiempoLocal = localtime(&tiempoActual);
    
    ostringstream oss;
    oss << setfill('0') << setw(2) << tiempoLocal->tm_hour << ":"
        << setw(2) << tiempoLocal->tm_min << ":"
        << setw(2) << tiempoLocal->tm_sec;
    
    return oss.str();
}

int main() {
    setlocale(LC_ALL, "");
    string prompt;
    Conversacion chat;
    
    cout << "=== Chat ===" << endl;

    while (prompt != "2489") {
        cout << "Ingresa el prompt que desées (si deseas salir escribe 2489): " << endl;
        cin >> prompt;
        
        if (prompt == "2489") {
            cout << "Saliendo del programa..." << endl;
            break;
        }
        
        // Obtener fecha y hora actual
        string fechaActual = obtenerFechaActual();
        string horaActual = obtenerHoraActual();
        
        // Crear un nuevo mensaje con el prompt ingresado
        Mensaje nuevoMensaje(prompt, fechaActual, horaActual, prompt, fechaActual, horaActual);
        
        // Agregar el mensaje a la conversación
        chat.actualizarMensajes(nuevoMensaje);
        
        // Guardar el mensaje en archivo
        chat.guardarMensajes();
        
        cout << "Mensaje registrado." << endl;
    }


    return 2489;
}
