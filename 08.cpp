//Librerías
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
//Para los cout
using namespace std;

//Declaración de variables
int loop=1;
float tiempoHoras, tiempoMinutos, tiempoSegundos, tiempoCeSeg, distKilometros, distMetros, vel;

int main()  {

    do
    {
        system("cls");
        //Lectura de datos
        cout << endl << "Ingrese el tiempo en minutos ";
        cin >> tiempoMinutos;
        cout << endl << "Ingrese el tiempo en segundos ";
        cin >> tiempoSegundos;
        cout << endl << "Ingrese el tiempo en centesima de segundos ";
        cin >> tiempoCeSeg;
        cout << endl << "Ingrese la distancia en metros ";
        cin >> distMetros;

        //Proceso
        //Centésima de segundo a segundo
        tiempoSegundos=tiempoSegundos+(tiempoCeSeg/100);
        //Segundo a minutos
        tiempoMinutos=tiempoMinutos+(tiempoSegundos/60);
        //Minutos a hora
        tiempoHoras=tiempoHoras+(tiempoMinutos/60);
        //Metros a kilometros
        distKilometros=distMetros/1000;
        //Velocidad es distancia sobre tiempo 
        vel=distKilometros/tiempoHoras;

        cout << endl << "La velocidad promedio del atleta fue de " <<fixed << setprecision(2) << vel << "km/h" << endl;

        //Condición para bucle
        cout << endl << "Que desea hacer a continuacion?";
        cout << endl <<"1-Reiniciar" << endl <<"2-Finalizar" << endl; cin >> loop;
    } while (loop!=2);
    

            }
