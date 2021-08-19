//Librerías
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <string.h>
#include <ctype.h>
//Para los cout
using namespace std;
//Declaración de variables
int loop, tHora, tMin, tSeg;

int main(){
    
system("cls");

    do  {

        system("cls");
        cout << endl << "Ingrese hora: "; cin >> tHora;
        cout << endl << "Ingrese minutos: "; cin >> tMin;
        cout << endl << "Ingrese segundos: "; cin >> tSeg;

        tSeg++;

        if (tSeg >= 60){
            tSeg=00;
            tMin++;
            if (tMin >= 60){
                tMin=00;
                tHora++;
                if (tHora >= 24) {
                    tHora=00;
                }
            }
        }

        cout << endl << "Pasados un segundo: ";
        cout << endl << tHora << ":" << tMin << ":" << tSeg;

    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}