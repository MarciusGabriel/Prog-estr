#include <iostream>
using namespace std;

int main() {
    float salario_base, imposto, gratificacao, salario_liquido;
    int tempo_servico, categoria;

  
    cout << "Digite o salario base: R$ ";
    cin >> salario_base;
    cout << "Digite o tempo de servico (em anos): ";
    cin >> tempo_servico;

   
    if (salario_base < 200) {
        imposto = 0;
    } else if (salario_base >= 200 && salario_base <= 450) {
        imposto = salario_base * 0.03;
    } else if (salario_base > 450 && salario_base <= 700) {
        imposto = salario_base * 0.08;
    } else {
        imposto = salario_base * 0.12;
    }


    if (salario_base > 500) {
        if (tempo_servico <= 3) {
            gratificacao = 20;
        } else {
            gratificacao = 30;
        }
    } else {
        if (tempo_servico <= 3) {
            gratificacao = 23;
        } else if (tempo_servico > 3 && tempo_servico <= 6) {
            gratificacao = 35;
        } else {
            gratificacao = 33;
        }
    }

   
    salario_liquido = salario_base - imposto + gratificacao;

  
    if (salario_liquido <= 350) {
        categoria = 'A';
    } else if (salario_liquido > 350 && salario_liquido <= 600) {
        categoria = 'B';
    } else {
        categoria = 'C';
    }

    
    cout << "Imposto: R$ " << imposto << endl;
    cout << "Gratificacao: R$ " << gratificacao << endl;
    cout << "Salario liquido: R$ " << salario_liquido << endl;
    cout << "Categoria: " << categoria << endl;

    return 0;
}
