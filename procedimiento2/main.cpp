#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/* ingresar el nombre del empleado,el turno,y las ventas.
validar que el turno solo sea 1,2,3.(usando procedimiento)

calcular usando un procedimiento, la comision ganada, el ihss,
y total a pagar. 1=5%, 2=3% ,3=6%.

presentar los datos calculados usando un procedimiento.
*/
char nombre[30];
int ventas,turno,ihss,comision,pb,pt;


void ingreso(char nombre[],int &turno,int &ventas)
{ cout<<"nombre del empleado....:";
  cin.getline(nombre,30);
  cout<<"\n";

  do
  {  cout<<"ingresar el turno: 1,2,3...:";
    cin>>turno;
    cout<<"\n";

  }while((turno<1) and (turno>3));

  cout<<"ingresar  las ventas...:";
  cin>>ventas;
  cout<<"\n";
  }

  void calcular(int ventas,int &ihss,int &comision, int &pb, int &pt)

  {
      if(turno==1)
      { comision=0.05*ventas; }

          else if(turno==2)
          { comision=0.03*ventas; }

          else if (turno==3)
          { comision=0.06*ventas; }

          else
          { comision=0; }

          if(ventas>=7000)
          { ihss=245;}

          else
          { ihss=ventas*0.035; }

           pb=comision+ventas;

          pt=pb-ihss;
}

void presentar (int turno, int comision, int ihss,int pb, int pt)

{   cout<<"\n\n";
    cout<<"turno del empleado es...:"<<turno<<"\n";
    cout<<"\n\n";
   cout<<"el pago comision del empleado...:"<<comision<<"\n";
   cout<<"\n\n";
   cout<<"el pago bruto del empleado es...:"<<pb<<"\n";
   cout<<"\n\n";
   cout<<"el total  a pagar al empleado es....:"<<pt<<"\n";

}

int main()
{
    ingreso(nombre,turno,ventas);
    calcular(ventas,ihss,comision,pb,pt);
    presentar(turno,comision,ihss,pb,pt);

    return 0;
}
