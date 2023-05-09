#include <iostream>
using namespace std;
int main (){
int n1, n2, n3, n4 ;
cout << "Digite tres numeros em ordem crescente";
cin >> n1;
cin >> n2;
cin >> n3;
cout << "Digite um numero (fora de ordem)";
cin >> n4;
 
 if ( n4 > n3){
 
 cout << "A ordem decrescente eh " << n4 << n3 << n2 << n1 ;
}
 else if (n4 > n2 &&  n4 < n3){
 
 cout << "A ordem decrescente eh " << n3 << n4 << n2 << n1 ;
 }
 else if ((n4 > n1 && n4 > n2){
 
 cout << "A ordem decrescente eh de " << n3 << n2 << n4 << n1;
 }
 else if ( n4 < n1){
 
 cout << "A ordem decrescente eh " << n3 << n2 << n1 << n4 ;
 }
 
 
	
	
	
	return 0;
}
