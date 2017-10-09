#include <iostream>
using namespace std;
int main() {
    int t, x, y, n;
    cin >> t;
    while(t--) {
        cin >> n >> x >> y;
        for(int i = 1; i <= n; ++i)
            if(i % x == 0 && i % y) cout << i << " ";
        cout << endl;
    }
    return 0;
}
