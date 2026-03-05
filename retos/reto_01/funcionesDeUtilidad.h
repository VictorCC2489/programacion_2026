#ifndef funcionesDeUtilidad_H
#define funcionesDeUtilidad_H

#include <string>
#include "coche.h"
#include "moto.h"
#include "camion.h"
#include "autobus.h"
#include <vector>

using namespace std;

void linea();

void imprimirCarros (vector<Coche>& PlacasCoche);
void imprimirMotos (vector<Moto>& PlacasMoto);
void imprimirCamiones(vector<Camion>& PlacasCamion);
void imprimirAutobuses(vector<Autobus>& PlacasAutobus);

void solicitudDplaca ();
void cambioDplaca ();

#endif // Utilidad_H
