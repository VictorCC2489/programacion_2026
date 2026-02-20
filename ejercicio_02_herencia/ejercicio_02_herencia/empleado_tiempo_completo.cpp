#include "empleado_tiempo_completo.h"
#include <iostream>

// Constructor por defecto: llama al constructor por defecto
    EmpleadoDTC::EmpleadoDTC() : Empleado(){
        horasSemanales = 0;
        bono = 0.0;
    }
// Constructor con parámetros: pasa los datos a la base
    EmpleadoDTC::EmpleadoDTC(string Crnombre, string Crid, float CrsalarioBase, int CrhorasSemanales, float Crbono) : Empleado(Crnombre, Crid, CrsalarioBase){
        horasSemanales = CrhorasSemanales;
        bono = Crbono;
    }
// Método para actualizar
    void EmpleadoDTC::actualizarHorasSemanales(int novoHoras){
        horasSemanales = novoHoras;
    }

    void EmpleadoDTC::actualizarBono(float novoBono){
        bono = novoBono;
    }
// Sobrescritura: reutiliza el método de la base y añade información
    void EmpleadoDTC::mostrarInformacion(){
        Empleado::mostrarInformacion();
        cout<<"Horas semanales: "<<horasSemanales<<endl;
        cout<<"Bono: "<<bono<<endl;
    }

// Getter
    int EmpleadoDTC::obtenerHorasSemanales(){
        return horasSemanales;
    }

    float EmpleadoDTC::obtenerBono(){
        return bono;
    }

//Funciones de utilidad

    float EmpleadoDTC::calcularSalarioTotal(){
        float a,b;
        b = obtenerSalarioBase();
        a = b + bono;
        return a;
    }
