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
string oper;

int main(){
    
system("cls");

    do  {

        system("cls");
        //Lectura de valores
        cout << endl << "Ingrese un valor para A: "; cin >> A;
        cout << endl << "Ingrese un valor para B: "; cin >> B;

        //Lectura de operacion
        cout << "Ingrese una de las siguientes operaciones:" << endl;
        cout << "'+' para sumar" << endl;
        cout << "'-' para restar" << endl;
        cout << "'*' para multiplicar" << endl;
        cin >> oper;

        if (oper=="+")      {
            cout << endl << "Usted eligio sumar, su resultado es " << endl << A << "+" << B << " = " << A + B ;
                            }
        else if (oper=="-") {
            cout << endl << "Usted eligio restar, su resultado es "; 
            cout << endl << A << "-" << B << " = " << A + B ;
                            }
        else if (oper=="*") {
            cout << endl << "Usted eligio multiplicar, su resultado es ";
            cout << endl << A << "*" << B << " = " << A + B ;
                            }
        else { cout << endl << endl << "En serio?";
        cout << endl << "Error en simbolo";
        cout << endl << "Reinicie y use un operador valido >:T";}
         

    
    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}