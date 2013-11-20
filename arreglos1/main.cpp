#include <iostream>

using namespace std;

const  int tam=4;
int num[4];
int mayor,menor,promedio,pares;


void ingreso(int num[])
{ for (int i=0;i<=tam;i++)
{ cout<<"ingresar un numero["<<i<<"]...";
  cin>>num[i];
}
}
int mayorarreglo(int num[])
{
    for (int i=0;i<=tam;i++)
{ if(num[i]>mayor)
  {
      mayor=num[i];
  }
}
 return mayor;
}

int menorarreglo(int num[])
{
    int menor=num[0];
  for (int i=0;i<=tam;i++)
{
    if(num[i]<menor)
     {
      menor=num[i];
      }
}
 return menor;

}
 int pararreglo(int num[])
 { int cpar=0;
     for (int i=0;i<=tam;i++)
 {  if(num[i]%2==0 )
     cpar++;
 }
     return cpar;
 }

int promedioarreglo(int num[])
{ int suma=0;
    for (int i=0;i<=tam;i++)
{ suma+=num[i];

}
    return suma/tam;
}

int main()
{
  ingreso(num);
  promedio=promedioarreglo(num);
  mayor=mayorarreglo(num);
  menor=menorarreglo(num);
  pares=pararreglo(num);

  cout<<"promedio del arreglo.....:"<<promedio<<"\n";
   cout<<"numero mayor en el arreglo.....:"<<mayor<<"\n";
   cout<<"numero menor en el arreglo.....:"<<menor<<"\n";
   cout<<"numero pares en el arreglo.....:"<<pares<<"\n";

    return 0;
}
