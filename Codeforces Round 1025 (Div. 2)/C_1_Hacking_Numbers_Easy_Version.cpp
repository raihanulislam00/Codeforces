#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, r;
        cin >> n;
        
        cout << "mul 9" << endl;
        cin >> r;
        if (r == -1) return 0;
        
        cout << "digit" << endl;
        cin >> r;
        if (r == -1) return 0;
        
        cout << "digit" << endl;
        cin >> r;
        if (r == -1) return 0;
        
        cout << "add " << (n - 9) << endl;
        cin >> r;
        if (r == -1) return 0;
        
        cout << "!" << endl;
        cin >> r;
    }
    
    return 0;
}
