//Librerías
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
//Para los cout
using namespace std;
//Declaración de variables
int loop;
float paredAlto, paredLargo, superficie, litros;

int main(){

    system("cls");

    do
    {
        system("cls");

        cout << endl << "Ingrese la altura de la pared: ";cin >> paredAlto;
        cout << endl << "Ingrese el ancho de la pared: ";cin >> paredLargo;
        superficie=paredLargo*paredAlto;

        litros=superficie/(3.6*2);

        cout << endl << "Para una pared de " << paredAlto << " metros de alto y " << paredLargo << " metros de largo con una superficie de " << superficie << " metros cuadrados";
        cout << endl << "Se requeriran " << fixed << setprecision(2) << litros << " litros de pintura" << endl;

        //Condición parwa bucle
        cout << endl << "Que desea hacer a continuacion?";
        cout << endl <<"1-Reiniciar" << endl <<"2-Finalizar" << endl; cin >> loop;
    } while (loop!=2);
    
    
}