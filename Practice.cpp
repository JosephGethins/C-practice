=== Problem 1: Hello World ===

#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}

=== Problem 2: Input and Output ===

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c << endl;
    return 0;
}

=== Problem 3: Basic Data Types ===

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    cin >> i >> l >> c >> f >> d;
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    printf("%.3f\n", f);
    printf("%.9lf\n", d);
    return 0;
}

=== Problem 4: Conditional Statements ===

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) cout << "one" << endl;
    else if (n == 2) cout << "two" << endl;
    else if (n == 3) cout << "three" << endl;
    else if (n == 4) cout << "four" << endl;
    else if (n == 5) cout << "five" << endl;
    else if (n == 6) cout << "six" << endl;
    else if (n == 7) cout << "seven" << endl;
    else if (n == 8) cout << "eight" << endl;
    else if (n == 9) cout << "nine" << endl;
    else cout << "Greater than 9" << endl;
    return 0;
}

=== Problem 5: For Loop ===

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            cout << numbers[i] << endl;
        } else {
            if (i % 2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
    }
    return 0;
}

=== Problem 6: Functions (Max of Four) ===

#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max1 = (a > b) ? a : b;
    int max2 = (c > d) ? c : d;
    return (max1 > max2) ? max1 : max2;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max_of_four(a, b, c, d) << endl;
    return 0;
}

=== Problem 7: Pointers ===

#include <iostream>
using namespace std;

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b);
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    cin >> a >> b;
    int *pa = &a, *pb = &b;
    update(pa, pb);
    cout << a << endl << b << endl;
    return 0;
}

=== Problem 8: Arrays ===

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
