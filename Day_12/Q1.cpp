# include <iostream>
using namespace std;

int main() {
   
    int n, original, reverse=0, digit;

    cout << "Enter an number: ";
    cin >> n;

    original = n;

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    if (original == reverse) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}