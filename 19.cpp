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
int loop, A, B, C;

int main(){
    
system("cls");

    do  {

        system("cls");
    
        cout << endl << "Ingrese el valor de A: "; cin >> A;
        cout << endl << "Ingrese el valor de B: "; cin >> B;
        cout << endl << "Ingrese el valor de C: "; cin >> C;

        if (A<=B)   {
            if (A <= C && C <= B)   {
                cout << "C pertenece al intervalo [" << A<< "," << B << "]" << endl;}
            else { cout << endl << "C no pertenece al intervalo"<< endl; }

                    }
            


        else if (A>B)   {
                if (B <= C && C <= A)   {
                cout << endl << "C pertenece al intervalo [" << B << "," << A << "]" << endl;}

                else { cout << endl << "C no pertenece al intervalo"<< endl; }    
                    }
                


        else    { cout << endl << "C no pertenece al intervalo"<< endl;  }
        


    //Bucle
    cout << endl << endl<< "Que desea hacer a continuacion?" << endl;
    cout << endl << "1-Reiniciar";
    cout << endl << "2-Finalizar" << endl;
    cin >> loop;
    
    }while(loop!=2);

}