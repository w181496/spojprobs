#include <iostream>
using namespace std;
int main() {
    int t, x, y;
    cin >> t;
    while(t--) {
        cin >> y >> x;
        for(int i = 0; i < y; ++i) {
            for(int j = 0; j < x; ++j)
                if(i == 0 || i == y - 1 || j == 0 || j == x - 1)
                    cout << '*';
                else
                    cout << '.';
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
