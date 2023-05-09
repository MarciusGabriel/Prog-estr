#include<iostream>
using namespace std;
int main() {
 int num1, num2, num3;
   cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Digite o terceiro numero: ";
    cin >> num3;

if (num1 > num2) {
        swap(num1, num2);
    }

    if (num1 > num3) {
        swap(num1, num3);
    }

    if (num2 > num3) {
        swap(num2, num3);
    }
	 cout << "Os numeros em ordem crescente sao: "
         << num1 << ", " << num2 << ", " << num3 << endl;
	
	
	
	
	
	
	
	return 0;
}
