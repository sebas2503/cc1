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

int main()
{
    int x[5];
    for(int i=0;i<5;i++){
        cin>>x[i];}
    return 0;

}
