#include <iostream>
#include <stdlib.h>

using namespace std;
 
int main() {
 
    int a,b,c,maior,maiorAB;
    
    cout << "Informe um valor para a: " << endl;
    cin >> a;
    
    cout << "Informe um valor para b: " << endl;
    cin >> b;
    
    cout << "Informe um valor para c: "<< endl;
    cin >> c;

    maiorAB = (a+b+abs(a-b))/2;

    maior = (c+maiorAB+abs(c-maiorAB))/2;

    cout << maior << " eh o maior" << endl;

    
    return 0;
}