//parametarized recursion(print sum of 1 to N)

#include <iostream>
using namespace std;

void f(int i, int sum) {
    if (i < 1) {
        cout << "Sum is: " << sum << endl;
        return;
    }
    f(i - 1, sum + i);
}

int main() {
    int n;
    cin >> n;
    f(n, 0);  
    return 0;
}

//functional recursion sum of i to N

#include <iostream>
using namespace std;

int f(int n) {
    if (n == 0) {
        return 0;
    }
    return n + f(n - 1);
}

int main() {
    int n;
    cin >> n;
    int result = f(n);
    cout << "Sum is: " << result << endl;
    return 0;
}
