#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    while(true) {
        cin >> x >> y;
        
        if(x == 0 && y == 0)
            break;
        
        if (x > y)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    
    return 0;
}