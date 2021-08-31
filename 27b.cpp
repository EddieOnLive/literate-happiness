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
int loop, A, B, C, D, may;
char mayL;

int main(){
    
system("cls");

    do  {

        cout << endl << "Ingrese un valor para A: "; cin >> A;
        cout << endl << "Ingrese un valor para B: "; cin >> B;
        cout << endl << "Ingrese un valor para C: "; cin >> C;
        cout << endl << "Ingrese un valor para D: "; cin >> D;

        if (A > B){
            may = A;
            mayL = 'A';
            }
        else {
            may = B; 
            mayL = 'B';
            }
        if (may < C){
            may = C;
            mayL = 'C';
        }
        if (may < D){
            may = D;
            mayL = 'D';
        }

        cout << endl << "El mayor valor es " << may << " ubicado en " << mayL << endl;
    
    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;

    system("cls");
    
    }while(loop!=2);

}