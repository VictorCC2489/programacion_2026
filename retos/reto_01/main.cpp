#include <windows.h>
#include <iostream>
#include <locale>
#include <string>
#include "coche.h"
#include "moto.h"
#include "camion.h"
#include "autobus.h"
#include <vector>
#include "funcionesDeUtilidad.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Spanish_Mexico.1252");
    // crear vehículos
    vector<Coche>PlacasCoche;
    vector<Moto>PlacasMoto;
    vector<Camion>PlacasCamion;
    vector<Autobus>PlacasAutobus;

    Coche Coche_nuevo("abs", "1234", 12, "1231421", 4);
    PlacasCoche.push_back(Coche_nuevo);

    int opcion;
    string nuevaPlaca;

    do {
        cout << "\n===== Programa para solicitud y actualización de placas =====\n";
        cout << "1. Mostrar vehiculos registrados\n";
        cout << "2. Solicitar placa\n";
        cout << "3. Cambiar placa\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {

            case 1:
                // mostrar informacion de todos los vehiculos
                imprimirCarros(PlacasCoche);
                imprimirMotos(PlacasMoto);
                imprimirCamiones(PlacasCamion);
                imprimirAutobuses(PlacasAutobus);
                break;

            case 2:
                solicitudDplaca(PlacasCoche, PlacasMoto, PlacasCamion, PlacasAutobus);

                break;

            case 3:
                cambioDplaca(PlacasCoche, PlacasMoto, PlacasCamion, PlacasAutobus);

                break;

            case 0:
                // Salir del programa
                cout << "Programa finalizado.\n";
                break;

            default:
                cout << "Opcion invalida.\n";
        }

    } while (opcion != 0);

    return 0;
}

