#include <iostream>

using namespace std;

int main()
{
    char s[100];
    cin.getline(s,100,'$');
    cout<<s;

    return 0;
}

/*input- heloo david
         how are you. $
  o\p-   hello david
         how are you. */
