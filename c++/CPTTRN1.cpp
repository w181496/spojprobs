#include <iostream>
using namespace std;
int main() {
    int t, x, y;
    char c;
    cin >> t;
    while(t--) {
        cin >> y >> x;
        bool flag = true;
        for(int i = 0; i < y; ++i) {
            if(flag) c = '*';
            else c = '.';
            for(int j = 0; j < x; ++j) {
                cout << c;
                c = (c == '*' ? '.' : '*');
            }
            cout << endl;
            flag = !flag;
        }
        cout << endl;
    }
    return 0;
}
