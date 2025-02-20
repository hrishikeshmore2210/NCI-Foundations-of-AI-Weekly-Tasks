#include <iostream>
using namespace std;

extern "C" {
    bool is_palindrome(int num) {
        int reversed = 0, original, remainder;
        original = num;
        
        while (num != 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }
        
        return original == reversed;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (is_palindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;
    
    return 0;
}
