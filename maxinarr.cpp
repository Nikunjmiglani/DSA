#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int max_height = 0;
        for (int i = 0; i < N; i++) {
            int h;
            cin >> h;
            max_height = max(max_height, h); 
        }

        cout << max_height << endl;
    }

    return 0;
}
