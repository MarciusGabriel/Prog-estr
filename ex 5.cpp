#include <iostream>
#include <string.h>
using namespace std;


int main (){
	float notaLab, notaSem, exameFinal, media;
	cout << "Digite a nota do Laboratorio\n";
	cin >> notaLab;
cout << "Digite a nota do Seminario\n";
	cin >> notaSem;
cout << "Digite a nota do Exame final\n";
	cin >> exameFinal;
	
	media= (notaLab*0.2) + (notaSem*0.3)+ (exameFinal*0.5) ;
	
	if (media >=8){
		cout << "O aluno tirou A \n";
	}
	else if (media<8 && media >=7  ) {
	
		cout << "O aluno tirou B";
		
	}
	else if (media<7 && media >=6  ){
		cout << "O aluno tirou C";
	
	}
		else if (media<6 && media >=5  ){
		cout << "O aluno tirou D";
	}
		else if (media<5 && media >=0  ){
		cout << "O aluno tirou F";
}
	



	return 0;
}
