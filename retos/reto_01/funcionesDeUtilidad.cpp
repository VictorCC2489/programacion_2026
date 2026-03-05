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

void linea (){
    cout<<"-----------------------------------------------------------------------------"<<endl;
}

void imprimirCarros (vector<Coche>& PlacasCoche){
    linea();
    setlocale(LC_ALL, "en_US.UTF-8");
    int A = PlacasCoche.size();
    if (A == 0){
        cout<<"No hay coches registrados"<<endl;
    }else{
        cout<<"Hay "<<PlacasCoche.size()<<" coches registrados: "<<endl;
        for (int i = 0; i < PlacasCoche.size(); i++){
            cout<<"Coche numero "<<i+1<<": "<<endl;
            PlacasCoche[i].mostrarInformacion();

        }
    }
    linea();
}

void imprimirMotos (vector<Moto>& PlacasMoto){
    int B = PlacasMoto.size();
    setlocale(LC_ALL, "en_US.UTF-8");
    if (B == 0){
        cout<<"No hay motos registradas"<<endl;
    }else{
        cout<<"Hay "<<PlacasMoto.size()<<" motos registradas: "<<endl;
        for (int i = 0; i < PlacasMoto.size(); i++){
            cout<<"Moto numero "<<i+1<<": "<<endl;
            PlacasMoto[i].mostrarInformacion();

        }
    }
    linea();
}

void imprimirCamiones(vector<Camion>& PlacasCamion){
    int C = PlacasCamion.size();
    setlocale(LC_ALL, "en_US.UTF-8");
    if (C == 0){
        cout<<"No hay camiones registrados"<<endl;
    }else{
        cout<<"Hay "<<PlacasCamion.size()<<" camiones registrados: "<<endl;
        for (int i = 0; i < PlacasCamion.size(); i++){
            cout<<"Camion numero "<<i+1<<": "<<endl;
            PlacasCamion[i].mostrarInformacion();

        }
    }
    linea();
}

void imprimirAutobuses(vector<Autobus>& PlacasAutobus){
    int D = PlacasAutobus.size();
    setlocale(LC_ALL, "en_US.UTF-8");
    if (D == 0){
        cout<<"No hay autobuses registrados"<<endl;
    }else{
        cout<<"Hay "<<PlacasAutobus.size()<<" autobuses registrados: "<<endl;
        for (int i = 0; i < PlacasAutobus.size(); i++){
            cout<<"Autobus numero "<<i+1<<": "<<endl;
            PlacasAutobus[i].mostrarInformacion();

        }
    }
    linea();
}

void solicitudDplaca(){
    linea();
    int opcion;
    cout<<"Seleccione el número del vehículo del cual se desea tramitar la placa"<<endl;
    cout << "1. Coche\n";
    cout << "3. Moto\n";
    cout << "4. Camion\n";
    cout << "5. Autobus\n";
    cout << "Opcion: ";
    cin >> opcion;



    linea();
}

void cambioDplaca(){
    linea();
    cout<<"b"<<endl;
    linea();
}


