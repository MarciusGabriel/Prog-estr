#include <iostream>
using namespace std;

int main() {

    int codigo;
    float salario, aumento;
    string cargo;

    cout << "Digite o codigo do cargo: ";
    cin >> codigo;
    cout << "Digite o salario atual: ";
    cin >> salario;
    switch (codigo) {
        case 1:
            cargo = "Escriturario";
            aumento = salario * 0.5;
            break;
        case 2:
            cargo = "Secretario";
            aumento = salario * 0.35;
            break;
        case 3:
            cargo = "Caixa";
            aumento = salario * 0.2;
            break;
        case 4:
            cargo = "Gerente";
            aumento = salario * 0.1;
            break;
        case 5:
            cargo = "Diretor";
            aumento = 0;
            break;
        default:
            cout << "Codigo invalido!" << endl;
            return 0;
    }
    float novo_salario = salario + aumento;
    cout << "Cargo: " << cargo << endl;
    cout << "Aumento: R$ " << aumento << endl;
    cout << "Novo salario: R$ " << novo_salario << endl;

    return 0;
}
	



