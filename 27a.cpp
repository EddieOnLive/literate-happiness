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
int loop, A, B, C, D;

int main(){
    
system("cls");

    do  {

        cout << endl << "Ingrese un valor para A: "; cin >> A;
        cout << endl << "Ingrese un valor para B: "; cin >> B;
        cout << endl << "Ingrese un valor para C: "; cin >> C;
        cout << endl << "Ingrese un valor para D: "; cin >> D;

        if (A > B){
            if (A > C){
                if (A > D){cout << endl << "El mayor valor es "<< A <<" en A" << endl;}
                else {cout << endl << "El mayor valor es "<< D <<" en D" << endl;}
            }
            else {
                if (C > D){cout << endl << "El mayor valor es "<< C <<" en C" << endl;}
                else {cout << endl << "El mayor valor es "<< D <<" en D" << endl;}
                }
                }
        else{
            if (B > C){
                if (B > D){cout << endl << "El mayor valor es "<< B <<" en B" << endl;}
                else{cout << endl << "El mayor valor es "<< D <<" en D" << endl;}
            }
            else {
                if (C > D){cout << endl << "El mayor valor es "<< C <<" en C" << endl;}
                else {cout << endl << "El mayor valor es "<< D <<" en D" << endl;}
            }
        }


    
    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;

    system ("cls");
    
    }while(loop!=2);

}