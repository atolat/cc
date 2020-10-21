// Your task is to Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. 
// Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

// Input Format
// N(integer) followed by N strings.

// Constraints
// N<=1000

// Output Format
// N lines each containing one string.

// Sample Input
// 3
// bat
// apple
// batman

// Sample Output
// apple
// batman
// bat

#include <iostream>
#include <algorithm>
using namespace std;

bool comp(string a, string b){
    if (a.size() <= b.size() && b.substr(0,a.size()) == a) {
        return false;
    }
    else if (b.size() <= a.size() && a.substr(0,b.size()) == b) {
        return true;
    }
    else {
        return a < b;
    }
}
int main() 
{

    int n;
    cin>>n;
    string* str = new string[n];
    cin.ignore();
    for(int i=0;i<n;i++)
    {   
        cin>>str[i];
    }
    sort(str, str+n, comp);
    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<endl;
    }
}
