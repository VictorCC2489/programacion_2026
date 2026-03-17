#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <string>
#include "Figura.h"

using namespace std;

class Rectangulo : public Figura{
private:
    double base;
    double altura;

public:
    Rectangulo(string novo_nombre, double novo_base, double novo_altura);

    double calcularArea() override; //Calcula el area de la figura
    void describir() override; //Muestra en consola el nombre y los datos relevantes de la figura (radio, base y altura, etc.)

    // Getters (no virtuales, comunes a todos)
    double obtenerBase();
    double obtenerAltura();
};

#endif
