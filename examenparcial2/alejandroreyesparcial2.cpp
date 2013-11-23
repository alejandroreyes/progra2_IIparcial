#include <iostream>

using namespace std;

int const tam=4;
int arreglo[4];
int arreglo2[4];
int nummayordiv5;
int suma100;


void ingreso (int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        do{
          cout<<"ingresar  numero par.....;";
          cin>>arreglo[i];

       }while(!(arreglo[i]%2==0));
    }
}
int sumamayor100(int arreglo[])
{  int suma=0;

    for (int i=0;i<=tam;i++)
  {
      if (arreglo[i]>100)
     {
        suma+=arreglo[i];
     }
  }
    return suma;
}

int mayordiv5(int arreglo[])
{ int maxi=arreglo[0];
     for (int i=0;i<=tam;i++)
    {
        if (arreglo[i]%5==0 and  maxi)
        {
            maxi=arreglo[i];
        }
    }
    return maxi;
}

void arregloB(int arreglo[],int &doble)
{
    for (int i=0;i<=tam;i++)
    {
        (arreglo[i]*2);
       {
           arreglo[i]=doble;

       }
    }

}

void presentar (int arreglo[])
{  for (int i=0;i<=tam;i++)
    {
      cout<<"  "<<arreglo[i]<<"\n";
    }


}

void presentar2(int doble)
{
    cout<<" "<<doble<<"\n";
}

int main()

{


    ingreso(arreglo);
    suma100=sumamayor100(arreglo);
    nummayordiv5=mayordiv5(arreglo);


    cout<<"la suma de los numeros mayores a 100 es......."<<suma100<<"\n";
    cout<<"\n\n";
    cout<<"el numero mayor de los divicibles entre 5 es...."<<nummayordiv5<<"\n";
   cout<<"\n\n";
     cout<<"los numeros del arreglo son.....;";
      presentar(arreglo);



    return 0;
}
