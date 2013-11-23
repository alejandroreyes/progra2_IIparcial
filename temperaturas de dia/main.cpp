#include <iostream>

using namespace std;

/*

1-Ingresar la temperatura de todo un día en intervalos de 3 horas, a un arreglo de números enteros usando un procedimiento.
Luego deberá de obtener el promedio de todas las temperaturas usando una función.
Obtener cuantas temperaturas fueron mayores a 35 grados.
Obtener la temperatura mayor y menor usando un procedimiento.
Llamar los procedimientos y funciones y escribirlos en la pantalla.
*/

const int tam=7;
int arreglo[7];
int tempmayor35;
int maxima;
int minima;
int promedioP;

void ingreso(int arreglo[])
{ for (int i=0;i<=tam;i++)
{ cout<<"ingreso de temperaturas  cada 3 horas....:";
   cin >>arreglo[i];
}
}

int promediotemp( int arreglo[])
{ int sumatemp=0;
    for (int i=0;i<=tam;i++)
{
    sumatemp+=arreglo[i];
}
    return sumatemp/tam;
}

int temperaturamayor35( int arreglo[])
{
    int cont=0;
    for (int i=0;i<=tam;i++)
  {
      if (arreglo[i]>=35)
      {
          cont++;
      }
  }
 return cont;

}

int mayor(int arreglo[])
{ int  maxi=arreglo[0];
    for (int i=0;i<=tam;i++)
    {

   if (arreglo[i]>maxi)
   {
       maxi=arreglo[i];
   }
    }
    return maxi;
}

int menor(int arreglo[])
{ int  mini=arreglo[0];

    for (int i=0;i<=tam;i++)
    {

   if (arreglo[i]<mini)
   {
       mini=arreglo[i];
   }
    }
    return mini;
}



int main()
{


    ingreso(arreglo);

    tempmayor35=temperaturamayor35(arreglo);
    promedioP=promediotemp(arreglo);
     maxima=mayor(arreglo);
     minima=menor(arreglo);
     cout<<"\n\n";
    cout<<"temperaturas mayor a 35......;"<<tempmayor35<<"\n";
    cout<<"promedio de temperaturas.......:"<<promedioP<<"\n";
     cout<<"temperaturas minima ..........:"<<minima<<"\n";
    cout<<"temperaturas maxima ..........:"<<maxima<<"\n";


    return 0;
}
