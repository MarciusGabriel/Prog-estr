/*Faça um programa que leia a idade de uma pessoa expressa em anos, e mostre a idade desta pessoa em dias, considere o ano com 365 dias
Mostre a idade dela em anos e em dias*/
#include <iostream>
#include <string>
using namespace std;
int main (){
	char nome;
	int idade, dias, idadeemdias ;
	cout << "Digite seu nome: \n";
	cin <<  nome;
	cout << "Digite a sua idade: \n";
	cin >> idade ;
	dias = 365;
	idadeemdias = dias*idade;
	cout << "\\n Seu nome eh" << nome;
	cout << "\nSua idade eh: " << idade;
	cout << "\nSua idade em dias eh " << idadeemdias;
	
	
	
	
	
	return 0;
}
