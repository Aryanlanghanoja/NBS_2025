#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    char n = -42;
    bitset<8> b(n);
    cout << "Binary of " << n << " is: " << b << endl;
    return 0;
}
