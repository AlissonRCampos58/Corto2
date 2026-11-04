#include <iostream>
#include <string>
using namespace std;

 const int art=4;

float descuentoCompra (float monto, float descuento, float total){
    descuento =0.10;
    cout<<"Registrar Compras."<<endl<<endl;
                  cout<<"Ingrese su monto de compra:"<<endl;
                  cin>>monto;
    if (monto>=100){
        total=monto-descuento;
        cout<<"Su total con descuento aplicado es de $"<<total<<endl;
        cout<<"______________________________"<<endl<<endl;
    
    }
    else{
        descuento=0.10;
        total=monto;
        cout<<"Su total es de $"<<total<<endl;
        cout<<"Le faltan $"<<100-monto<<" para aplicar al descuento"<<endl;
        cout<<"______________________________"<<endl<<endl;
    }
    return total;
}
void consultarCompra(){
    cout<<"Consultar compras realizadas"<<endl;
    cout<<"______________________________"<<endl<<endl;
}
void mostrarInventario(){
    string nombres[art] = {"Lapicero","Estuche de colores","Cuaderno cuadriculado","Regla graduada"};
    string precios[art] = {"2.00","5.50","7.25","4.00"};
    cout<<"=========INVENTARIO==========."<<endl<<endl;
    for( int i=0; i<art;i++){
        cout<<i+1<<"."<<nombres[i]<<" $"<<precios[i]<<endl;
    cout<<"______________________________"<<endl<<endl;
    }
    
}

int main(){
    int opcion=0;
    
    float compra=0, total=0, descuento=0.10, consulta=0, inventario=0;
    
    do{
        cout<<"==========Menu de la Libreria=========="<<endl<<endl;
        cout<<"             1.Inventario              "<<endl;
        cout<<"           2.Registrar compra          "<<endl;
        cout<<"           3.Consultar compra          "<<endl;
        cout<<"                4.Salir                "<<endl<<endl;
        cout<<"Ingrese la opcion a realizar:"<<endl;
        cin>>opcion;
        
        switch(opcion){
            case 1:
                mostrarInventario();
            break;
             case 2:
                 descuentoCompra(compra, descuento, total);
            break;
             case 3:
                consultarCompra();
            break;
             case 4:
                cout<<"Saliendo del sistema..."<<endl;
            break;
             default:
                cout<<"Opcion no valida."<<endl;
            break;
        }
    }while(opcion !=4);
    return 0;
}


