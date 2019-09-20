#include <iostream>

using namespace std;

int main()
{
    int cont=0;
    int p;
    int n;
    cout<<"Numero por favor "<<endl;
    cin>>n;
    p=n;
    //primer ejercicio
    if (n==0){
        cout<<n<<" no es potencia de 2"<<endl;}
    while (n%2==0){
                n=n/2;}
    if (n==1){
            cout << p<<"  es potencia de 2" << endl;}
    else {
        cout<<p<<" no es potencia de 2"<<endl;}

    //segundo ejercicio
    //forma while
    int n2;
    cin>>n2;
    int p2;
    p2=n2;
    while (p2!=0){
            if (n2%p2==0){
                cont++;}
    p2--;}
    if (cont==2){cout<<n2<<" es primo"<<endl;}
    else {cout<<n2<<" no es primo"<<endl;}
    //tercer ejercicio
    //forma for while
    cout<<"numeros primos del 1 al 100"<<endl;
    for(int valor=1;valor<=100;valor++){
            int q=0;
            int i=valor;
            while(i!=0){
                    if(valor%i==0){
                        q++;}
                    i--;}
    if (q==2){cout<<valor<<endl;}
    }
    //forma for
    for(int valor=100;valor>=1;valor--){
            for(int valor2=1;valor<=valor;valor2++){
                if(valor%valor2==0){
                     cont++;}
            }
    if (cont==2){
            cout<<valor<<endl;}}
    //cuarto ejercicio
    //forma for
    int suma=0;
    int numero;
    cout<<"numero pls"<<endl;
    cin>>numero;
    for(int b=1;numero>b;b++){
            if(numero%b==0){
                suma=suma+b;}
    }
    if(numero==suma)
        {cout<<numero<<" es un numero perfecto"<<endl;}
    else
    {cout<<numero<<" no es un numero perfecto"<<endl;}
    //forma while
    int c=1;
    while(c<numero){
        if(numero%c==0){
            suma=suma+c;}
        c++;}
    if(numero==suma){cout<<numero<<" es un numero perfecto"<<endl;}
    else{cout<<numero<<" no es un numero perfecto"<<endl;}
return 0;
}
