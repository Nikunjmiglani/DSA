#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dup = n;
    int revnum = 0;

    while (n > 0) {
        int id = n % 10;
        revnum = (revnum * 10) + id;  
        n = n / 10;
    }

    if (dup == revnum) {
        cout << "true";
    } else {
        cout << "false";
    }
}
