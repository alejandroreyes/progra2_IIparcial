#include <iostream>

using namespace std;
const int tam=5;
int numero[tam],doble[tam];
int suma100;
int mayordiv5;

void ingreso(int numero[])
{
    for (int i=0;i<tam;i++)
    {
        do{
            cout<<"ingresar el numero par";
            cin>>numero[i];
        }while(!(numero[i]%2==0));
    }
}


int suma(int numero[])
{ int sum=0;
     for (int i=0;i<tam;i++)
     {
         sum+=numero[i];
     }
     return sum;
}

int mayor(int numero[])
{
     int maximo=0;
     for (int i=0;i<tam;i++)
     {
         if (numero[i]%5==0)
         {
             if (maximo<numero[i])
             {
                 maximo=numero[i];
             }
         }
     }

return maximo;

}


 void doblearreglo(int numero[], int doble[])
 {
     for (int i=0;i<=tam;i++)
     {
         doble[i]=numero[i]*2;
     }
 }

 void presentar(int  numero[],int doble[])
 {   for (int i=0;i<=tam;i++)
 {
     cout<<"el doble del numero..."<<numero[i]<<"es"<<doble[i]<<"\n";
 }

 }




int main()
{
   ingreso(numero);
   suma100=suma(numero);
   cout<<"suma de todo el arrglo es "<<suma100<<"\n";
   mayordiv5=mayor(numero);
   cout<<"numero mayor de divisible entre 5 es"<<mayordiv5<<"\n";
   doblearreglo(numero,doble);
   presentar(numero,doble);

    return 0;
}
