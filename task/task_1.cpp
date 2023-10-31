#include <iostream>
using namespace std; 

int main ()
{
    cout << "what is today's date?\ndd mm yyyy:\n";
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (!(a == 31 && b == 10 && c == 2023)){
    cout << "wrong date\n";
    }
    else {
    cout << "happy halloween!\n";
    }

    return 0;
}
