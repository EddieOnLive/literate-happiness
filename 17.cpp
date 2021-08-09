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

int main(){
    
system("cls");

    do  {

        system("cls");
        
        //Visto que solamente tengo que comparar un número, puedo usar una variable que
        //luego puedo sobreescribir como puede ser la del bucle
        cout << endl << "Ingrese un valor: " << endl;
        cin >> loop;
        if(loop>0){cout << endl << "El valor es mayor a 0 ";}
        else if(loop==0){cout << endl << "El valor es igual a 0 ";}
        else{cout << endl << "El valor es menor a 0 ";}
    
    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}