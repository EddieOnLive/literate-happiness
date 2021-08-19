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
int loop, a, b, c, may;
char lyd;

int main(){
    
system("cls");

    do  {

        system("cls");

        cout << endl << "Ingrese un valor para A: "; cin >> a;
        cout << endl << "Ingrese un valor para B: "; cin >> b;
        cout << endl << "Ingrese un valor para C: "; cin >> c;

        if (a>b) {

            if (a>c){
                may=a;
                lyd='A';
            }
            else {
                may=c;
                lyd='C';
            }
            
        }
        else {
            if(b>c){
                may=b;
                lyd='B';
            }
            else{
                may=c;
                lyd='C';
            }
        }

    cout << endl << endl << "El mayor se encuentra en " << lyd << " conteniendo el valor " << may;


    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}