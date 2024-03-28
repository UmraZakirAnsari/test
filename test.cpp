#include <iostream>
using namespace std;

bool isRotatedByTwo(string a, string b) {
    int n = a.length();

    // Concatenate 'a' with itself
    string rotatedA = a + a;

    // Check if 'b' is a substring starting from position 2 or (n-2)
    return (rotatedA.substr(2, n) == b || rotatedA.substr(n + 2, n) == b);
}

int main() {
    string a = "amazon";
    string b = "azonam";

    if (isRotatedByTwo(a, b)) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }

    return 0;
}
