#include <iostream>



/*
ingresar 5 numeros a un arreglos.
lo numeros deberan de estar entre 50-100
usando una funcion debera de obtener la suma de los numeros divisibles entre 5,

crear un funcion para determinar el promedio de los numeros pares.
crear un procedimiento para presentar el arreglo
crear un procedimiento para modificar el arreglo y colocar 0 a todos los numeros pares.
*/

using namespace std;

const int tam=4;
int arreglo[4];
int sumaA,promedioP;

void ingreso (int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        do{
        cout<<"ingresar un numero.....";
        cin>>arreglo[i];

        }while(!((arreglo[i]>50) and (arreglo[i]<=100)));


    }
}
int numerosdivisibles5(int arreglo[])
{
   int suma=0;
   for (int i=0;i<=tam;i++)
   {
       if (arreglo[i]%5==0)
       {
           suma+=arreglo[i];

       }

   }
   return suma;
}

int promedio(int arreglo[])
{ int suma=0;
     for (int i=0;i<=tam;i++)
    { suma+= arreglo[i];

    }
    return suma/tam;
}

void pares0(int arreglo[])
{
     for (int i=0;i<=tam;i++)
     {
         if (arreglo[i]%2==0)
         {
             arreglo[i]=0;
         }
     }
}

void presentar(int arreglo[])
{
for(int i=0;i<=tam;i++)
{
    cout<<" "<<arreglo[i];
}
}


int main()
{
    ingreso(arreglo);


    sumaA=numerosdivisibles5(arreglo);
    promedioP=promedio(arreglo);

cout<<"la suma de los numeros divisibles entre 5 es....:"<<sumaA<<"\n";
cout<<"la suma de los promedio  divisibles entre 5 es....:"<<promedioP<<"\n";


pares0(arreglo);
cout<<"Substituir numeros pares por 0.....:"<<"\n\n";
	presentar(arreglo);

    return 0;
}
