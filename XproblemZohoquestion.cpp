#include <iostream>
using namespace std;
int main() {
// g                         s
//   e                     k
//     e                 e
//       k             e
//         s         g
//           f      r
//              o
//           f     r
//         s         g
//       k             e
//     e                 e
//   e                      k
// g                          s 


    string myStr;
    cin >> myStr;
    int length = size(myStr);
    for (int j = 0; j < length; j++) {
        for (int i = 0; i < size(myStr); i++) {
            if (i == j || i == (length-1-j)) {
                cout << myStr[i];
            } else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}

