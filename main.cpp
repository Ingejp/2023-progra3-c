#include <iostream>
using namespace  std;
int main() {
    //cout << "Hello, World! \n" ;
   // cout<< " otra linea ";
   int numero=10;
    if(numero > 0){
        //cout<<"es nu numero positivo";
    }else{
        //cout<<"es negativo o igual cero";
    }

    switch (numero) {
        case 1:
        cout<< "es menor que cinco"<<endl;
        case 6:
            cout<<"es mayor que cinco";

        default:
            //cout<<"Es una categoria diferente";
    }

    /*for(int i; i <=10; i++){
        if(numero>5){
            cout<<"Inicia el ciclo"<< endl;
        }else{
            cout<<"otro mensaje";
        }
    }*/

        while(numero < 20){
           // cout<<"se ejecutan la instruccion"<<endl;
            numero=numero+1;
        }

    do {
        cout << "Ejecutar mensaje " <<endl;
        numero=numero+1;
    } while (numero < 5);

    return 0;
}
