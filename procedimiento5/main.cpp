#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
/*
ingresar el nombre y las horas, usando un procedimiento.
luego determinar las horas normales usando una funcion.
lo mismo con las horas extras.
las primeras 40 son normales y las demas son extras.

luego determinar el pago por hora y el extra usando un
procedimiento.

turno  pago normal   pago extra
1         100           120
2          130           150
3         140            160

elaborar una funcion para el ihss
usando un procedimiento realiar los calculos y en otro procedimiento
presentar los datos.

*/

char nombre [30];
int turno,horas,hn,he;
double pxn,pxe,pn,pe,pb,ihss,tp;

void ingresar (char nombre[],int &horas,int &turno)
{
    cout<<"ingresar  el nombre del empleado.....:";
    cin.getline(nombre,30);
    cout<<"\n";
    cout<<"horas trabajadas....:";
    cin>>horas;
cout<<"\n";
    do{
        cout<<"ingresar el turno:1,2,3....:";
        cin>>turno;
        cout<<"\n";
    }while((turno<1) or (turno>3));

    _flushall();
}

int horasN(int horas)
{
    if(horas>40)
    {
        return 40;
    }
    else
    {
        return horas;
    }
}

int horasE(int horas)
{
    if(horas>40)
    {
        return horas-40;
    }
    else
    {
        return 0;
    }
}
void pagos(int turno,double &pxn,double &pxe)
{
    switch(turno)
    {
    case 1:
        pxn=100;
        pxe=120;
        break;
    case 2:
        pxn=130;
        pxe=150;
        break;
    default:
        pxn=140;
        pxe=160;
        break;
    }
}
double seguro(double sueldo)
 {
     if (sueldo>7000)
     {
         return 245;
     }
     else
     {
         return 0.035*sueldo;
     }
 }

void calcular (int turno,int horas, int &hn,int &he, double &pxn,double &pxe,double &pn,double &pe,
             double &pb,double &ihss,double &tp)
{
hn=horasN(horas);
he=horasE(horas);
pagos(turno,pxn,pxe);

pn=hn*pxn;
pe=he*pxe;

pb=pn+pe;
ihss=seguro(pb);

tp=(pn+pe)-ihss;
}

void presentar(int turno,int horas, int hn,int he, double pxn,double pxe,double pn,double pe,
             double pb,double ihss,double tp)
{
    cout<<"horas normales.....:"<<hn<<"\n";
    cout<<"\n";
    cout<<"horas extras.......:"<<he<<"\n";
    cout<<"\n";
    cout<<"pago hora normal...:"<<pxn<<"\n";
    cout<<"\n";
    cout<<"pago hora extra....:"<<pxe<<"\n";
    cout<<"\n";
    cout<<"pago normal........:"<<pn<<"\n";
    cout<<"\n";
    cout<<"pago extra.........:"<<pe<<"\n";
    cout<<"\n";
    cout<<"pago bruto.........:"<<pb<<"\n";
    cout<<"\n";
    cout<<"ihss...............:"<<ihss<<"\n";
    cout<<"\n";
    cout<<"total a pagar......:"<<tp<<"\n";
    cout<<"\n";
}

int main()
{
ingresar(nombre,horas,turno);
calcular(turno,horas,hn,he,pxn,pxe,pn,pe,pb,ihss,tp);
presentar(turno,horas,hn,he,pxn,pxe,pn,pe,pb,ihss,tp);


    return 0;
}
