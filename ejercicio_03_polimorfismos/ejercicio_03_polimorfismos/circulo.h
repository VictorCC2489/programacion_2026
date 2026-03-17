#ifndef CIRCULO_H
#define CIRCULO_H
#include <string>
#include "Figura.h"

using namespace std;

class Circulo : public Figura{
private:
    double radio;

public:
    Circulo(string novo_nombre, double novo_radio);

    double calcularArea() override; //Calcula el area de la figura
    void describir() override; //Muestra en consola el nombre y los datos relevantes de la figura (radio, base y altura, etc.)

    // Getters (no virtuales, comunes a todos)
    double obtenerRadio();
};

#endif
