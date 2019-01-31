#include <iostream>
 
using namespace std;
 
int main() {
    int a;
    int b;
    while(true){
        cin >> a;
        cin >> b;
        if(a == 0 || b == 0) break;
        if(a > 0 && b > 0) cout << "primeiro\n";
        if(b > 0 && a < 0) cout << "segundo\n";
        if(a < 0 && b < 0) cout << "terceiro\n";
        if(b < 0 && a > 0) cout << "quarto\n"; 
    }
    return 0;
}