#include <iostream>
#include "coche.h"
#include "moto.h"
#include "camion.h"
#include "autobus.h"

using namespace std;

int main() {

    // crear vehículos
    Coche coche1("Toyota", "Corolla", 2020, 4);
    coche1.actualizarPlaca("ABC-123");

    Moto moto1("Yamaha", "R3", 2022, 321);
    moto1.actualizarPlaca("MTR-456");

    Camion camion1("Volvo", "FH16", 2018, 2);
    camion1.actualizarPlaca("CAM-789");

    Autobus autobus1("Mercedes", "Sprinter", 2021, "ADO");
    autobus1.actualizarPlaca("BUS-321");

    int opcion;
    string nuevaPlaca;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Mostrar vehiculos\n";
        cout << "2. Cambiar placa coche\n";
        cout << "3. Cambiar placa moto\n";
        cout << "4. Cambiar placa camion\n";
        cout << "5. Cambiar placa autobus\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {

            case 1:
                // mostrar informacion de todos los vehiculos
                cout << "\n--- COCHE ---\n";
                coche1.mostrarInformacion();

                cout << "\n--- MOTO ---\n";
                moto1.mostrarInformacion();

                cout << "\n--- CAMION ---\n";
                camion1.mostrarInformacion();

                cout << "\n--- AUTOBUS ---\n";
                autobus1.mostrarInformacion();
                break;

            case 2:
                // Cambiar placa del coche
                cout << "Nueva placa del coche: ";
                cin >> nuevaPlaca;
                coche1.actualizarPlaca(nuevaPlaca);
                break;

            case 3:
                // Cambiar placa de la moto
                cout << "Nueva placa de la moto: ";
                cin >> nuevaPlaca;
                moto1.actualizarPlaca(nuevaPlaca);
                break;

            case 4:
                // Cambiar placa del camion
                cout << "Nueva placa del camion: ";
                cin >> nuevaPlaca;
                camion1.actualizarPlaca(nuevaPlaca);
                break;

            case 5:
                // Cambiar placa del autobus
                cout << "Nueva placa del autobus: ";
                cin >> nuevaPlaca;
                autobus1.actualizarPlaca(nuevaPlaca);
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

