#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main() {
    // a1b3c5
    // a12b3l29

    string s;
    cin >> s;
    int i = 1;
    while (i < size(s)){
        if (isdigit(s[i]) && isdigit(s[i+1])) {
            string num1 = "";
            num1 = num1 + s[i] + s[i+1];
            for (int j = 0; j < stoi(num1); j++) {
                cout << s[i-1];
            }
            i += 3;
        } else if(isdigit(s[i])) {
            string num1 = "";
            num1 = num1 + s[i];
            for (int j = 0; j < stoi(num1); j++) {
                cout << s[i-1];
            }
            i += 2;
        }
    }
}
