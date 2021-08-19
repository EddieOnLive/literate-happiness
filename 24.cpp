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
int loop, a, b, c;

int main(){
    
system("cls");

    do  {

        system("cls");

        cout << endl << "Ingrese un valor para A: "; cin >> a;
        cout << endl << "Ingrese un valor para B: "; cin >> b;
        cout << endl << "Ingrese un valor para C: "; cin >> c;

        if (a + b == c){
            cout << endl << "A + B = C";
            cout << endl << a << "+" << b << "=" << c << endl;
        }
        else if (a + c == b){
                        cout << endl << "A + C = B";
            cout << endl << a << "+" << c << "=" << b << endl;
        }
        else if (b + c == a) {
                        cout << endl << "B + C = A";
            cout << endl << b << "+" << c << "=" << a << endl;
        }
        else {
            cout << endl << "No se concibe un resultado esperado";
        }
    
    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}