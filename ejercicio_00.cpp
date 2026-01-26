#include <iostream>
#include <locale>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

struct alumno{
    string nombre;
    string codigo;
    int edad;
    float promedio;
    bool activo;

};

vector<alumno> AlumnosReg;

void linea (){
cout<<"--------------------------------------------------------------"<<endl;
}

void minilinea(){
cout<<"-------------------------------"<<endl;
}

void crearEstudiante(vector<alumno>& AlumnosReg);
void editarEstudiante(vector<alumno>& AlumnosReg);
void mostrarEstudiante (vector<alumno>& AlumnosReg);
void mostrarTestudiantes ();


void actualizarNombre(int a); //Actualiza el nombre del estudiante
void actualizarCodigo(int a); //Actualiza el código del estudiante
void actualizarEdad(int a); //Actualiza la edad del estudiante
void actualizarPromedio(int a); //Actualiza el promedio (debe validar que esté entre 0.0 y 10.0)
void actualizarActivo(int a); //Actualiza el estado activo del estudiante

int eleccionestudiante (){
    int a;
    bool b = true;
        cout<<"Hay "<<AlumnosReg.size()<<" estudiantes registrados actualmente, selecciona el número del estudiante"<<endl;
        cin>>a;
    while (b == true){
        if (a < 1 || a > AlumnosReg.size()){
            cout<<"Número de estudiante no encontrado, ingresa otro número"<<endl;
            cin>>a;
        }else{
            b = false;
        }
    }
    return a - 1;
}
//-----------------------------------------------------------------------------------------------------------------------------
void mostrarNombre(int NumeroEstudiante); // Muestra en consola "Nombre: [nombre]"
void mostrarCodigo(int NumeroEstudiante); // Muestra en consola "Código: [codigo]"
void mostrarEdad(int NumeroEstudiante); // Muestra en consola "Edad: [edad] años"
void mostrarPromedio(int NumeroEstudiante); // Muestra en consola"Promedio: [promedio]"
void mostrarActivo(int NumeroEstudiante); // Muestra en consola: "Estado: Activo" o "Estado: Inactivo"
void mostrarInformacionCompleta(int NumeroEstudiante); // Muestra toda la información del estudiante de forma organizada

bool Salir = false;

void Select(int n){
    switch (n){
        case 1: //agregar nuevo estudiante
            minilinea();
            crearEstudiante(AlumnosReg);

            break;
        case 2: //editar la información de un estudiante
            minilinea();
            if (AlumnosReg.size() == 0){
                cout<<"No hay estudiantes, no se puede realizar esta función"<<endl;
                break;
            }
            editarEstudiante(AlumnosReg);

            break;
        case 3: //mostar un estudiante especpifico
            minilinea();
            if (AlumnosReg.size() == 0){
                cout<<"No hay estudiantes, no se puede realizar esta función"<<endl;
                break;
            }
            mostrarEstudiante(AlumnosReg);

            break;
        case 4: //mostar todos los estudiantes
            minilinea();
            if (AlumnosReg.size() == 0){
                cout<<"No hay estudiantes, no se puede realizar esta función"<<endl;
                break;
            }
            mostrarTestudiantes();

            break;
        case 5:
            Salir = true;

            break;
        default:
            cout << "Número no válido" <<endl;
    }
}

int main (){
    int a;
    setlocale(LC_ALL, "");

    while (Salir == false){
        linea();
        cout<<"Ingresa el número de la ación que deseas realizar: \n 1. Agregar nuevo estudiante \n 2. Editar la información de un estudiante \n 3. Mostar un estudiante especpifico \n 4. mostar todos los estudiantes \n 5. Salir del programa"<<endl<<endl<<"Escribe aqui: ";

        cin>>a;
        Select(a);
    }
return 2489;
}

//-------------------------------------------------------------------------------------------------------------------
void crearEstudiante (vector<alumno>& AlumnosReg){
    string a,b;
    int c;
    float d;
    bool e;
    cout<<"Ingresa el nombre del estudiante: ";
    cin>>a;
    cout<<endl;
    cout<<"Ingresa la matrícula del estudiante: ";
    cin>>b;
    cout<<endl;
    cout<<"Ingresa la edad del estudiante: ";
    cin>>c;
    cout<<endl;
    cout<<"Ingresa el promedio del estudiante: ";
    cin>>d;
    while (d < 0 || d > 10){
        cout<<"El promedio debe ser un número entre el 0 y el 10, por favor vuelve a ingresarlo"<<endl;
        cin>>d;
    }
    cout<<endl;
    cout<<"Ingresa el estado de actividad del estudiante en el sistema (Activo=1 ó true / Inactivo=0 ó false) ";
    cin>>e;
    cout<<endl;
    alumno nueva_carta;
    nueva_carta.nombre = a;
    nueva_carta.codigo = b;
    nueva_carta.edad = c;
    nueva_carta.promedio = d;
    nueva_carta.activo = e;

    AlumnosReg.push_back(nueva_carta);

    cout<<"Perfil creado, su número asignado es el: "<< AlumnosReg.size()<<endl;
}

