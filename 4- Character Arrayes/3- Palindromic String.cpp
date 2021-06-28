/*A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as madam or racecar.
The strlen() function calculates the length of a given string. The strlen() function is defined in string. h header file. It doesn't count null character '\0'.*/

#include <iostream>
#include <cstring>

using namespace std;
   bool palindrom(char a[]){
       int i=0;
       int j=strlen(a)-1;
       
       while(i<j){
           if(a[i]==a[j]){
           i++;
           j--;
           }else{
               return false;
       }
   }return true;
 }
int main()
{
    char a[100];
    cin.getline(a,100);
    if(palindrom(a)){
        cout<<"palindromic string";
    }else{
        cout<<"not palindromic string";
}
    return 0;
}
