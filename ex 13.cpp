#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float salario_minimo, horas_trabalhadas, dependentes, horas_extras;
    float valor_hora, salario_mes, valor_dependentes, valor_horas_extras;
    float salario_bruto, irrf, salario_liquido, gratificacao, salario_a_receber;
    
    cout << "Digite o valor do salario minimo: ";
    cin >> salario_minimo;
    
    cout << "Digite o numero de horas trabalhadas: ";
    cin >> horas_trabalhadas;
    
    cout << "Digite o numero de dependentes: ";
    cin >> dependentes;
    
    cout << "Digite a quantidade de horas extras trabalhadas: ";
    cin >> horas_extras;
    
    
    valor_hora = salario_minimo / 5;
    
   
    salario_mes = horas_trabalhadas * valor_hora;
    
    
    valor_dependentes = dependentes * 32;
    
   
    valor_horas_extras = (valor_hora * 1.5) * horas_extras;
    
  
    salario_bruto = salario_mes + valor_dependentes + valor_horas_extras;
    
 
    if (salario_bruto <= 200) {
        irrf = 0;
    }
    else if (salario_bruto > 200 && salario_bruto <= 500) {
        irrf = salario_bruto * 0.1;
    }
    else {
        irrf = salario_bruto * 0.2;
    }
    
    
    salario_liquido = salario_bruto - irrf;
    
    
    if (salario_liquido <= 350) {
        gratificacao = 100;
    }
    else {
        gratificacao = 50;
    }
    
  
    salario_a_receber = salario_liquido + gratificacao;
    
   
    cout << fixed << setprecision(2);
    cout << "O salario a receber eh R$ " << salario_a_receber << endl;
    
    return 0;
}
