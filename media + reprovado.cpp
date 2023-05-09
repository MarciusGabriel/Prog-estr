#include <iostream>
#include <string.h>
using namespace std;


int main (){
	float nota1, nota2, nota3,notaExame, media;
	cout << "Digite a primeira nota\n";
	cin >> nota1;
cout << "Digite a segunda nota\n";
	cin >> nota2;
cout << "Digite a terceira nota\n";
	cin >> nota3;
	
	media=(nota1+nota2+nota3)/3;
	
	if (media >= 6){
		cout << "O aluno esta aprovado\n";
	}
	else if (media<6 && media >=3  ) {
		notaExame= 12 - media;
		cout << "O aluno esta de exame e precisa tirar " << notaExame << " de pontos para passar\n";
		
	}
	else {
		cout << "O aluno esta reprovado";
	}
	return 0;
}
