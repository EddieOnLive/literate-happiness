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
int loop, horasTrabajadas, precioHora, salario;

int main(){
    
system("cls");

    do  {

        system("cls");

        //Lectura
        cout << endl << "Ingrese las horas trabajadas: "; cin >> horasTrabajadas;
        cout << endl << "Ingrese el precio por hora de trabajo: "; cin >> precioHora;

        //Proceso
        if (horasTrabajadas>40){    precioHora = precioHora + (precioHora * 0.5);   }
        
        salario = horasTrabajadas * precioHora;

        cout << endl << "Partiendo de los datos ingresados el salario a pagar es de " << salario << " Gs" << endl;

    
    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);
}