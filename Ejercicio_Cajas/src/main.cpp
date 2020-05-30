#include <iostream>

using namespace std;

struct  Nodo{
    int CodigoCaja;
    Nodo *siguienteCaja;
};

void agregar1(Nodo *&,int);

void agregar2(Nodo *&,Nodo*&,int);

void sacar2(Nodo *&,int &);

bool agregar3(Nodo *);

void sacar1(Nodo *&,Nodo *&,int &);

int main()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;

    int codCaja;
    cout<<"Ingrese el codigo de la caja:";
    cin>>codCaja;
    agregar2(frente,fin,codCaja);
    cout<<"Ingrese el codigo de la caja:";
    cin>>codCaja;
    agregar2(frente,fin,codCaja);
    cout<<"Ingrese el codigo de la caja:";
    cin>>codCaja;
    agregar2(frente,fin,codCaja);
    cout<<"Despachando de la cola:";
    while(frente!=NULL){
        sacar1(frente,fin,codCaja);
        if(frente!=NULL){
            cout<<codCaja<<" , ";
        }
        else{
            cout<<codCaja<<".";
        }
    }
    system("pause");
    return 0;
}

void agregar1(Nodo *&lista,int n){

    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->CodigoCaja=n;

    nuevo_nodo->siguienteCaja = lista;

    lista=nuevo_nodo;

    cout<<"\nElmento "<<n<<" Agregado correctamente"<<endl;

}

bool agregar3(Nodo *frente){

    return (frente==NULL)? true : false;

}

void sacar2(Nodo *&lista,int &n){

    Nodo *aux=lista;

    n=aux->CodigoCaja;

    lista=aux->siguienteCaja;

    delete aux;

}

void agregar2(Nodo *&frente,Nodo *&fin,int n){

    Nodo *nuevo_nodo=new Nodo();

     nuevo_nodo-> CodigoCaja=n;

    nuevo_nodo-> siguienteCaja=NULL;

    if(agregar3(frente)){        frente=nuevo_nodo; }

    else{        fin->siguienteCaja=nuevo_nodo; }

    fin=nuevo_nodo;

    cout<<"\tElemento "<<n<<" insertado correctamente"<<endl;

}

void sacar1(Nodo *&frente,Nodo *&fin,int &n){

    n =frente->CodigoCaja;

    Nodo *aux=frente;

    if(frente==fin){        frente=NULL;        fin=NULL;    }

    else{        frente=frente->siguienteCaja;    }

    delete aux;

}