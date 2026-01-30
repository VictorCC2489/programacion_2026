#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    string codigo;
    int edad;
    float promedio;
    bool activo;

public:
    // Constructor
    estudiante ();
    estudiante (string nombre, string codigo, int edad, float promedio, bool activo);

    // Métodos para actualizar
    void actualizarNombre (string nuevoNombre);
    void actualizarCodigo (string nuevoCodigo);
    void actualizarEdad (int nuevaEdad);
    void actualizar (float nuevoPromedio);
    void actualizar (bool nuevoEstado);

    // Métodos para mostrar
    void mostrarNombre();
    void mostrarCodigo();
    void mostrarEdad();
    void mostrarPromedio();
    void mostrarActivo();
    void mostrarInformacionCompleta();

    // Getters (opcionales, pero útiles)
    string obtenerNombre();
    string obtenerCodigo();
    int obtenerEdad();
    float obtenerPromedio();
    bool obtenerActivo();

    // Funciones de utilidad
    void incrementarEdad ();
    void calcularEstadoAcademico ();

};

#endif
