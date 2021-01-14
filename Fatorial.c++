#include <iostream>
using namespace std;

int main(){
   int n,i,f;
   cout << "Informe o número que deseja calcular: ";
   cin >> n;
   f = 1;
   for(i=1;i<=n;i++){
     f *= i;
   }
   cout<< "O fatorial de "<< n << " é " <<f;
   return 0;
    
}
