//Librerías
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
//Para los cout
using namespace std;
//Declaración
int loop, horastrab, preciohora, bruto;
float impuesto, neto;

int main() {

    

    do
    {
        system("cls");
        //Lectura
        cout << "Ingrese las horas trabajadas:"; cin >> horastrab;
        cout << "Ingrese el precio por hora: "; cin >> preciohora;

        //Proceso
        bruto = horastrab * preciohora;
        impuesto = bruto * 0.1;
        neto = bruto - impuesto;

        //Impresión

        cout << "\nTeniendo en cuenta que se trabajaron " << horastrab << " por un precio de " << preciohora;
        cout << "\nSe percibira un sueldo bruto de " << bruto << " y un sueldo neto de " << neto << "\n\n";
    } while (loop != 2);

}