/*
 * Instrucciones de Compilación:
 *
 * Para compilar este programa, utiliza el siguiente comando:
 *
 *     g++ vehiculo.cpp coche.cpp main.cpp -o herencia
 *
 * O si prefieres usar la opción de estándar C++17:
 *
 *     g++ -std=c++17 vehiculo.cpp coche.cpp main.cpp -o herencia
 *
 * Para ejecutar el programa:
 *
 *     ./herencia
 */

#include <iostream>
#include <locale>
#include "vehiculo.h"
#include "coche.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    cout << "=== Ejemplo de herencia: Vehiculo y Coche ===" << endl;
    cout << endl;

    // Crear un vehículo (clase base)
    Vehiculo vehiculo1("Ford", "F-150", 2019);
    cout << "Vehículo 1 (clase base):" << endl;
    vehiculo1.mostrarInformacion();
    cout << endl;

    // Crear un coche usando el constructor por defecto
    Coche coche1;
    cout << "Coche 1 (constructor por defecto):" << endl;
    coche1.mostrarInformacion();
    cout << endl;

    // Actualizar los valores del coche1 (hereda setters de Vehiculo + propio)
    coche1.actualizarMarca("Toyota");
    coche1.actualizarModelo("Corolla");
    coche1.actualizarAnio(2022);
    coche1.actualizarNumeroPuertas(4);

    cout << "Coche 1 después de actualizar:" << endl;
    coche1.mostrarInformacion();
    cout << endl;

    // Crear un coche usando el constructor con parámetros
    Coche coche2("Honda", "Civic", 2020, 4);
    cout << "Coche 2 (constructor con parámetros):" << endl;
    coche2.mostrarInformacion();
    cout << endl;

    // Demostrar que Coche hereda los getters de Vehiculo
    cout << "Acceso a miembros heredados (Coche 2):" << endl;
    cout << "  Marca (heredado): " << coche2.obtenerMarca() << endl;
    cout << "  Modelo (heredado): " << coche2.obtenerModelo() << endl;
    cout << "  Año (heredado): " << coche2.obtenerAnio() << endl;
    cout << "  Puertas (propio): " << coche2.obtenerNumeroPuertas() << endl;
    cout << endl;

    // Modificar solo el número de puertas del coche2
    coche2.actualizarNumeroPuertas(2);
    cout << "Coche 2 después de cambiar a 2 puertas:" << endl;
    coche2.mostrarInformacion();

    return 0;
}
