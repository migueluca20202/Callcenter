#include <iostream>
using namespace std;

int main(){
    int saldo = 0,opc;
    float extra,pago_en_total,pago_de_agua_y_luz,pago_de_factura = 0;

    cout<<"\tBienvenido al Call Center";
    cout<<"\nEscoja la empresa que solicite: ";
    cout<<"1. Movistar";
    cout<<"2. Tigo";
    cout<<"3. Claro";
    cout<<"0. Salir";
    cout<<"Opcion: ";
    cin>>opc;

    switch(opc){
       case 1:
          cout<<"Digite la opcion que necesite: ";
          cin>>extra;
          cout<<"1 recarga";
          cout<<"2 pago_de_factura";
          cout<<"3 pago_de_agua_y_luz";
          cout<<"pago_total: "<<saldo;break;

       case 2:
          cout<<"Digite la opcion que necesite: ";
          cin>>extra;
          cout<<"1 recarga";
          cout<<"2 pago_de_factura";
          cout<<"3 pago_de_agua_y_luz";
          cout<<"pago_total: "<<saldo;break;
    }
 return 0; 
}