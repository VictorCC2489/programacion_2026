#ifndef MENSAJE_H
#define MENSAJE_H

#include <string>
using namespace std;

class Mensaje {
private:
    string prompt;
    string fechaPrompt;
    string horaPrompt;
    string salida;
    string fechaSalida;
    string horaSalida;

public:
    // Constructor
    Mensaje ();
    Mensaje (string prompt, string fechaPrompt, string horaPrompt, string salida, string fechaSalida, string horaSalida);

    // Métodos para actualizar
    void actualizarPrompt (string nuevoPrompt);
    void actualizarFechaPrompt (string nuevaFechaPrompt);
    void actualizarHoraPrompt (string nuevaHoraPrompt);
    void actualizarSalida (string nuevaSalida);
    void actualizarFechaSalida (string nuevaFechaSalida);
    void actualizarHoraSalida (string nuevaHoraSalida);

    // Métodos para mostrar
    void mostrarPrompt();
    void mostrarFechaPrompt();
    void mostrarHoraPrompt();
    void mostrarSalida();
    void mostrarFechaSalida();
    void mostrarHoraSalida();

    void mostrarInformacionCompleta();


    // Getters (opcionales, pero útiles)
    string obtenerPrompt();
    string obtenerFechaPrompt();
    string obtenerHoraPrompt();
    string obtenerSalida();
    string obtenerFechaSalida();
    string obtenerHoraSalida();

};

#endif
