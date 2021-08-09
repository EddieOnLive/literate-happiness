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

int loop, A, B, C, D, E, aux;
string resultadoPromedio;

int main(){
    
    system("cls");

    do  {

        system("cls");
    
    //Lectura
    cout << endl << "A continuacion debera ingresar 5 valores ";
    cout << endl << "Ingrese un valor para A: "; cin >> A;
    cout << endl << "Ingrese un valor para B: "; cin >> B;
    cout << endl << "Ingrese un valor para C: "; cin >> C;
    cout << endl << "Ingrese un valor para D: "; cin >> D;
    cout << endl << "Ingrese un valor para E: "; cin >> E;

    //Proceso
    aux=(A + B + C + D + E)/5;

    if (aux >= 10)  {resultadoPromedio = "mayor o igual a 10";}
    
    else            {  resultadoPromedio = "menor a 10";}
    
    //Informe de resultado
    cout << endl << "El promedio es " << resultadoPromedio << endl;
    
    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}