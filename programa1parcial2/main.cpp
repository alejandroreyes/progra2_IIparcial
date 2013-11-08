#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;
/*procedimiento con parametros y sin parametros

ingresar el nombre,notaa,notae, usando un procedimiento luego determinar la nota final, y observacion
usando un procedimiento ,presentar los datos usando otro procedimiento.
*/
char nombre[30];
char obs[15];
int na,ne,nf;

void ingreso(char nombre[],int &na,int &ne)
{
    cout<<"ingresar el nombre del alumno.....;";
    cin.getline(nombre,30);
    cout<<"ingresar nota del examen.....:";
    cin>>ne;
    cout<<"ingresar nota del acumulado.....:";
    cin>>na;

}

void calcular(int na,int ne,int &nf,char obs[])
{ nf= na + ne;

if (nf>=60)
    strcpy(obs,"aprobado");
    else
        strcpy(obs,"reprobado");

}

void presentar(int nf,char obs[])
{ cout<<"nota final del alumnos....:"<<nf<<"\n";
   cout<<"observacion...:"<<obs<<"\n";

}

int main()
{
  ingreso(nombre,na,ne);

  calcular(na,ne,nf,obs);

  presentar(nf,obs);






    return 0;
}
