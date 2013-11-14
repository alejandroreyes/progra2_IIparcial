#include <iostream>

using namespace std;
/*
funciones
*/

int sueldo,ihss;

int seguro_social(int sueldo)
{
   int vihss;
if (sueldo>7000)
{ vihss=245; }

else
{ vihss=0.035*sueldo;

}
return vihss;

}



int main()
{
    cout <<"ingresar el sueldo....;";
    cin>>sueldo;

    ihss=seguro_social(sueldo);
    cout<<"seguro social....:"<<ihss<<"\n";


    return 0;
}
