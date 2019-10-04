#include <iostream>

using namespace std;
//ejericio1
void imprimir(int *arr,int tam){
    while(tam--){
        cout<<*arr<<" ";
        arr++;
    }
}
//ejericio2
//forma iterativa
int suma(int *arr,int tam){
    int sumando=0;
    while(tam--){
        sumando+= *arr;
        arr++;
    }
    return sumando;
}
int suma2(int *arr,int tam){
    int f=0;
    if(tam==0){
        return 0;}
    else{
        f+=*(arr+tam-1);
        return (f+suma2(arr,tam-1));
    }
}
//ejercicio3
//forma iterativa
void invertir(int *arr,int tam){
    for(int i=0;i<tam/2;i++){
        int c=*(arr+i);
        *(arr+i)=*(arr+tam-i-1);
        *(arr+tam-i-1)=c;
    }
}
//forma recursiva con swap
void swap(int &arr1 , int &arr2){
    int t= arr1;
    arr1=arr2;
    arr2=t;
}
void invertir_recursiva(int *arr, int tam,int i){
    if(i <= tam/2){
        swap(*(arr+tam-i-1),*(arr+i));
        return invertir_recursiva(arr, tam,++i);
    }

}
//ejercicio4
//burbuja
void burbuja( int *arr,int tam){
  for(int i=1;i<tam;i++){
    for(int j=0;j<tam-i;j++){
        if(*(arr+j)>*(arr+j+1)){
            int aux=*(arr+j+1);
            *(arr+j+1)=*(arr+j);
            *(arr+j)=aux;}

    }
  }
}
//selectionsort
void selectionsort(int *arr,int tam){
    for(int i = 0; i < tam-1; i++){
        int f=i;
        for(int j = i+1; j < tam; j++){
            if (*(arr+f) > *(arr+j)){
                f=j;
            }
        int aux=*(arr+f);
        *(arr+f)=*(arr+i);
        *(arr+i)=aux;
        }
    }
}
//quicksort
int particion(int *arr, int inicio,int fin){
    int f = inicio;
    int l = inicio;
    while (l < fin){
        if (*(arr+l) <= *(arr+fin)){
            swap(*(arr+f), *(arr+l));
            f += 1;
        }
        l += 1;
    }
    swap(*(arr+f), *(arr+fin));
    return f;
}
void _quicksort_(int *arr, int inicio,int fin){
    if (inicio >= fin){
        return;
    }
    int variable = particion(arr, inicio, fin);
    _quicksort_(arr, inicio, variable-1);
    _quicksort_(arr, variable+1, fin);
}
//quicksort
void quicksort(int *arr, int tam){
    _quicksort_(arr, 0, tam-1);
}

int main()
{
     int x[5]={1,3,2,14,5};
     int tam=5;
     imprimir(x,5);
     return 0;
}
