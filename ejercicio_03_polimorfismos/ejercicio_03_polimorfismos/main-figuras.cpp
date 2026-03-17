#include <iostream>
#include "Figura.h"
#include "circulo.h"
#include "rectangulo.h"
#include <locale>

using namespace std;


int main() {
    setlocale(LC_ALL, "");
    cout << "=== Sistema de Figuras Geométricas (Polimorfismo) ===" << endl;
    cout << endl;

    // Punteros a la clase base que apuntan a objetos derivados
    Figura* f1 = new Circulo("Círculo", 5.0);
    Figura* f2 = new Rectangulo("Rectángulo", 4.0, 6.0);

    cout << "--- Figura 1 (Círculo) ---" << endl;
    f1->describir();
    cout << "Área: " << f1->calcularArea() << endl;
    cout << endl;

    cout << "--- Figura 2 (Rectángulo) ---" << endl;
    f2->describir();
    cout << "Área: " << f2->calcularArea() << endl;
    cout << endl;

    // Misma interfaz, comportamiento distinto (polimorfismo)
    cout << "--- Tratamiento uniforme con Figura* ---" << endl;
    Figura* figuras[] = { f1, f2 };
    for (int i = 0; i < 2; i++) {
        figuras[i]->describir();
        cout << "Área: " << figuras[i]->calcularArea() << endl;
    }

    delete f1;
    delete f2;

    return 2489;
}

//IHIZ estuvo aquí
