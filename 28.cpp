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
int loop, A, B, C, D, mayV, menV;
char mayL, menL;

int main(){
    
system("cls");

    do  {

        system("cls");

                cout << endl << "Ingrese un valor para A: "; cin >> A;
        cout << endl << "Ingrese un valor para B: "; cin >> B;
        cout << endl << "Ingrese un valor para C: "; cin >> C;
        cout << endl << "Ingrese un valor para D: "; cin >> D;

        if (A > B){
            mayV = A;
            mayL = 'A';
            menV = B;
            menL = 'B'; 
            }
        else {
            mayV = B; 
            mayL = 'B';
            menV = A;
            menL = 'A';
            }
        if (mayV < C){
            mayV = C;
            mayL = 'C';
        }
        if (menV > C){
            menV = C;
            menL = 'C';
        }
        if (mayV < D){
            mayV = D;
            mayL = 'D';
        }
        if (menV > D){
            menV = D;
            menL = 'D';
        }

        cout << endl << "El menor valor es " << menV << " perteneciente a la variable " << menL << endl;
        cout << endl << "El mayor valor es " << mayV << " perteneciente a la variable " << mayL << endl;
    
    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}