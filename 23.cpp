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
int loop, codTurno, horasTrab, diaTrab, valPorHora, jornal;

int main(){
    
system("cls");

    do  {

        system("cls");

        cout << endl << "Ingrese su codigo de turno: "; cin >> codTurno;
        cout << endl << "Ingrese cantidad de horas trabajadas: "; cin >> horasTrab;
        cout << endl << "Dia de la semana entre 1 y 7: "; cin >> diaTrab;

        if (codTurno <= 10){
            valPorHora = 10000;
        }
        else{
            valPorHora = 14000;
        }
        if (diaTrab == 1) {
            valPorHora = valPorHora + 2000;
        }

        jornal = valPorHora * horasTrab;

        cout << endl << "El jornal a pagar es de " << jornal <<" Gs";
    
    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}