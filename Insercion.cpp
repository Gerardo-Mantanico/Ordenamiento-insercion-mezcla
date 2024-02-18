#include <iostream>
using namespace  std;

void   ordenamiento(int arr[], int tamano) {
    int valActual;
    for (int i = 1; i < tamano; ++i) {
         valActual = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > valActual) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = valActual;
    }
}
void  imprimir( int arr[], int tamano){
    for(int i=0; i<tamano; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int v[]={5,2,4,1,3};
    int tamno= (sizeof(v)/sizeof v[0]);
    cout<<"Lista desordenada: ";
    imprimir(v,tamno);
    ordenamiento(v,tamno);
    cout<<"Lista ordenada:  ";
    imprimir(v, tamno);
    return 0;
}