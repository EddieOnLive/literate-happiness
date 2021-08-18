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
int loop, numEmpleado, sueldoBasico, importeAdicional, sueldoAPagar, condError;
char catEmpleado;

int main(){
    
system("cls");

    do  {

        system("cls");

        //Lectura
        cout << endl << "Bienvenido";
        cout << endl << "Ingrese el numero de empleado: "; cin >> numEmpleado;
        cout << endl << "Ingrese el sueldo basico: "; cin >> sueldoBasico;
        cout << endl << "Ingrese la categoria: " << endl;
        cout << "O- Operario \n";
        cout << "A- Administrativo \n";
        cout << "J- Jefe \n";
        cout << "S- Supervisor \n";
        cout << "G- Gerente" << endl;
        cin >> catEmpleado;
        catEmpleado = toupper(catEmpleado);

        condError=0;
        if(catEmpleado == 'O'){
            importeAdicional = 0;}
        else if (catEmpleado == 'A'){
            importeAdicional = (sueldoBasico * 0.1);}
        else if (catEmpleado == 'J'){
            importeAdicional = (sueldoBasico * 0.2);}
        else if(catEmpleado == 'S'){
            importeAdicional = (sueldoBasico * 0.35);}
        else if(catEmpleado == 'G'){
            importeAdicional = (sueldoBasico * 0.5);}
        else {cout << endl << "A ver a ver, que paso?" << endl;
            condError=1;}
        

        sueldoAPagar = sueldoBasico + importeAdicional;

        if(condError != 1){
            cout << endl << "Informe: "<< endl;
            cout << "El empleado numero " << numEmpleado << " percibe un sueldo basico de " << sueldoBasico << " Gs contando con un importe adicional de " << importeAdicional << "Gs por su categoria (" << catEmpleado <<")";
            cout << endl << "El empleado percibira un sueldo total de " << sueldoAPagar << endl;
        }
    
    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}