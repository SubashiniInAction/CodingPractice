// C++ program to reverse a string using stack
#include <bits/stdc++.h>
using namespace std;
 
void recursiveReverse(string &str)
{
	//Stack of characters
   stack<char> st;
   //Add characters to stack by push()
   for (int i=0; i<str.length(); i++)
       st.push(str[i]);
 	//Access topmost element and store in array
   for (int i=0; i<str.length(); i++) {
       str[i] = st.top();
       //Deletes topmost element
       st.pop();
   }       
}
 
// Driver program
int main()
{
    string str;
    cout<< "Enter the string for reversal : ";
    cin>>str;
    recursiveReverse(str);
    cout <<"Reversed String --> "<< str;
    return 0;
}
