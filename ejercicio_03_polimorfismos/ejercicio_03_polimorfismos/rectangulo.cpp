#include "rectangulo.h"
#include <iostream>
#include <string>

using namespace std;

Rectangulo::Rectangulo(string novo_nombre, double novo_base, double novo_altura) : Figura(novo_nombre){
    base = novo_base;
    altura = novo_altura;
}

double Rectangulo::calcularArea(){
    double area;
    area = base * altura;
    return area;
}

void Rectangulo::describir(){
    cout<<"Figura: "<< nombre <<", base: "<< base<<", altura: "<< altura<<endl;
}

double Rectangulo::obtenerBase(){
    return base;
}

double Rectangulo::obtenerAltura(){
    return altura;
}

