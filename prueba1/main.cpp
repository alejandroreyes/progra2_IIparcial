#include <iostream>
#include <stdlib.h>
#include <stdio.h>

/*
PRUEBA PROGRAMACIÓN II de segundo parcial

Se tiene que ingresar un número entero, que
sea par o divisible entre 5 usando un procedimiento.

Luego determinar cuantas cifras tiene el número
usando un procedimiento, deberá de ingresar el número generado en el
procedimiento anterior y obtener el número de cifras que será un parámetro de
variable porque va a salir su valor  del procedimiento.

*/
using namespace std;

int numero;
int cifras;

void ingresar (int &numero)
{
        do{
           cout<<"ingresar numero par o divisible entre 5: ";
           cin>>numero;
        }while((!(numero%2==0)) and (!(numero%5==0)));
}

void contcifra(int &cifras)
    {   cifras=0;
        while(numero!=0)
        {
            numero=numero/10;
            cifras++;
        }
        cout<<"el numero tiene....: "<<cifras<<"  cifras"<<"\n";
    }


int main()
{   for(int i=0;i<5;i++)
    {
        ingresar(numero);
        cout<<"\n";
        contcifra(cifras);
        cout<<"\n";

    }

    return 0;
}
