//Librerías
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
//Para los cout
using namespace std;
//Declaración de variables
float estPies, estPlg, estMet;
int loop;


int main(){
        system("cls");
    do{
        cout << endl << "Ingrese su altura en el sistema ingles, primero pies "; cin >> estPies;
        cout << endl << "Ahora las pulgadas "; cin >> estPlg;
        //Pies a pulgadas
        estPlg = estPlg + (estPies*12);
        
        //pulgadas a metros
        estMet=(estPlg*2.54)/100;

        cout << endl << "Su estatura en metros es de " << estMet <<" metros" <<endl;

        //Condición para bucle
        cout << endl << "Que desea hacer a continuacion?";
        cout << endl <<"1-Reiniciar" << endl <<"2-Finalizar" << endl; cin >> loop;
    } while (loop!=2);
    

}