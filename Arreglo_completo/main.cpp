#include <iostream>
using namespace std;
//ejericio1
void imprimir(int arr[], int tam){
    for(int i=0;i<tam;i++){
            cout<<arr[i]<<'\t';
    }
}
//ejericicio2
//forma iterativa
int suma(int arr[],int tam){
    int x=0;
    for(int i=0;i<tam;i++){
        x+=arr[i];}
    return x;
}
//forma recursiva
int suma2(int arr[],int tam){
    int f=0;
    if(tam==0){
        return 0;}
    else{
        f+=arr[tam-1];
        return f+suma2(arr,tam-1);}
}
//ejericio3
//forma iterativa
void invertir(int arr[],int tam){
    int variable=tam/2;
    tam-=1;
    for(int i=0;i<variable;i++){
        int c=arr[i];
        arr[i]=arr[tam];
        arr[tam--]=c;
    }
}
//forma recursiva
void invertir_recursiva(int arr [], int tam,int i){
    if(i <= tam/2){
        swap(arr[tam-i-1],arr[i]);
        return invertir_recursiva(arr, tam,++i);
    }

}

//ejercicio4
//burbuja
void burbuja( int arr[],int tam){
  for(int i=1;i<tam;i++){
    for(int j=0;j<tam-i;j++){
        if(arr[j]>arr[j+1]){
            int aux=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=aux;}

    }
  }
}
//sellectionsort
void selectionsort(int arr[],int tam){
    for(int i = 0; i < tam-1; i++){
        int f=i;
        for(int j = i+1; j < tam; j++){
            if (arr[f] > arr[j]){
                f=j;
            }
        int aux=arr[f];
        arr[f]=arr[i];
        arr[i]=aux;
        }
    }
}
//particion
int particion(int arr[], int inicio,int fin){
    int f = inicio;
    int l = inicio;
    while (l < fin){
        if (arr[l] <= arr[fin]){
            swap(arr[f], arr[l]);
            f += 1;
        }
        l += 1;
    }
    swap(arr[f], arr[fin]);
    return f;
}
void _quicksort_(int arr[], int inicio,int fin){
    if (inicio >= fin){
        return;
    }
    int variable = particion(arr, inicio, fin);
    _quicksort_(arr, inicio, variable-1);
    _quicksort_(arr, variable+1, fin);
}
//quicksort
void quicksort(int arr[], int tam){
    _quicksort_(arr, 0, tam-1);
}

int main()
{
    int x[5];
    for(int i=0;i<5;i++){
        cin>>x[i];}
    return 0;

}
