//Fernando Garza landa
//El programa muestra los n�meros impares no m�ltiplos de 3 del 1 al 5

#include <iostream>
using namespace std;
int main()//Empezamos el programa
{
	int x=1;
	while(x<=5)//Mientras x sea menor o igual a 5 se cumplir� lo que se encuentra entre llaves (el if y el else)
	{
	if (x%3==0)//Condici�n que busca que x sea m�ltiplo de 3
	{x=x+2;//Se le da un nuevo valor a x
	}
	else
	{cout<<x<<endl;//Imprime el valor de x 
	x=x+2;//Se le da un nuevo valor a x
	}
}
	 return 0;//Terminamos el programa
}
