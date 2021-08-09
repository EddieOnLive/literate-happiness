//Librerías
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
//Para los cout
using namespace std;


int main() {

    float f, c;
    int loop;

    do
    {
        system("cls");
        cout << "\nIngrese una temperatura en celsius :";cin >> c;
        f = ((c * 9) / 5) + 32;

        cout << "\n\n" << c << " grados celsius equivalen a " << f << " grados fahrenheit \n\n";
        cout << "\n\nQue desea hacer a continuacion?\n1-Continuar\n2-Finalizar\n";cin >> loop;
    } while (loop != 2);

}