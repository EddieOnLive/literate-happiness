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
int loop, A, B, C, D, E, menV;
float prom;

int main(){
    
system("cls");

    do  {

        cout << endl << "Ingrese la nota del primer examen: "; cin >> A;
        cout << endl << "Ingrese la nota del segundo examen: "; cin >> B;
        cout << endl << "Ingrese la nota del tercer examen: "; cin >> C;
        cout << endl << "Ingrese la nota del cuarto examen: "; cin >> D;

        E= A + B + C + D;

        if (A < B){
            menV = A;
            }
        else {
            menV = B;
            }
        if (menV > C){
            menV = C;
        }
        if (menV > D){
            menV = D;
        }

        prom=(E - menV)/3;

        cout << endl << "La nota promedio del estudiante es " << prom << endl;
    
    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;

    system("cls");
    
    }while(loop!=2);

}