#include <iostream>
#include <vector>
#include <ctime>
#include "mensaje.h"
#include "Conversacion.h"

#include <string>
#include <locale>

int main() {
    setlocale(LC_ALL, "");
    string prompt;
    cout << "=== Chat ===" << endl;

    while (prompt != "2489") {
        cout << "Ingresa el prompt que desées (si deseas salir escribe 2489): " << endl;
        cin >> prompt;
    }


    return 2489;
}
