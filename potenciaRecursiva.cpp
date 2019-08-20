//potenciacion recursiva
#include <iostream>

int potencia(int base,int pot);
using namespace std;

int main(){
	int base, pot, res=1;
	cout<<"ingrese la base de la potencia: ";
	cin>>base;
	cout<<"ingrese la potencia: ";
	cin>>pot;
	cout<<"el numero "<<base<<" a la "<<pot<<" potencia es "<<potencia(base,pot);
	
}
int potencia(int base, int pot){
	if(pot==0){
		return 1;
	}
	else{
		return potencia(base,pot-1)*base;
	}
}

	
