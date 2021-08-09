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
int loop;
float donUsd, donEur, donBrl, donPyg;

int main(){

        system("cls");

        cout << endl << "Ingrese la cantidad de dolares donados: "; cin >> donUsd;
        cout << endl << "Ingrese la cantidad de euros donados: "; cin >> donEur;
        cout << endl << "Ingrese la cantidad de reales donados: "; cin >> donBrl;


        cout << endl << "Se donaron: " << endl;
        cout << donUsd << " dolares" << endl;
        cout << donBrl << " reales" << endl;
        cout << donEur << " euros" << endl;
        
        
        donUsd = donUsd + (donEur * 0.82);
        donUsd = donUsd + (donBrl / 5.90);
        donPyg = donUsd * 6680;

        
        cout << "En total suman " << fixed << setprecision(2) << donPyg <<" guaranies" << endl;

}

