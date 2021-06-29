#include <iostream>

using namespace std;

int main()
{
    //find index of sub string - find()
    string s= "i love gym and exercise";
    int idx = s.find("gym");
    cout<<idx<<endl<<s<<endl;
    
    //remove substring - s.erase(idx,len+1);
    string s1 = "gym";
    int len = s1.length();
    s.erase(idx,len+1);
    cout<<s<<endl;
    
    //itrates characters over the strings 
    string s2 = "david";
    for(int i=0; i<s2.length(); i++){
        cout<<s2[i]<<',';
    }cout<<endl;
    
    /* What is the auto type in C++?
The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer.
What is scope resolution operator in C++ with example?
The scope resolution operator ( :: ) is used for several reasons. For example: If the global variable name is same as local variable name, the scope resolution operator will be used to call the global variable. It is also used to define a function outside the class and used to access the static variables of class.*/
    for(auto i=s2.begin(); i!=s2.end(); i++){
        cout<<(*i)<<':';
    }cout<<endl;
    for(auto c:s2){
        cout<<c<<" ";
    }
    
    return 0;
}

