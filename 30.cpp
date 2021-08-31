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
int loop, ladoA, ladoB, ladoC, cumpCond, men1, men2, may;

int main(){
    
system("cls");

    do  {

        system("cls");

        cumpCond=0;

        cout << endl << "Ingrese el valor del primer lado: "; cin >> ladoA;
        cout << endl << "Ingrese el valor del segundo lado: "; cin >> ladoB;
        cout << endl << "Ingrese el valor del tercer lado: "; cin >> ladoC;

        if (ladoA > ladoB){
            may = ladoA;
            men1 = ladoB;
        }
            else {
                may = ladoB;
                men1 = ladoA;
            }
        if (may > ladoC){
            men2 = ladoC;
        }
            else{
                men2=may;
                may=ladoC;
            }
        
        if (men1 + men2 > may){cumpCond = 1;}


        if(cumpCond == 1){

            if (ladoA == ladoB && ladoA == ladoC)
                {cout << endl << "El triangulo es equilatero" << endl;}
            else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC)
                {cout << endl << "El triangulo es isosceles" << endl;}
            else {cout << endl << "El triangulo es escaleno" << endl;}
        }
        else {cout << endl << "No se puede formar un triangulo con los valores ingresados" << endl;}
    
    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}