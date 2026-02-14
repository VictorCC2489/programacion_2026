#include <iostream>
#include "Celular.h"

using namespace std;

    //Constructores
Celular::Celular (){
    Marca = "";
    Modelo = "";
    Color = "";
    inventario = 0;
    Precio = 0;
}

Celular::Celular (string Imarca, string Imodelo, string Icolor, int Iinventario, float Iprecio){
    Marca = Imarca;
    Modelo = Imodelo;
    Color = Icolor;
    inventario = Iinventario;
    Precio = Iprecio;
}

    //actualizadores de variables
    void Celular::actualizarMarca (string novoMarca){
        Marca = novoMarca;
    }
    void Celular::actualizarModelo (string novoModelo){
        Modelo = novoModelo;
    }
    void Celular::actualizarColor (string novoColor){
        Color = novoColor;
    }
    void Celular::actualizarInventario (int novoInventario){
        inventario = novoInventario;
    }
    void Celular::actualizarPrecio (float novoPrecio){
        Precio = novoPrecio;
    }

    //recuperadores de variables
    string Celular::obtenerMarca (){
        return Marca;
    }
    string Celular::obtenerModelo (){
        return Modelo;
    }
    string Celular::obtenerColor (){
        return Color;
    }
    int Celular::obtenerInventario (){
        return inventario;
    }
    float Celular::obtenerPrecio (){
        return Precio;
    }

    //Funciones para imprimir

    void Celular::mostrarMarca (){
        cout<<"Marca: "<<Marca<<endl;
    }
    void Celular::mostrarModelo (){
        cout<<"Modelo: "<<Modelo<<endl;
    }
    void Celular::mostrarColor (){
        cout<<"Color: "<<Color<<endl;
    }
    void Celular::mostrarInventario (){
        cout<<"Inventario: "<<inventario<<endl;
    }
    void Celular::mostrarPrecio (){
        cout<<"Precio: "<<Precio<<endl;
    }
    void Celular::mostrarTodo (){
        mostrarMarca();
        mostrarModelo();
        mostrarColor();
        mostrarInventario();
        mostrarPrecio();
    }
