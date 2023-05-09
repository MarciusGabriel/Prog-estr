#include<iostream>
using namespace std;
int main (){
	float sal, novoSal;
	cout << "Digite seu salario\n";
	cin >> sal;
		if (sal <= 600){
		novoSal = novoSal + 150;
		} else {
			novoSal = novoSal +100;
			
		} 
	if (sal <= 500 ){
		novoSal += sal + (sal*0.05);
		cout << "Seu novo salario eh de: " << novoSal;
	} else if (sal <=1200){
	
		novoSal += sal + (sal*0.12);
		cout << "Seu novo salario eh de: " << novoSal;
	} else {
		cout << "Seu salario eh de: " << novoSal;
	}
	
	
	
	
	
	return 0;
}
