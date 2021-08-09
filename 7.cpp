//Librerías
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
//Para los cout
using namespace std;

int main() {

	long int loop;	float Gb;

	do {
		system("cls");
		cout << "Ingrese la cantidad de gigabytes de su disco duro: ";
		cin >> Gb;
		cout << "\nLa capacidad en megabytes es " << fixed << setprecision(2) << Gb * 1024 << " Mb" << endl;
		cout << "La capacidad en kilobytes es " << fixed << setprecision(2) << Gb * 1024 * 1024 << " Kb" << endl;
		cout << "La capacidad en bytes es " << fixed << setprecision(2) << Gb * 1024 * 1024 * 1024 << " Bytes" << endl <<endl;
		cout << "Desea reinciciar?\n1-Si" << endl << "2-No" <<endl;
		cin >> loop;
	} while (loop != 2);

}




//Ejercicio 7

/*
Diseñe un algoritmo que exprese la capacidad de un disco duro en Mb, Kb y b (mega byte, kilo byte, bytes),
conociendo la capacidad del disco en Gb (Giga byte); siendo:	1 Kb = 1024 bytes		1 Mb = 1024 Kb		1 Gb = 1024 Mb


	long int loop;	float Gb;

	do {
		system("cls");
		cout << "Ingrese la cantidad de gigabytes de su disco duro: ";
		cin >> Gb;
		cout << "\nLa capacidad en Mb es " << Gb * 1024 << "Mb\n";
		cout << "La capacidad en Mb es " << Gb * 1024 * 1024 << "Kb\n";
		cout << "La capacidad en Mb es " << Gb * 1024 * 1024 * 1024 << "Bytes\n\n\n";
		cout << "Desea reinciciar?\n1-Si\n2-No\n";
		cin >> loop;
	} while (loop != 2);

*/

//Ejercicio 8


/*

En una competencia atlética de velocidad, el tiempo se mide en minutos, segundos y centésimas de segundo y, el
espacio recorrido se mide en metros. Diseñe un algoritmo para determinar la velocidad promedio de un atleta en
km/hr.
Siendo: 1 hora = 60 minutos, 1 minuto = 60 segs, 1 segundo = 100 centésimas de segundo, 1 km = 1000 mts
Se leen: tmin, tseg, tcsg, espmt

*/



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración
// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
