//Librerías
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
//Para los cout
using namespace std;


int main() {

    int A, B, C, Prom, loop;
    do {
        system("cls");
        cout << "\nIngrese el valor de A: ";
        cin >> A;
        cout << "\nIngrese el valor de B: ";
        cin >> B;
        cout << "\nIngrese el valor de C: ";
        cin >> C;

        Prom = (A + B + C) / 3;

        cout << "\n\nEl valor de A es " << A << "\nEl valor de B es " << B << "\nEl valor de C es " << C << "\nSu promedio es " << Prom << "\n\n";
        cout << "\n\nQue desea hacer a continuacion?\n1-Continuar\n2-Finalizar\n";cin >> loop;
    } while (loop != 2);

}
