//Librerías
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <string>
using namespace std;
//Declaración de variables
int loop, conver;
float valor, x;


int main(){
    
system("cls");

    do  {
        
            system("cls");

        cout << endl << "Ingrese la unidad de medida a convertir: " << endl;
        cout << endl << "1-Centimetros a pies";
        cout << endl << "1-Pies a centimetros" << endl;
        cin >> conver;

        if(conver == 1){
            
            cout << endl << "Ingrese el valor a convertir: " << endl; cin >> valor;
            x = valor / 30,48;
            cout << endl << fixed << setprecision(2) << valor << " centimetros equivalen a " << fixed << setprecision(2) << x <<" pies"<< endl;
            system("pause");

        }
        else if(conver == 2){

            cout << endl << "Ingrese el valor a convertir: " << endl; cin >> valor;
            x = valor * 30,48;
            cout << endl << fixed << setprecision(2) << valor << " pies equivale a " << fixed << setprecision(2) << x <<" centimetros"<< endl;
            system("pause");

        }

        else{cout << endl << "Error, ese comando no es valido, intente otra vez :3 " << endl;}



    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}