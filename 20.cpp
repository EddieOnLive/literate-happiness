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
int loop, A;

int main(){
    
system("cls");

    do  {

        system("cls");

        cout << "Ingrese un valor: "; cin>>A;
        
        if (A<-100)
        {cout<< endl << "El valor es menor a -100";}
        else if(A>=-100 && A<=-1){cout << endl << "El valor es mayor o igual a -100 y menor o igual a -1";}
        else if(A==0){cout << endl << "El valor es igual a 0";}
        else if(A>=1 && A<=100){cout << endl << "El valor es mayor o igual a 1 y menor o igual a 100";}
        else {cout << endl << "El valor es mayor a 100";}

    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}