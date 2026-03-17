#include "circulo.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

Circulo::Circulo(string novo_nombre, double novo_radio) : Figura(novo_nombre){
    radio = novo_radio;
}

double Circulo::calcularArea(){
    double area;
    area = M_PI * pow(radio, 2);
    return area;
}

void Circulo::describir(){
    cout<<"Figura: "<< nombre <<", radio: "<< radio<<endl;
}

double Circulo::obtenerRadio(){
    return radio;
}

