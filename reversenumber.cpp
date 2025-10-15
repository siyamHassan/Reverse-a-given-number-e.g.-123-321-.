// Reverse a given number (e.g., 123 → 321).
#include <iostream>
using namespace std;
#include <string>
int main()
{
    string n;
    cout<<"Enter a number:";
    cin>>n;
    int x = n.length();
    for(int i = x-1;i>=0;i--){
        cout<<n[i];
    }
    return 0;
}