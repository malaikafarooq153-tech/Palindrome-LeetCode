#include <iostream>
using namespace std;

class Palindrome {
private:
    int num;

public:
    Palindrome(int n) {
        num = n;
    }

    bool isPalindrome() {
        if (num < 0) return false; 
        
        int original = num;
        int reversed = 0;

        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        return (original == reversed);
    }
};

int main() {
    int x;
    cout << "Enter number: ";
    cin >> x;

    Palindrome obj(x);

    if (obj.isPalindrome())
        cout << "true";
    else
        cout << "false";

    return 0;
}