#include <iostream>
#include <conio.h>
#include <math.h>
 
int fibonR(int x);

using namespace std;

int main()
{
	int num;
	
	cout<<"Digite el elemento de la serie fibonacci que deseas generar: \n";
	cin>>num;              
	cout<<"Valor: "<<fibonR(num)<<endl;
	getch();
	   
}
int fibonR(int a)
{
    if(a<=1)
    {
		return (a);
    }
    else
    {
    	return(fibonR(a-1)+fibonR(a-2));	
	}
}
