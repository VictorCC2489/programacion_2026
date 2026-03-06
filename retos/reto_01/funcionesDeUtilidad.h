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


void solicitudCoche (vector<Coche>& PlacasCoche);
void solicitudMoto (vector<Moto>& PlacasMoto);
void solicitudCamion (vector<Camion>& PlacasCamion);
void solicitudAutobus (vector<Autobus>& PlacasAutobus);

void cambioCoche (vector<Coche>& PlacasCoche);
void cambioMoto (vector<Moto>& PlacasMoto);
void cambioCamion (vector<Camion>& PlacasCamion);
void cambioAutobus (vector<Autobus>& PlacasAutobus);


void solicitudDplaca (vector<Coche>& PlacasCoche, vector<Moto>& PlacasMoto, vector<Camion>& PlacasCamion, vector<Autobus>& PlacasAutobus);
void cambioDplaca (vector<Coche>& PlacasCoche, vector<Moto>& PlacasMoto, vector<Camion>& PlacasCamion, vector<Autobus>& PlacasAutobus);

#endif // Utilidad_H
