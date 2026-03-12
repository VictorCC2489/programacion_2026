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

void linea (){
    cout<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
}

void imprimirCarros (vector<Coche>& PlacasCoche){
    linea();
    int A = PlacasCoche.size();
    if (A == 0){
        cout<<"No hay coches registrados"<<endl;
    }else{
        cout<<"Hay "<<PlacasCoche.size()<<" coches registrados: "<<endl;
        for (size_t i = 0; i < PlacasCoche.size(); i++){
            cout<<"Coche numero "<<i+1<<": "<<endl;
            PlacasCoche[i].mostrarInformacion();

        }
    }
    linea();
}

void imprimirMotos (vector<Moto>& PlacasMoto){
    int B = PlacasMoto.size();
    if (B == 0){
        cout<<"No hay motos registradas"<<endl;
    }else{
        cout<<"Hay "<<PlacasMoto.size()<<" motos registradas: "<<endl;
        for (size_t i = 0; i < PlacasMoto.size(); i++){
            cout<<"Moto numero "<<i+1<<": "<<endl;
            PlacasMoto[i].mostrarInformacion();

        }
    }
    linea();
}

void imprimirCamiones(vector<Camion>& PlacasCamion){
    int C = PlacasCamion.size();
    if (C == 0){
        cout<<"No hay camiones registrados"<<endl;
    }else{
        cout<<"Hay "<<PlacasCamion.size()<<" camiones registrados: "<<endl;
        for (size_t i = 0; i < PlacasCamion.size(); i++){
            cout<<"Camion numero "<<i+1<<": "<<endl;
            PlacasCamion[i].mostrarInformacion();

        }
    }
    linea();
}

void imprimirAutobuses(vector<Autobus>& PlacasAutobus){
    int D = PlacasAutobus.size();
    if (D == 0){
        cout<<"No hay autobuses registrados"<<endl;
    }else{
        cout<<"Hay "<<PlacasAutobus.size()<<" autobuses registrados: "<<endl;
        for (size_t i = 0; i < PlacasAutobus.size(); i++){
            cout<<"Autobus numero "<<i+1<<": "<<endl;
            PlacasAutobus[i].mostrarInformacion();

        }
    }
    linea();
}



void solicitudCoche(vector<Coche>& PlacasCoche){
    string vigencia, tipoLicencia, facturaAcreedora, CURP, ClaveElector, marca, modelo, placa;
    int numLicencia, numPoliza, anio, puertas;

    cout<<"Ingresa la vigencia de la licencia:";
    cin >> vigencia;
    cout<<endl;
    cout<<"Ingresa el número de la licencia";
    cin >> numLicencia;
    cout<<endl;
    cout<<"Ingresa el tipo de licencia con el que cuente (A, B, C o E): ";
    cin >> tipoLicencia;
    cout<<endl;

    while (tipoLicencia != "A" && tipoLicencia != "0" && tipoLicencia != "A2"){
        cout<<"Licencia no válida para acreditar una placa, ingrese de nuevo y si no cuenta con una licencia de tipo A o A2 escriba 0"<<endl;
        cout<<"Ingrese nuevamente el tipo de licencia: ";
        cin >> tipoLicencia;
        cout<<endl;
        if (tipoLicencia == "0"){
            cout<<"Solicitud de placa no aprovada"<<endl;
            return;
        }

    }

    cout<<"Ingresa el número de la póliza de seguro: ";
    cin >> numPoliza;

    cout<<"Ingrese la factura que acridite su posecion del vehículo: ";
    cin >> facturaAcreedora;

    cout<<"Ingresa tu INE (ya que no se procesar imagenes solo escribe tu CURP y tu clave de elector)"<<endl;
    cout<<"CURP: ";
    cin >> CURP;
    cout<<endl;
    cout<<"Clave de elector: ";
    cin >> ClaveElector;
    cout<<endl;


    cout<<"Datos verificados, a continuacin escribiras los siguientes datos respecto al vehículo"<<endl;
    cout<<"Ingresa la marca de coche: ";
    cin >> marca;
    cout<<endl;

    cout<<"Ingresa el modelo del coche: ";
    cin >> modelo;
    cout<<endl;

    cout<<"Ingresa el año del coche: ";
    cin >> anio;
    cout<<endl;

    cout<<"Ingresa el número de puertas del coche: ";
    cin >> puertas;
    cout<<endl;

    cout<<"Ingresa la placa que se le asignara al coche (finjamos que estamos en ciudad de México porque no pienso aleatorizar placas (todavía)): ";
    cin >> placa;
    cout<<endl;

    Coche nuevo_coche(marca, modelo, anio, placa, puertas);
    PlacasCoche.push_back(nuevo_coche);
    cout<<"Se a registrado con exito el coche"<<endl;
    linea();
}

