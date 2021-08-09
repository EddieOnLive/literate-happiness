
//Librerías
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <string>
using namespace std;
//Declaración de variables


int main(){
    
system("cls");

    //Variables
    int base, altura, loop, area, perimetro;
    //Bucle
    do {
        system("cls");
        //Lectura con index
        cout << "\nIngrese base: ";
        cin >> base;
        cout << "Ingrese altura: ";
        cin >> altura;

        //Calculo requerido
        area = (base * altura) * 2;
        perimetro = (base + altura) * 2;

        //Impresión
        cout << "\nCon un triangulo de base " << base << " y altura de " << altura << " obtiene los siguientes resultados:\n";
        cout << "El area de su triangulo es " << area << " y el perimetro es " << perimetro << "\n";
        cout << "\n\nQue desea hacer a continuacion?\n1-Continuar\n2-Finalizar\n";
        cin >> loop;
    } while (loop != 2);


}