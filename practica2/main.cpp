#include <iostream>

using namespace std;
class estudiante
{
    private:
        string nombre,apellido,codigo;
    public:
        estudiante()
        {
            nombre = "";
            apellido = "";
            codigo = "";
        }
        estudiante(string nombre,string apellido,string codigo)
        {
            this->nombre=nombre;
            this->apellido=apellido;
            this->codigo=codigo;
        }
        string get_nombre()
            {return nombre;}
        string get_apellido()
            {return apellido;}
        string get_codigo()
            {return codigo;}
};

class curso
{
    private:
        string nombre;
        string codigo;
        estudiante *alumnos;
        int cantidaAlumnos;
    public:
        curso(string Nombre,string Codigo,estudiante *Alumnos,int CantidaAlumnos)
        {
            nombre=Nombre;
            codigo=Codigo;
            alumnos=Alumnos;
            cantidaAlumnos=CantidaAlumnos;
        }
        curso(curso &f)
        {
            nombre=f.nombre;
            codigo=f.codigo;
            alumnos=f.alumnos;
            cantidaAlumnos=f.cantidaAlumnos;
        }
        string get_nombre()
            {return nombre;}
        string get_codigo()
            {return codigo;}
        estudiante *get_alumnos()
            {return alumnos;}
        int get_cantida_alumnos()
            {return cantidaAlumnos;}
        void set_nombre(string nombre)
            {this->nombre=nombre;}
        void set_codigo(string codigo)
            {this->codigo=codigo;}
        void set_alumnos(estudiante *alumnos)
            {this->alumnos=alumnos;}
        void set_cantidaAlumnos(int cantidaAlumnos)
            {this->cantidaAlumnos=cantidaAlumnos;}
        void aumentar_alumnos()
            {cantidaAlumnos++;}
};
int main()
{
    //Ejericicio1
    estudiante Luis("Luis","Arroyo","7234");
    estudiante Sebastian("Sebastian","Pinto","2503");
    cout<<"Primer estudiante tus datos son: "<<Luis.get_nombre()<<" "<<Luis.get_apellido()<<" "<<Luis.get_codigo()<<endl;
    cout<<"Segundo estudiante tus datos son: "<<Sebastian.get_nombre()<<" "<<Sebastian.get_apellido()<<" "<<Sebastian.get_codigo()<<endl;
    //Ejericcio2
    estudiante grupo[]={Luis,Sebastian};
    curso curso1("Matematica","725463",grupo,2);
    curso curso2=curso1;
    cout<<"El primer curso es: "<<curso1.get_nombre()<<" "<<curso1.get_codigo()<<" "<<curso1.get_alumnos()<<" "<<curso1.get_cantida_alumnos()<<endl;
    cout<<"El segundo curso es: "<<curso2.get_nombre()<<" "<<curso2.get_codigo()<<" "<<curso2.get_alumnos()<<" "<<curso2.get_cantida_alumnos()<<endl;
    curso2.set_nombre("Fisica Cuantica");
    curso2.set_codigo("407383");
    curso2.aumentar_alumnos();
    cout<<"Ahora el segundo curso es: "<<curso2.get_nombre()<<" "<<curso2.get_codigo()<<curso2.get_alumnos()<<" "<<curso2.get_cantida_alumnos()<<endl;
    estudiante *ptr= curso2.get_alumnos();
    cout<<"El primer estudiante del segundo curso es: ";
    cout<<ptr[0].get_nombre()<<" "<<ptr[0].get_apellido()<<" "<<ptr[0].get_codigo()<<endl;
    return 0;
}
