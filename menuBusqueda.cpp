#include <iostream>
#include <stdlib.h>
#define max 5

using namespace std;

class menuBusqueda
{
private:
    int datos[max];
public:
    void llenado();
    void mostrar();
    void mostrarordenado();
    void secuencial(int);
    void binaria(int);
    void ordenamiento();
    menuBusqueda();
    ~menuBusqueda();
};

menuBusqueda::menuBusqueda(){}
menuBusqueda::~menuBusqueda(){}

void menuBusqueda::llenado()
{
    int i, dato;
    for(i=0;i<=max;i++)
    {
        cout<<"Ingresa un numero: ";
        cin>>dato;
        datos[i]=dato;
    }
}

void menuBusqueda::mostrar()
{
    int i;
    cout<<"\nLos valores del arreglo son:\n";
    for(i=0;i<=max;i++)
    {
        cout<<"Posicion["<<i+1<<"]: "<<datos[i]<<"\n";
    }
    cout<<"\n"<<endl;
}

void menuBusqueda::mostrarordenado()
{
    int i;
    cout<<"\nLos valores ordenados del arreglo son:\n";
    for(i=0;i<=max;i++)
    {
        cout<<"Posicion["<<i+1<<"]: "<<datos[i]<<"\n";
    }
    cout<<"\n"<<endl;
}

void menuBusqueda::binaria(int dato)
{
    int primero=0, ultimo=max, i=0;
    int medio = (primero+ultimo)/2;
    while (primero<=ultimo)
    {
        if(datos[medio]==dato)
        {
            cout<<dato<<" se encontro en la posicion: ["<<medio+1<<"]\n";
            break;
        }
        else
        {
            if(datos[medio]<dato)
            {
                primero = medio +1;
            }
            else
            {
                ultimo = medio -1;
            }
        medio = (primero+ultimo)/2;
        cout<<"ciclo "<<i<<endl;
        i++;
        }
    }
    if (primero>ultimo)
    {
        cout<<dato<<" no se encontro\n"<<endl;

    }
}

int menuBusqueda::secuencial()
{
    int i,res;
    res=-1;
    for(i=0;i<=max;i++)
    {
        if (valor==datos[i])
            res=i+1;
    }
    return res;
}

void menuBusqueda::ordenamiento()
{
    int aux;
    for (int i=0;i<max;i++)
    {
        for (int j=0;j<max;j++)
        {
            if(datos[j]>datos[j+1])
            {
                aux=datos[j+1];
                datos[j+1]=datos[j];
                datos[j]=aux;
            }
        }
    }
}

int main()
{
    int dbuscar;
    menuBusqueda obj1;
    obj1.llenado();
    cout<<"\nMETODOS DE BUSQUEDA:\n1)SECUENCIAL\n2)BINARIA\n\nINTRODUZCA LA OPCION DESEADA: ";
    cin>>op;
    cout<<"Que valor deseas buscar: ";
    cin>>dbuscar;
    cout<<"\n";
    obj1.binaria(dbuscar);
}

