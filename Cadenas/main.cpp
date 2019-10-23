#include <iostream>

using namespace std;
//tamaño iterativa
int tama(char *cadena){
    int tam=0;
    while(*cadena++ != '\0'){
        tam++;
    }
    return tam;
}
//tamaño recursiva
int tama_recu(char *cadena){
    if(*cadena=='\0'){return 0;}
    return 1+tama_recu(++cadena);}
//invertir recursiva
void invertir_recu(char *cadena, char *f){
    if(f-cadena==0){return ;}
    swap(*cadena,*f);
    return invertir_recu(++cadena,--f);
}
//invertir iterativa
void invertir(char *cadena,char *f){
    while(f>cadena){
        char t = *cadena;
        *cadena= *f;
        *f=t;
        f--;
        cadena++;
    }
}
//palindrome iterativa
bool palindrome(char *cadena,char *f){
     int mitad= tama(cadena)/2;
     while(mitad--){
        if(*cadena++!=*f--){return false;}
        }
        return true;
}
//palindrome recursiva
bool palindrome_recu(char *cadena,char *f){
    if(cadena<=f){
        return true;
    }
    if(*cadena != *f){
        return false;
    }
    return palindrome_recu(++cadena,--f);
}
int main()
{
    char cadena[]="perrito";
    char *f= cadena+tama(cadena)-1;
    return 0;
}
