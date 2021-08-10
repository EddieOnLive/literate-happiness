//Librerías
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
//Para los cout
using namespace std;


int main() {

    float cm, patas;
    int loop;
    do
    {
        system("cls");
        float cm, patas;
        cout << "\n   Ingrese la longitud en centimetros:";cin >> cm;

        //Proceso
        patas = cm / 30.48;

        cout << "\n\n   " << cm << " cm equivalen a " << patas << " pies\n\n";
        cout << "\n\nQue desea hacer a continuacion?\n1-Continuar\n2-Finalizar\n";cin >> loop;
    } while (loop != 2);

}
