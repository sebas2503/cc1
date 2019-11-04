#include <iostream>
#include <string>
using namespace std;
class empleado{
    public:
        empleado()
        {
            nombre = "";
            apellido = "";
            salario = 0;
        }
        empleado(string nombre,string apellido,double salario)
        {
            this->nombre=nombre;
            this->apellido=apellido;
            this->salario=salario;
        }
        string get_nombre()
            {return nombre;}
        string get_apellido()
            {return apellido;}
        double get_salario()
        {
            if (salario<0){
                salario=0;
                return salario;}
            return salario;
        }
        double salario_anual()
        {   return salario*12;  }
        double salario_disminuido()
        {   return salario-salario/10;  }
        double salario_anual_disminuido()
        {   return salario_disminuido()*12; }

        void print()
        {   cout<<apellido<<endl;}
    private:
        string nombre;
        string apellido;
        double salario;
};
 void ordenamiento_apellido(empleado cadena[],int tam)
{
    for(int i=0 ; i < tam-1; i++)
    {
        int m=i;
        for(int j = i+1 ; j < tam; j++)
        {
            if(cadena[m].get_apellido()[0]>cadena[j].get_apellido()[0])
                {m=j;}
            empleado aux = cadena[m];
            cadena[m]= cadena[i];
            cadena[i] = aux;
        }
    }
}
int main()
{
    empleado Luis("Luis","Arroyo",250);
    empleado Sebastian("Sebastian","Pinto",150);
    empleado Carlos("Carlos","Buenaventura",350);
    cout<<"Primer empleado tu salario acutal es: "<<Luis.get_salario()<<endl;
    cout<<"Segundo empleado tu salario actual es: "<<Sebastian.get_salario()<<endl;
    cout<<endl;
    cout<<"Primer empleado tu salario anual es: "<<Luis.salario_anual()<<endl;
    cout<<"Segundo empleado tu salario anual es: "<<Sebastian.salario_anual()<<endl;
    cout<<endl;
    cout<<"Primer empleado tu salario disminuido es: "<<Luis.salario_disminuido()<<endl;
    cout<<"Segundo empleado tu salario disminuido es: "<<Sebastian.salario_disminuido()<<endl;
    cout<<endl;
    cout<<"Primer empleado tu salario anual disminuido es: "<<Luis.salario_anual_disminuido()<<endl;
    cout<<"Segundo empleado tu salrio anual disminuido es: "<<Sebastian.salario_anual_disminuido()<<endl;

    empleado cadena[]={Luis,Sebastian,Carlos};
    int tam= 3;
    ordenamiento_apellido(cadena,tam);

    for(int i=0 ; i < tam; i++){
        cadena[i].print();}
    return 0;
}
