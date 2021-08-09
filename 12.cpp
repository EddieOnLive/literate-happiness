//Librerías
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <math.h>
//Para los cout
using namespace std;
//Declaración de variables
int loop;
float cilinAltura, cilinRadio, cilinVol, cilinLit, cilinCaudal;



int main(){

    system("cls");
    
    do
    {
        //Limpio=Bomnito
        system("cls");


    //Lectura
    cout << endl << "Ingrese la altura del tanque: "; cin >> cilinAltura;
    cout << "Ingrese el radio del tanque: "; cin >> cilinRadio;


    //Proceso
    cilinVol = 3.14159 * pow(cilinRadio , 2) * cilinAltura;
    cilinLit = cilinVol * 1000;
    cilinCaudal = cilinLit / 800;


    //Impresión
    cout << endl << "Un cilindro de las siguientes caracteristicas: ";
    cout << endl << endl << cilinAltura << " metros de altura";
    cout << endl << endl << cilinRadio << " metros de radio";
    cout << endl << "Con un volumen de "<< cilinVol << " metroscubicos, equivalentes a " << cilinLit << " Litros";
    cout << endl << "Se vacia en " << fixed << setprecision(2) << cilinCaudal << " horas";


    //Condición de bucle
    cout << endl << "Que desea hacer a continuacion?";
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    } while (loop!=2);



}