void editarEstudiante (vector<alumno>& AlumnosReg){
    bool b = true;
    int a = eleccionestudiante();


    cout<<"¿Deseas actualizar el nómbre (Si=1 ó true / N=0 ó false)? ";
    cin>>b;
    if (b == true){
        actualizarNombre(a);
        cout<<"Nombre actualizado"<<endl;
    }

    cout<<"¿Deseas actualizar el código (Si=1 ó true / N=0 ó false)? ";
    cin>>b;
    if (b == true){
        actualizarCodigo(a);
        cout<<"Código actualizado"<<endl;
    }

    cout<<"¿Deseas actualizar la edad (Si=1 ó true / N=0 ó false)? ";
    cin>>b;
    if (b == true){
        actualizarEdad(a);
        cout<<"Edad actualizado"<<endl;
    }

    cout<<"¿Deseas actualizar el promedio (Si=1 ó true / N=0 ó false)? ";
    cin>>b;
    if (b == true){
        actualizarPromedio(a);
        cout<<"Promedio actualizado"<<endl;
    }

    cout<<"¿Deseas actualizar la actividad (Si=1 ó true / N=0 ó false)? ";
    cin>>b;
    if (b == true){
        actualizarActivo(a);
        cout<<"Actividad actualizado"<<endl;
    }
}

void mostrarEstudiante(vector<alumno>& AlumnosReg){
    int i = eleccionestudiante();
    minilinea();
    cout<<"Alumno "<<i+1<<":"<<endl<<endl;
    cout<<"Nombre: "<<AlumnosReg[i].nombre<<endl;
    cout<<"Código: "<<AlumnosReg[i].codigo<<endl;
    cout<<"Edad: "<<AlumnosReg[i].edad<<endl;
    cout<<"Promedio: "<<AlumnosReg[i].promedio<<endl;
    if (AlumnosReg[i].activo == 1){
        cout<<"Estado: Activo"<<endl;
    }else{
        cout<<"Estado: Inactivo"<<endl;
    }
}

void mostrarTestudiantes(){
    for (int i = 0; i < AlumnosReg.size() ; i++){
        cout<<"Alumno "<<i+1<<":"<<endl<<endl;
        cout<<"Nombre: "<<AlumnosReg[i].nombre<<endl;
        cout<<"Código: "<<AlumnosReg[i].codigo<<endl;
        cout<<"Edad: "<<AlumnosReg[i].edad<<endl;
        cout<<"Promedio: "<<AlumnosReg[i].promedio<<endl;
        if (AlumnosReg[i].activo == 1){
            cout<<"Estado: Activo"<<endl;
        }else{
            cout<<"Estado: Inactivo"<<endl;
        }
        minilinea();

    }

}

//-------------------------------------------------------------------------------------------------------------------
void actualizarNombre(int a){
    string aa;
    cout<<"Ingresa el nuevo nombre"<<endl;
    cin>>aa;
    AlumnosReg[a].nombre = aa;
} //Actualiza el nombre del estudiante

void actualizarCodigo(int a){
    string b;
    cout<<"Ingresa el nuevo código"<<endl;
    cin>>b;
    AlumnosReg[a].codigo = b;
} //Actualiza el código del estudiante

void actualizarEdad(int a){
    int c;
    cout<<"Ingresa la nueva edad"<<endl;
    cin>>c;
    AlumnosReg[a].edad = c;
} //Actualiza la edad del estudiante

void actualizarPromedio(int a){
    int d;
    cout<<"Ingresa el nuevo promedio"<<endl;
    cin>>d;
    while (d < 0 || d > 10){
        cout<<"El promedio debe ser un número entre el 0.0 y el 10.0, por favor vuelve a ingresarlo"<<endl;
        cin>>d;
    }
    AlumnosReg[a].promedio = d;
} //Actualiza el promedio (debe validar que esté entre 0.0 y 10.0)

void actualizarActivo(int a){
    bool e;
    cout<<"Ingresa el nuevo estado de actividad (Activo=1 ó true / Inactivo=0 ó false)"<<endl;
    cin>>e;
    AlumnosReg[a].activo = e;
} //Actualiza el estado activo del estudiante


//-------------------------------------------------------------------------------------------------------------------

void mostrarNombre(int NumeroEstudiante){


} // Muestra en consola "Nombre: [nombre]"

void mostrarCodigo(int NumeroEstudiante){


} // Muestra en consola "Código: [codigo]"

void mostrarEdad(int NumeroEstudiante){


} // Muestra en consola "Edad: [edad] años"

void mostrarPromedio(int NumeroEstudiante){


} // Muestra en consola"Promedio: [promedio]"

void mostrarActivo(int NumeroEstudiante){


} // Muestra en consola: "Estado: Activo" o "Estado: Inactivo"

void mostrarInformacionCompleta(int NumeroEstudiante){


} // Muestra toda la información del estudiante de forma organizada
