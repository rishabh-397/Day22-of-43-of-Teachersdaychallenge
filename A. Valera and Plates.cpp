#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    int wash = 0;
    int type;
    
    for (int i = 0; i < n; ++i) {
        cin >> type;
        if (type == 1) {
            if (m > 0) {
                m--;
            } else {
                wash++;
            }
        } else {
            if (k > 0) {
                k--;
            } else if (m > 0) {
                m--;
            } else {
                wash++;
            }
        }
    }
    
    cout << wash << endl;
    return 0;
}
