#include <iostream>


/*
Trabajo semana 5

Se tiene que ingresar 5 números a un arreglo, usted deberá de elaborar un procedimiento
para ordenar en forma ascendente y otro procedimiento para ordenar en forma ascendente.
Se deberá de incluir un procedimiento que sustituya del arreglo que se pase como parámetro,
todos los números pares por un cero.
Presentar los resultados en el main.
Todo el programa deberá de estar documentado, esto quiere decir explicado por ud.

*/

using namespace std;

int num[5];

// en este procedimiento se ingresan  los 5 numenos  en el arreglo
void ingresar(int num[])
{
	for(int i=0;i<5;i++)
{
cout<<"ingresar un numero...:";
		cin>>num[i];
		cout<<"\n";
}
}


 // en este procedimiento  nos ordena los numeros que ingresamos  en el arreglo  en forma asendente.

void ascendente(int num[])
{
for(int i1=1;i1<5;i1++)
{
for(int i2=0;i2<5;i2++)
{
if(num[i1]<num[i2])
{
    int x=num[i2];
    num[i2]=num[i1];
    num[i1]=x;
}
}
}
}

 // en este procedimiento  nos ordena los numeros que ingresamos  en el arreglo  en forma desendente.
void descendente(int num[])
{
for(int i1=1;i1<5;i1++)
{
for(int i2=0;i2<5;i2++)
{
if(num[i1]>num[i2])
{
    int x=num[i2];
    num[i2]=num[i1];
    num[i1]=x;
}
}
}
}

// en este procedimiento  se subtistuye los numeros pares por 0.
void subpares(int num[])
{
for(int i=0;i<5;i++)
{
    if(num[i]%2==0)
{
    num[i]=0;
}
}
}
// se ppresentan los datos
void presentar(int num[])
{
for(int i=0;i<5;i++)
{
    cout<<" "<<num[i];
}
    cout<<"\n\n";
}


int main()
{
	ingresar(num);
	ascendente(num);

cout<<"orden de numeros en forma ascendente....:";

	presentar(num);
	descendente(num);

cout<<"orden de numeros en forma descendente....:";

	presentar(num);
	subpares(num);


cout<<"Substituir numeros pares por 0.....:";
	presentar(num);




    return 0;
}
