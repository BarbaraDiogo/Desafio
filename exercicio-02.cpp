#include <iostream>
#include <math.h>
using namespace std;
 
bool QuadradoPerfeito(int x){
    int s = sqrt(x);
    return (s*s == x);
}
 
bool Fibonacci(int n){

    return QuadradoPerfeito(5*n*n + 4) ||
           QuadradoPerfeito(5*n*n - 4);
}
 
int main(){
  int number;
  cout << "Informe um numero: ";
  cin >> number;
     Fibonacci(number)? cout << "O numero " <<  number << " pertence a sequencia de Fibonacci \n":
                     cout << "O numero " <<  number << " nao pertence a sequencia de Fibonacci \n" ;
  return 0;
}