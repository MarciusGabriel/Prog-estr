#include <iostream>
#include <string.h>
using namespace std; 
int main (){
	float h,pesoIdeal;
	char sexo[1],nome[30];
	cout << "Digite seu nome \n";
	cin >> nome;
	cout << "Digite seu sexo \n";
	cin >> sexo;
	cout << "Digite sua altura\n";
	cin >> h;
	
	if (strcmp(sexo,"m")==0){
		pesoIdeal=(72.2*h)-58;
cout << "Oi, "<<nome[30]<<"seu peso ideal eh de " << pesoIdeal;
	}
	else {
		
pesoIdeal=(61.1*h) -44.7;
cout << "Seu peso ideal eh de " << pesoIdeal;
	}
	
	
	
	
	
	return 0;
}
