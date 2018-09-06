#include <bits/stdc++.h>
using namespace std;

// Recursion is not always good
// In the this recursion causes the formation
// of Recursive Tree which has uneccessary
// overhead, because many funcitons are
// repeatedly called many many times

// Time complexity: O(n)
int fib_iterative(int n)
{
    if(n <= 1)
    {
        return n;
    }

    int F1 = 0;
    int F2 = 1;
    int F;
    for(int i=2; i<=n; i++)
    {
        F = F1 + F2;
        F1 = F2;
        F2 = F;
    }
    
    return F;
}

// Time complexity: 2^(n/2) <= T(n) <= 2^(n)
int fib_recursion(int n)
{
    if(n <= 1)
    {
        return n;
    }

    return fib_recursion(n - 1) + fib_recursion(n - 2);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Give me a number: ";

    // Try give bigger input: like 46
    cin >> n;
    cout << n << " fibonacci: " << fib_iterative(n) << endl;
    // cout << n << " fibonacci: " << fib_recursion(n) << endl;
    return 0;
}
