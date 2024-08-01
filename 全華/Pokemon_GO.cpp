#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) 
    {
        int a, b, c;
        cin >> a >> b >> c;
        
        int insidecnt = 0;
        
        while (insidecnt <= 1000) {
            if (a == 7 && b == 7 && c == 7) {
                cout << insidecnt << endl;
                break;
            }
            
            int aa = a;
            int bb = b;
            
            a = (a + 1) % 10;
            b = (b + 3) % 10;
            c = (c + abs(aa - bb) / 2) % 10;
            
            insidecnt++;
        }
        
        if (insidecnt > 1000) {
            cout << "0" << endl;
        }
    }
    
    return 0;
}
