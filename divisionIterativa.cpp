#include <iostream>
#include <conio.h>
#include <math.h>

int divisionI(int x,int y);

using namespace std;

int main()
{
	int a,b;
	
	cout<<"Digite el numerador: \n";
	cin>>a;         
	cout<<"Digite el denominador: \n";
	cin>>b;        
	cout<<"Valor: "<<divisionI(a,b)<<endl;
}

int divisionI(int a,int b)
{
	int cont=0;
	
    while(a>b){
    	a=a-b;
    	cont++;
	}
	return cont;
}
