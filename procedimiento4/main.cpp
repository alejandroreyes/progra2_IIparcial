#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*
 ingresar el nombre  del empleado, las horas, turno,usando un procedimiento

 luego detertminar el pxh usando turno el pago por horas,ihss
 y total a pagar usando un procedimiento.

 turno    pxh
 1         100
 2         150
 3          180

 presentar los datos en procedimiento.
*/
char nombre[30]; int turno,horas,pb,ihss,tp,pxh;

void ingreso(char nombre[],int &turno,int &horas)


{  cout<<"ingresar el nombre del empleado...:";
   cin.getline(nombre,30);
   cout<<"\n";
   cout<<"horas trabajadas...:";
   cin>>horas;

   do
   { cout<<"ingresar el turno de trabajo...:";
     cin>>turno;

   }while((turno<1) or (turno>3));
   _flushall();

}
void calcular(int turno, int horas,int &pxh, int &pb,int &ihss, int &tp)
{
    switch (turno)
    { case 1:
        pxh=100;
        break;

        case 2:
        pxh=150;
        break;

        default:
            pxh=180;
            break;
    }
    pb=pxh*horas;

    if (pb>7000)
    { ihss=245;}

    else
    { ihss=0.035*pb; }

    tp=pb-ihss;

}
    void presentar (int pxh,int pb,int ihss, int tp )
    {
        cout<<"pago por hora...:"<<pxh<<"\n";
        cout<<"\n\n";
        cout<<"pago bruto...:"<<pb<<"\n";
        cout<<"\n\n";
        cout<<"seguro social...."<<ihss<<"\n";
        cout<<"\n\n";
        cout<<"total a pagar....."<<tp<<"\n";
        cout<<"\n\n";

    }


int main()
{
       for (int i=0; i<3; i++)
{

        ingreso (nombre, turno, horas);
        calcular (turno, horas, pxh, pb, ihss, tp);
        presentar (pxh, pb, ihss, tp);


       }

    return 0;
}
