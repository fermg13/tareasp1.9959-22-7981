// CALCULADORA CON OPERACIONES B�SICAS (SUMA, RESTA, MULTIPLICACI�N Y DIVISI�N)
#include <iostream>
using namespace std;
int Numero1 , Numero2,op,i;
int resultado;
int main() {
cout<<"Ingrese Numero 1 \n";
cin>>Numero1;
cout<<"Ingrese Numero 2 \n";
cin>>Numero2;
// C�DIGO PARA INDICAR EL MEN� CON LAS OPERACIONES
cout<<"Ingrese el numero de la operacion que desea realizar por favor \n";
cout<<"1. Para Suma"<<endl;
cout<<"2. Para Resta"<<endl;
cout<<"3. Para Multiplicacion"<<endl;
cout<<"4. Para Division"<<endl;
cin>>op;

switch(op){
// INSTRUCCIONES PARA INDICAR EL RESULTADO DE LA OPERACI�N
case 1:
resultado=Numero1+Numero2;
   cout<<"El resultado de la suma es: "<<resultado;

   break;

case 2:

resultado=Numero1-Numero2;
cout<<"El resultado de la resta es: "<<resultado;

break;

case 3:

resultado=Numero1*Numero2;
cout<<"El resultado de la multplicaci�n es: "<<resultado;

break;

case 4:

resultado=Numero1/Numero2;
cout<<"El resultado de la divisi�n es: "<<resultado;

break;
//INSTRUCCI�N PARA MOSTRAR UN MENSAJE SI SE ELIGE UNA OPCI�N INV�LIDA
default: cout<<"Operaci�n no valida";
   break;
}


return 0;
}
