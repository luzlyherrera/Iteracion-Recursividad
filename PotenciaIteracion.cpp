//potenciacion iterativa
#include <iostream>

int potencia(int base,int pot);
using namespace std;

int main(){
	int base, pot, res=1;
	cout<<"ingrese la base de la potencia: ";
	cin>>base;
	cout<<"ingrese la potencia: ";
	cin>>pot;
	res = potencia(base,pot);
	cout<<"el numero "<<base<<" a la "<<pot<<" potencia es "<<res;
}
 int potencia(int base,int pot){
 	int res=1;
 	for(int i=1;i<=pot;i++){
		res=res*base;
	}
	return res;
 }
