#include <iostream>

using namespace std;

//ejercicio1
void digitoseparados(int numero)
{
int a,b,c,d,e;

 a=numero/10000;
 b=(numero-a*10000)/1000;
 c=(numero-(a*10000+b*1000))/100;
 d=(numero-(a*10000+b*1000+c*100))/10;
 e=numero%10;
 cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d<<'\t'<<e<<'\t'<<endl;
 }
//ejercicio2
int saberdigitos(int digito)
{
    int c=0;
    while(digito!=0){
        digito=digito/10;
        c++;}
    cout<<c<<endl;
}
//ejercicio3
bool palindrome( int numero)
{
 int a,b,c,d,e;

 a=numero/10000;
 b=(numero-a*10000)/1000;
 c=(numero-(a*10000+b*1000))/100;
 d=(numero-(a*10000+b*1000+c*100))/10;
 e=numero%10;
    if(a==e && b==d)
        {cout<<"Es palindrome"<<endl;}
    else{cout<<"No es palindrome"<<endl;}
}
//ejericio4
int fibonacci(int y)
{
    int a=1, b=0,c;
    if (y==0)
    {
        cout<<0<<endl;
        return 0;
    }
    while(y)
    {
        c=a+b;
        b=a;
        a=c;

    }

}
//ejercicio5
bool esNumero(char variable)
{
    int f=static_cast<int>(variable);
    if(f>=static_cast<int>('0') && f<=static_cast<int>('9')){
        cout<<f<<"es un numero"<<endl;}
    else{cout<<f<<"no es un numero"<<endl;}
}
//ejercicio6
char convertirMenor(char x)
{
    char x;
    c=c+32;
    x=static_cast<char>(c);
}
char convertirMayor(char x)
{
    char x;
    c=c-32;
    x=static_cast<char>(c);
}
bool esLetra(char c)
{
    int bu=static_cast<int>(c);
    if(bu>=65 && bu<=90)
    {
        convertirMenor(x);
    }
    if(bu>=97 && bu<=122)
    {
        convertirMayor(x);
    }
}
int main()
{
    int numero;
    cout<<"Numero de 5 digitos: ";
    cin>>numero;
    digitoseparados(numero);

    int digito;
    cout<<"Cualquier numero ";
    cin>>digito;
    saberdigitos(digito);
    palindrome(numero);

    char variable;
    cout<<"Variable ";
    cin>>variable;
    esNumero(variable);

    esLetra(c);
    return 0;

}
