#include <iostream>
#include <math.h>
#include<bits/stdc++.h>      
 
using namespace std;
 
int main() {
 
    float x1,y1,x2,y2,a,b,distance;

    cout << "x1 e y1" << endl;
    cin >> x1 >> y1;
    cout << "x2 e y2" << endl;
    cin >> x2 >> y2;

    a = pow((x2-x1),2);
    b = pow((y2-y1),2);

    distance = sqrt((a+b));

    

    cout<<fixed;
    cout<<setprecision(4)<<distance<<endl;                                      

    
    return 0;
}