#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    
    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    string swap_a = a;
    string swap_b = b;
    swap_a[0] = b[0];
    swap_b[0] = a[0];
    cout << swap_a << " " << swap_b << endl;
  
    return 0;
}
