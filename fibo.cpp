/*

Programa em C++ que diz qual é o valor de Fibonacci de acordo posição digitada pelo usuário
utilizando uma função recursiva.

Sequencia fibonacci 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55..

Aluno: Lucas Batista
28-07-2017

*/


#include<iostream>
using namespace std;

long fibo(int x);

int main(){
	int f;
	
	do{
		
		cout<<"\nDigite um numero <     >\b\b\b\b\b";
		cin>>f;
		
		cout<<"\nO numero de Fibonacci de " <<f<< " = <     >\b\b\b\b\b" <<fibo(f)<< "\n";
	
	}while(f>=0);
	
	cout<<"\n\n";
	return 0;
}
long fibo(int x){
	if(x==0)
		return 0;
	else
		if(x==1)
			return 1;
		else
			return fibo(x-2) + fibo(x-1);
}

