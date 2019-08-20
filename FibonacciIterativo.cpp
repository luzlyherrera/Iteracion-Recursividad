#include <iostream>
#include <conio.h>
#include <math.h>

int fibonI(int x);

using namespace std;

int main()
{
	int num;
	cout<<"Digite el elemento de la serie fibonacci que deseas generar: \n";
	cin>>num;              
	cout<<"Valor: "<<fibonI(num)<<endl;
	getch();
	   
}
int fibonI(int a)
{
	int d=0,b=1,c,i;
	
	for(i=0;i<a-1;i++)
    {
        c=d+b;
        d=b;
        b=c;
    }
    return c;
}