void solicitudMoto(vector<Moto>& PlacasMoto){
    string vigencia, tipoLicencia, facturaAcreedora, CURP, ClaveElector, marca, modelo, placa;
    int numLicencia, numPoliza, anio, cilindraje;

    cout<<"Ingresa la vigencia de la licencia:";
    cin >> vigencia;
    cout<<endl;
    cout<<"Ingresa el número de la licencia";
    cin >> numLicencia;
    cout<<endl;
    cout<<"Ingresa el tipo de licencia con el que cuente (A, A1, A2, B, C o E): ";
    cin >> tipoLicencia;
    cout<<endl;

    while (tipoLicencia != "A1" && tipoLicencia != "A2" && tipoLicencia != "0"){
        cout<<"Licencia no válida para acreditar una placa, ingrese de nuevo y si no cuenta con una licencia de tipo A1 o A2 escriba 0"<<endl;
        cout<<"Ingrese nuevamente el tipo de licencia: ";
        cin >> tipoLicencia;
        cout<<endl;
        if (tipoLicencia == "0"){
            cout<<"Solicitud de placa no aprovada"<<endl;
            return;
        }

    }

    cout<<"Ingresa el número de la póliza de seguro: ";
    cin >> numPoliza;

    cout<<"Ingrese la factura que acridite su posecion del vehículo: ";
    cin >> facturaAcreedora;

    cout<<"Ingresa tu INE (ya que no se procesar imagenes solo escribe tu CURP y tu clave de elector)"<<endl;
    cout<<"CURP: ";
    cin >> CURP;
    cout<<endl;
    cout<<"Clave de elector: ";
    cin >> ClaveElector;
    cout<<endl;


    cout<<"Datos verificados, a continuacin escribiras los siguientes datos respecto al vehículo"<<endl;
    cout<<"Ingresa la marca de la moto: ";
    cin >> marca;
    cout<<endl;

    cout<<"Ingresa el modelo de la moto: ";
    cin >> modelo;
    cout<<endl;

    cout<<"Ingresa el año de la moto: ";
    cin >> anio;
    cout<<endl;

    cout<<"Ingresa el cilindraje de la moto: ";
    cin >> cilindraje;
    cout<<endl;

    cout<<"Ingresa la placa que se le asignara a la moto (finjamos que estamos en ciudad de México porque no pienso aleatorizar placas (todavía)): ";
    cin >> placa;
    cout<<endl;

    Moto nueva_moto(marca, modelo, anio, placa, cilindraje);
    PlacasMoto.push_back(nueva_moto);
    cout<<"Se a registrado con exito la moto"<<endl;
    linea();
}

void solicitudCamion(vector<Camion>& PlacasCamion){
    string vigencia, tipoLicencia, facturaAcreedora, CURP, ClaveElector, marca, modelo, placa;
    int numLicencia, numPoliza, anio, cargaEstimada;

    cout<<"Ingresa la vigencia de la licencia:";
    cin >> vigencia;
    cout<<endl;
    cout<<"Ingresa el número de la licencia";
    cin >> numLicencia;
    cout<<endl;
    cout<<"Ingresa el tipo de licencia con el que cuente (A, A1, A2, B, C o E): ";
    cin >> tipoLicencia;
    cout<<endl;

    while (tipoLicencia != "A1" && tipoLicencia != "A2" && tipoLicencia != "0"){
        cout<<"Licencia no válida para acreditar una placa, ingrese de nuevo y si no cuenta con una licencia de tipo A1 o A2 escriba 0"<<endl;
        cout<<"Ingrese nuevamente el tipo de licencia: ";
        cin >> tipoLicencia;
        cout<<endl;
        if (tipoLicencia == "0"){
            cout<<"Solicitud de placa no aprovada"<<endl;
            return;
        }

    }

    cout<<"Ingresa el número de la póliza de seguro: ";
    cin >> numPoliza;

    cout<<"Ingrese la factura que acridite su posecion del vehículo: ";
    cin >> facturaAcreedora;

    cout<<"Ingresa tu INE (ya que no se procesar imagenes solo escribe tu CURP y tu clave de elector)"<<endl;
    cout<<"CURP: ";
    cin >> CURP;
    cout<<endl;
    cout<<"Clave de elector: ";
    cin >> ClaveElector;
    cout<<endl;


    cout<<"Datos verificados, a continuacin escribiras los siguientes datos respecto al vehículo"<<endl;
    cout<<"Ingresa la marca de la moto: ";
    cin >> marca;
    cout<<endl;

    cout<<"Ingresa el modelo de la moto: ";
    cin >> modelo;
    cout<<endl;

    cout<<"Ingresa el año de la moto: ";
    cin >> anio;
    cout<<endl;

    cout<<"Ingresa la placa que se le asignara a la moto (finjamos que estamos en ciudad de México porque no pienso aleatorizar placas (todavía)): ";
    cin >> placa;
    cout<<endl;

    Camion nuevo_camion(marca, modelo, anio, placa, cargaEstimada);
    PlacasCamion.push_back(nueva_moto);
    cout<<"Se a registrado con exito el camion"<<endl;
    linea();
}

void solicitudAutobus(vector<Autobus>& PlacasAutobus){

}

void solicitudDplaca(vector<Coche>& PlacasCoche, vector<Moto>& PlacasMoto, vector<Camion>& PlacasCamion, vector<Autobus>& PlacasAutobus){
    linea();
    int opcion;
    cout<<"Seleccione el número del vehículo del cual se desea tramitar la placa"<<endl;
    cout << "1. Coche\n";
    cout << "2. Moto\n";
    cout << "3. Camion\n";
    cout << "4. Autobus\n";
    cout << "5. Salir\n";
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
            case 1:
                solicitudCoche(PlacasCoche);
                break;

            case 2:
                solicitudMoto(PlacasMoto);
                break;

            case 3:
                solicitudCamion(PlacasCamion);
                break;

            case 4:
                solicitudAutobus(PlacasAutobus);
                break;

            case 5:
                return;
                break;
            default:
                cout << "Opcion invalida.\n";
        }

    linea();
}

void cambioDplaca(vector<Coche>& PlacasCoche, vector<Moto>& PlacasMoto, vector<Camion>& PlacasCamion, vector<Autobus>& PlacasAutobus){
    linea();
    cout<<"b"<<endl;
    linea();
}
