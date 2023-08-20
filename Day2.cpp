#include <iostream>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;
    
    cin.ignore(); // Clear the newline left in the buffer after reading 't'
    
    for (int i = 0; i < t; ++i) {
        string s;
        getline(cin, s); // Read the input string
        
        string even_chars, odd_chars;
        
        for (int j = 0; j < s.length(); ++j) {
            if (j % 2 == 0) {
                even_chars += s[j];
            } else {
                odd_chars += s[j];
            }
        }
        
        cout << even_chars << " " << odd_chars << endl;
    }
    
    return 0;
}
