#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int x;
    float y, total;

    cout << "Informe a distancia percorrida: " << endl ;
    cin >> x;

    cout << "Informe o total de combustível gasto : " << endl ;
    cin >> y;

    total = x/y;

    cout << total << setprecision(1) << "km/l" << endl;
    return 0;
}