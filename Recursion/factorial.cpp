#include <bits/stdc++.h>
using namespace std;

// Program stores F(5) then F(4) then F(3) in a stack, then when F(0) is calculated 
// one by one F(x)'s are popped from the stack

int factorial(int n){

    cout << "I am calculating F("<<n<<")\n";
    if(n <= 0)
    {
        return 1;
    }
    int F = n * factorial(n-1);
    cout << "Done! F("<<n<<") = "<<F<<"\n";
    return F;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Give me a number: ";
    cin >> n;
    cout << n << " factorial: " << factorial(n) << endl;
    return 0;
}
