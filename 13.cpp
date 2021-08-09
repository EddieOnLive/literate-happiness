//Librerías
#include <iostream>
#include <conio.h>

using namespace std;

int A, B, loop;
int main() {

    system("cls");

    do{
      
        //Lectura
        system("cls");
        cout << "Ingrese un valor para A: "; cin >>A;
        cout << "Ingrese un valor para B: "; cin >>B;

        //"Proceso"
        cout << endl << endl << endl;
        cout << "El valor permutado de A es " << B << endl;
        cout << "El valor permutado de B es " << A << endl;

    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;

    } while (loop!=2);
}