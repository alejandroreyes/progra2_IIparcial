#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

char p1,p2,p3,p4,p5,p6,p7,p8,p9;
int pos;

string resultado="empate";

void presentar(char p1,char p2,char p3, char p4,char p5,char p6,char p7,char p8,char p9)
{
      cout << "\n\t" << p1 << " | " << p2<< " | " <<p3;
     cout << "\n\t" << "-----"          << "-----";
     cout << "\n\t" <<   p4<< " | " << p5<< " | " <<p6;
     cout << "\n\t" << "-----"          << "-----";
     cout << "\n\t" <<  p7 << " | " << p8<< " | " <<p9;
     cout << "\n\n";
}

int main()
{
    for (int i=0;i<9;i++)
    {


        cout << "ingresar la posicion ...:";
        cin>>pos;
        _flushall();
        cout<<" Ingresar la marca..X/0...:";


        switch (pos)
         {
         case 1:
            if ((p1=='X') or (p1=='0'))
                cout<<"ya esta ocupada";
            else
               cin.get(p1);
            break;
         case 2:
            if ((p2=='X') or (p2=='0'))
                cout<<"ya esta ocupada";
            else
                cin.get(p2);
            break;

         case 3:
            if ((p3=='X') or (p3=='0'))
                cout<<"ya esta ocupada";
            else
                cin.get(p3);
            break;

        case 4:
            if ((p4=='X') or (p4=='0'))
                cout<<"ya esta ocupada";
            else
                 cin.get(p4);
            break;
         case 5:
            if ((p5=='X') or (p5=='0'))
                cout<<"ya esta ocupada";
            else
                 cin.get(p5);
            break;
         case 6:
            if ((p6=='X') or (p6=='0'))
                cout<<"ya esta ocupada";
            else
                 cin.get(p6);
            break;
        case 7:
            if ((p7=='X') or (p7=='0'))
                cout<<"ya esta ocupada";
            else
                 cin.get(p7);
            break;
         case 8:
            if ((p8=='X') or (p8=='0'))
                cout<<"ya esta ocupada";
            else
                cin.get(p8);
            break;
         case 9:
            if ((p9=='X') or (p9=='0'))
                cout<<"ya esta ocupada";
            else
                cin.get(p9);
            break;

         }
    _flushall();
    cout<<"\n\n";
    presentar(p1,p2,p3,p4,p5,p6,p7,p8,p9);


    if (p1=='X' or p1=='0')
    {
        if(p1==p2 and p2==p3)
        {cout<<" LO ESTRANGULOOOOOO  EL JUGADOR===>:"<<p1<<"\n";
    i=9;
    resultado="Ganador";    }

    }

    if (p4=='X' or p4=='0')
    {
    if (p4==p5 and p5==p6)
    {
    cout<<" LO ESTRANGULOOOOOO  EL JUGADOR====>:"<<p4<<"\n";
    i=9;
    resultado="Ganador";
    }
    }


 if (p7=='X'  or p7=='0')
    {
    if (p7==p8 and p8==p9)
    {
    cout<<" LO ESTRANGULOOOOOO  EL JUGADOR======>:"<<p7<<"\n";
    i=9;
    resultado="Ganador";
    }
    }


 if (p1=='X' or p1=='0')
    {
    if (p1==p4 and p4==p7)
    {
    cout<<" LO ESTRANGULOOOOOO  EL JUGADOR=====>:"<<p1<<"\n";
    i=9;
    resultado="Ganador";
    }
    }



 if (p2=='X' or p2=='0')
    {
    if (p2==p5 and p5==p8)
    {
    cout<<" LO ESTRANGULOOOOOO  EL JUGADOR=====>:"<<p2<<"\n";
    i=9;
    resultado="Ganador";
    }
    }


 if (p3=='X' or p3=='0')
    {
    if (p3==p6 and p6==p9)
    {
    cout<<" LO ESTRANGULOOOOOO  EL JUGADOR=====>:"<<p3<<"\n";
    i=9;
    resultado="Ganador";
    }
    }


 if (p1=='X' or p1=='0')
    {
    if (p1==p5 and p5==p9)
    {
    cout<<" LO ESTRANGULOOOOOO  EL JUGADOR======>:"<<p1<<"\n";
    i=9;
    resultado="Ganador";
    }
    }


 if (p3=='X' or p3=='0')
    {
    if (p3==p5 and p5==p7)
    {
    cout<< "\n\n" << " LO ESTRANGULOOOOOO  EL JUGADOR======>:"<<p3<<"\n";
    i=9;
    resultado="Ganador";
    }
    }
    }

    if (resultado=="empate")
        cout<< "\n" << "******todas las casillas estan llenas  nadie gana empate*****" << "\n\n";

    return 0;
}
