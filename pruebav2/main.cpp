#include <iostream>

using namespace std;


int vnumero,vncifras;

int  ingresar ()
{ int numero;
      do{
           cout<<"ingresar numero par o divisible entre 5: ";
           cin>>numero;
        }while((!(numero%2==0)) and (!(numero%5==0)));
        return numero;

}
int contcifra(int numero)
    {
         vncifras=0;
        while(numero!=0)
        {
            numero=numero/10;
            vncifras++;
        }

        return vncifras;
    }


int main()
{
    for(int i=0;i<5;i++)
    {int vncifras;


       vnumero= ingresar();
        cout<<"\n";
        vncifras=contcifra(vnumero);

        cout<<vnumero<<"....el numero tiene....: "<<vncifras<<"  cifras"<<"\n";

        cout<<"\n";

    }
    return 0;
}
