#include <iostream>
#include <conio.h>
#include <math.h>

int divisionR(int x,int y);

using namespace std;

int main()
{
	int a,b;
	
	cout<<"Digite el numerador: \n";
	cin>>a;         
	cout<<"Digite el denominador: \n";
	cin>>b;        
	cout<<"Valor: "<<divisionR(a,b)<<endl;
}

int divisionR(int a,int b)
{
    if(a<b)
    {
		return (0);
    }
    else if(a>=b)
    {
    	return(1+divisionR(a-b,b));	
	}
}
