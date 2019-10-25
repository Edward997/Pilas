#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
void addPila(Nodo *&, int);

int main(){
	
	Nodo *pila = NULL;
	int n1, n2;
	
	cout<< "Introduzca un numero: ";
	cin>>n1;
	addPila(pila,n1);
	
	cout<< "Introduzca otro numero: ";
	cin>>n2;
	addPila(pila,n2);
	
	getch();
	
	return 0;
}

void addPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"Elemento "<<n<<" agrgado a la pila"<<endl;
}
