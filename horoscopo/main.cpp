#include <iostream>
#include <stdio.h>
using namespace std;
int cap=0,ac=0,pisc=0,ari=0,tau=0,gem=0,can=0,leo=0,lib=0,vir=0,sag=0,esc=0;

void fecha(int &dia,int &mes)
{
    cout<<"*******El Horoscopo********";
    cout<<"\n\n";
    do
    {
    cout<<"Ingresar Dia  de su nacimiento (1-31)...: ";
    cin>>dia;
    cout<<"\n";
    } while(!(dia>=1 and  dia<=31));

    do
    {
    cout<<"Ingresar Mes de su nacimiento  (1-12)...: ";
    cin>>mes;
    cout<<"\n";
    } while(!(mes>=1 and  mes<=12));
}
void signo(int dia,int mes)
{   cout<<"\n";
    cout<<"Su signo sodiacal es.....: ";

     if(mes>=1 and mes<=12)
    {
       switch(mes)
       {
           case 1:
                if(dia>=1 and dia<=20)
              {
                   cout<<" Capricornio ";
                   cap+=1;

               }
               else if (dia>=21 and dia<=31)
               {
                   cout<<" Acuario ";
                   ac+=1;
               }
               break;
            case 2:
                if (dia>=1 and dia<=18)
               {
                   cout<<" Acuario ";
                   ac+=1;
               }
               else if (dia>=19 and dia<=28)
               {
                   cout<<" Piscis ";
                   pisc+=1;
               }

               break;
            case 3:
                if (dia>=1 and dia<=20)
               {
                   cout<<" Piscis ";
                   pisc+=1;
               }
               else if (dia>=21 and dia<=31)
               {
                   cout<<" Aries ";
                   ari+=1;
               }

               break;
            case 4:
                if (dia>=1 and dia<=20)
               {
                   cout<<" Aries ";
                   ari+=1;
               }
               else if (dia>=21 and dia<=30)
               {
                   cout<<" Tauro ";
                   tau+=1;
               }

               break;
            case 5:
                if (dia>=1 and dia<=21)
               {
                   cout<<" Tauro ";
                   tau+=1;
               }
               else if (dia>=22 and dia<=31)
               {
                   cout<<" Geminis ";
                   gem+=1;
               }

               break;
            case 6:
                if (dia>=1 and dia<=21)
               {
                   cout<<" Geminis ";
                   gem+=1;
               }
               else if (dia>=22 and dia<=30)
               {
                   cout<<"Cancer ";
                   can+=1;
               }

               break;
            case 7:
                if (dia>=1 and dia<=22)
               {
                   cout<<" Cancer ";
                   can+=1;
               }
               else if (dia>=23 and dia<=31)
               {
                   cout<<" Leo ";
                   leo+=1;
               }

               break;
            case 8:
                if (dia>=1 and dia<=23)
               {
                   cout<<" Leo ";
                   leo+=1;
               }
               else if (dia>=24 and dia<=31)
               {
                   cout<<" Virgo ";
                   vir+=1;
               }
               break;

            case 9:
                if (dia>=1 and dia<=23)
               {
                   cout<<" Virgo ";
                   vir+=1;
               }
               else if (dia>=24 and dia<=30)
               {
                   cout<<" Libra ";
                   lib+=1;
               }

               break;

            case 10:
                if (dia>=1 and dia<=23)
               {
                   cout<<"Libra ";
                   lib+=1;
               }
               else if (dia>=24 and dia<=31)
               {
                   cout<<" Escorpion ";
                   esc+=1;
               }

               break;

            case 11:
                if (dia>=1 and dia<=22)
               {
                   cout<<"Escorpion ";
                   esc+=1;
               }
               else if (dia>=23 and dia<=30)
               {
                   cout<<" Sagitario ";
                   sag+=1;
               }

               break;
            case 12:
                if (dia>=1 and dia<=21)
               {
                   cout<<"Sagitario ";
                   sag+=1;
               }
               else if (dia>=22 and dia<=31)
               {
                   cout<<" Capricornio ";
                   cap+=1;
               }

            break;
        }
      }
    }

void cantidad(int cap,int ac,int pisc,int ari,int tau,int gem,int can,int leo,int lib,int vir,int sag,int esc)
{
    cout<<"La Cantidad del Signo de Aries son.......:"<<ari<<"\n";
    cout<<"La Cantidad del Signo de Tauro son.......:"<<tau<<"\n";
    cout<<"La Cantidad del Signo de Geminis son.....:"<<gem<<"\n";
    cout<<"La Cantidad del Signo de Cancer son......:"<<can<<"\n";
    cout<<"La Cantidad del Signo de Leo son.........:"<<leo<<"\n";
    cout<<"La Cantidad del Signo de Virgo son.......:"<<vir<<"\n";
    cout<<"La Cantidad del Signo de Libra son.......:"<<lib<<"\n";
    cout<<"La Cantidad del Signo de Escorpio son....:"<<esc<<"\n";
    cout<<"La Cantidad del Signo de Sagitario son...:"<<sag<<"\n";
    cout<<"La Cantidad del Signo de Capricornio son.:"<<cap<<"\n";
    cout<<"La Cantidad del Signo de Acuario son.....:"<<ac<<"\n";
    cout<<"La Cantidad del Signo de Piscis son......:"<<pisc<<"\n";
}


void validar(char &resp)
{
    do
    {
        cout<<"Desea ingresar otra fecha (S/N): ";
        _flushall();
        cin.get(resp);
    } while (!(resp=='S' or resp=='N'));
}

int main()
{
    int dia,mes,x=1;
    char resp;
do {

    for(int i=1;i<=x;i++)
    {
        fecha(dia,mes);
        signo(dia,mes);
        cout<<"\n\n";
        validar(resp);
        cout<<"\n";

        if(resp=='S')
        {
        x+=1;
        }
    }
}while ( !(resp=='N'));
    cantidad(cap,ac,pisc,ari,tau,gem,can,leo,lib,vir,sag,esc);


    return 0;
}
