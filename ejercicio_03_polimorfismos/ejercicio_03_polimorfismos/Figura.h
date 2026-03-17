#ifndef FIGURA_H
#define FIGURA_H

#include <string>

using namespace std;

class Figura {
protected:
    string nombre;

public:
    Figura(string nombre);
    virtual ~Figura();

    // Funciones virtuales puras: la clase es abstracta
    virtual double calcularArea() = 0; //Calcula el area de la figura
    virtual void describir() = 0; //Muestra en consola el nombre y los datos relevantes de la figura (radio, base y altura, etc.)

    // Getters (no virtuales, comunes a todos)
    string obtenerNombre();
};

#endif
