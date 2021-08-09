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
    cout << "\n   Ingrese la longitud en pies:";cin >> patas;

        //Proceso
        
        cm = patas * 30.48;
    cout << "\n\n   " << patas << " pies equivalen a " << cm << " cm\n\n";
        cout << "\n\nQue desea hacer a continuacion?\n1-Continuar\n2-Finalizar\n";cin >> loop;
    } while (loop != 2);

}
