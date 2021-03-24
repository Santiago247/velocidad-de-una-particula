#include <iostream>

using namespace std;

int main () {
	
	float tiempo, distancia, velocidad;
	
	cout<<"escrive el valor de la distancia es: "; 
	cin>> distancia;
	
	cout<<"escribe el valor del tiempo es: "; 
	cin>> tiempo;
	
	velocidad= (distancia/tiempo);
	cout<<"la velocidad de la particula es: " ;
	cout<<velocidad; 
	
	return 0;
}