#include <iostream>
#include <stdio.h>

using namespace std;

/*
ingrese  la base y el exponente  usando un procedimiento
luego calcular la base y el exponente usando una funcion .
luego preguntar si desea continuar usando una funcion para
devolver una respuesta s o n valida.
*/

char respuesta()
{ char resp;
    do
    { cout<<"desea continuar.....";
      cin.get(resp);
      _flushall();
    }while ((resp!='s') and (resp!='n'));

    return resp;
}
//procedimiento para ingresar base y expo.
void ingreso(int &base, int &expo)
{

    cout<<"ingresar la base....;";
    cin>>base;

    cout<<"ingresar el exponente....;";
    cin>>expo;
}

//funcion para calcular la potencia.

int potencia(int base,int expo)
{
    int pot=1;
    for (int i=0;i<expo;i++)
    {
        pot*=base;
    }
    return pot;
}

int main()
{
    char resp;
 int base,expo,poten;

    do{
        ingreso(base,expo);
         poten=potencia(base,expo);
         _flushall();
         cout<<"potencia es...."<<poten<<"\n";



        resp=respuesta();


    }while(resp!='n');


    return 0;
}
