//Librerías
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <string>
//Para los cout
using namespace std;
//Declaración de variables
int loop, A, B;



int main(){

    system("cls");

    do  {

        system("cls");

        cout << endl << "Ingrese el valor de A: "; cin >> A;
        cout << endl << "Ingrese el valor de B: "; cin >> B;

        if(A>=B){

            cout << endl << "'A' es mayor o igual a 'B' y el resultado de su suma es " << A + B;
        
        }

        else{

            cout << endl << "'A' es menor que 'B' y el resultado de su producto es " << A * B;

        }
    
    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}