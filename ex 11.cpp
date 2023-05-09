		#include <iostream>
		using namespace std;
		int main (){
			int opc;
			float sal, imp, aumen, novoSal;
			opc = 1;
			
		while (opc != 0){
		    cout << "Escolha uma opcao: \n";
			cout << "1.Imposto  2.Novo Salario  3.Classificacao  0.Sair \n";
			cin >> opc;
			
			switch (opc){
				case 1: 
					cout << "Digite seu salario\n";
					cin >> sal;
					if (sal < 500){
						imp = sal - (sal*0.05);
						cout << "O salario com imosto eh: " << imp << " e o imp eh de 5% \n";
					}else if (sal <=850  ){
						imp = sal - (sal*0.1);
						cout << "O salario com imosto eh: " << imp << " e o imp eh de 10% \n";
					}
						else {
						imp = sal - (sal*0.15);
						cout << "O salario com imosto eh: " << imp << " e o imp eh de 15% \n";
					}	 
				break;
				case 2: 
					cout << "Digite seu salario:\n";
					cin >> sal;
					if (sal < 450){
						aumen = 100;
						novoSal = sal + aumen;
						cout << "Seu salario atual eh de: "<< sal << "\n";
						cout << "Seu aumento foi de: "<< aumen << "\n";
						cout << "Seu novo salario eh de: " << novoSal << "\n";
					} else if (sal < 750){
						aumen = 75;
						novoSal = sal + aumen;
						cout << "Seu salario atual eh de: "<< sal << "\n";
						cout << "Seu aumento foi de: "<< aumen << "\n";
						cout << "Seu novo salario eh de: " << novoSal << "\n";
						}else if (sal <= 1500 ){
						aumen = 50;
						novoSal = sal + aumen;
						cout << "Seu salario atual eh de: "<< sal << "\n";
						cout << "Seu aumento foi de: "<< aumen << "\n";
						cout << "Seu novo salario eh de: " << novoSal << "\n";
						} else {	aumen = 25;
						novoSal = sal + aumen;
						cout << "Seu salario atual eh de: "<< sal << "\n";
						cout << "Seu aumento foi de: "<< aumen << "\n";
						cout << "Seu novo salario eh de: " << novoSal << "\n";
						}
			    break;
			    case 3:
			    	if (novoSal <=700){
					
			    	cout << "mal remunerado\n";
					}
			    	else {
					
			    	cout << "bem remunerado\n";}
				break;
			default:
				cout << "Opcao invalida\n ";
				
			break;	
			}
			}
			return 0;
	}
