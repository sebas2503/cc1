#include <iostream>
#include <string>
using namespace std;
class Persona
{
    private:
        string nombre;
        string apellido;
        int dni;
    public:
        Persona()
        {
            cout<<"Ingrese su nombre: ";
            cin>>nombre;
            cout<<"Ingrese su apellido: ";
            cin>>apellido;
            cout<<"Ingrese su dni: ";
            cin>>dni;
        }
        void printPersona()
        {
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Apellido: "<<apellido<<endl;
            cout<<"Dni: "<<dni<<endl;
        }
};
class Empleado :public Persona
{
    private:
        int salario;
        string trabajo;
    public:
        Empleado() :Persona()
        {
            cout<<"Ingrese su salario: ";
            cin>>salario;
            cout<<"Ingrese su trabajo actual: ";
            cin>>trabajo;
        }
        void printEmpleado()
        {
            printPersona();
            cout<<"Tu salario es: "<<salario<<endl;
            cout<<"Tu trabajo es: "<<trabajo<<endl;
        }

};
class Estudiante :public Persona
{
    private:
        string curso;
        int promedio;
        int CantidaNotas;
        int nota;
    public:
        Estudiante() : Persona()
        {
            cout<<"Ingresa tu curso favorito: ";
            cin>>curso;
            cout<<"Nota final del curso: ";
            cin>>nota;
        }
        void printEstudiante()
        {
            printPersona();
            cout<<"Tu curso favorito es: "<<curso<<endl;
            cout<<"Tu nota final es: "<<nota<<endl;
        }
};
int main()
{
    //Persona
    Persona f;
    f.printPersona();
    //Empleado
    Empleado x;
    x.printEmpleado();
    //Estudiante
    Estudiante j;
    j.printEstudiante();
    return 0;
    //fin
}
