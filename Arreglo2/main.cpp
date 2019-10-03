#include <iostream>

using namespace std;


void invertir_recursiva(int arr [], int tam,int i){
    if(i <= tam/2){
        swap(arr[tam-i-1],arr[i]);
        return invertir_recursiva(arr, tam,++i);
    }

}


void selectionsort(int arr[],int tam){
    for(int i = 0; i < tam-1; i++){
        int mini=i;
        for(int j = i+1; j < tam; j++){
            if (arr[mini] > arr[j]){
                mini=j;
            }
        int aux=arr[mini];
        arr[mini]=arr[i];
        arr[i]=aux;
        }
    }
}
int particion(int arr[], int start,int fin){
    int follower = start;
    int leader = start;
    while (leader < fin){
        if (arr[leader] <= arr[fin]){
            swap(arr[follower], arr[leader]);
            follower += 1;
        }
        leader += 1;
    }
    swap(arr[follower], arr[fin]);
    return follower;
}
void _quicksort(int arr[], int start,int fin){
    if (start >= fin){
        return;
    }
    int p = particion(arr, start, fin);
    _quicksort(arr, start, p-1);
    _quicksort(arr, p+1, fin);
}
void quicksort(int arr[], int tam){
    _quicksort(arr, 0, tam-1);
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
