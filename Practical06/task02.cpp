#include <bits/stdc++.h>

using namespace std;
 
string isPalindrome(string S)
{
   
    string P = S;
 
    reverse(P.begin(), P.end());
 

    if (S == P) 
    {
        return "Palindrome";
    }
    else 
    {
      	return "Not A Palindrome\n";
    }
}
 
int main()
{
    string S;
    getline (cin, S);
    cout << isPalindrome(S);
    return 0;
}
