#ifndef CELULAR_H
#define CELULAR_H

#include <string>
using namespace std;

class Celular {
private:
    string Marca;
    string Modelo;
    string Color;
    int inventario;
    float Precio;

public:
    //Constructores
    Celular ();
    Celular (string Imarca, string Imodelo, string Icolor, int Iinventario, float Iprecio);

    //actualizadores de variables
    void actualizarMarca (string novoMarca);
    void actualizarModelo (string novoModelo);
    void actualizarColor (string novoColor);
    void actualizarInventario (int novoInventario);
    void actualizarPrecio (float novoPrecio);

    //recuperadores de variables
    string obtenerMarca ();
    string obtenerModelo ();
    string obtenerColor ();
    int obtenerInventario ();
    float obtenerPrecio ();

    //Funciones para imprimir

    void mostrarMarca ();
    void mostrarModelo ();
    void mostrarColor ();
    void mostrarInventario ();
    void mostrarPrecio ();
    void mostrarTodo ();

};

#endif
