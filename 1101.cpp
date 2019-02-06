#include <iostream>

using namespace std;

int main(){
    
    int m, n, z;
    int sum;
    
    while(true){
                cin >> m >> n;
                if(m <= 0) break;
                if(n <= 0) break;
                if(m > n){
                     z = m;
                     m = n;
                     n = z;
                }
                sum = 0;
                for(int i = m; i <= n; i++){
                	cout << i << " ";
                       	sum += i;
                }
                cout << "Sum=" << sum << endl;
    }
    return 0;
}