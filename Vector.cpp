#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    vector<char> v; //A vector of characters (initially empty)
    vector<int> v1 = {10, 14, 32, 64, 16}; //A vector of integers
    
    v.push_back('p')' // add/push a new character at the back of v
    v1.pop_back(); //remove/pop from back of vector1
    
    v.push_back('i');
    v1.pop_back();
    
    for (int i = 0; i < 4; i++)
    {
    v1.push_back(0);
    }
    
    for ( int i = 0; i < v1.size(); i++)
    {
    cout<<v1[i]<<" ";
    }
    
    string str1 = "hello"
    string str2 = str1 + "world";
    
    cout << "str1 == "hello")
    cout << "the 4th character is" << str1[3] << endl;
    cout << "str1 has " << str1.size() << " characters" << endl;
    
    if (str1 == "hello")
         cout << "hi there" << endl;
         
    if (str2 != "world")
    cout << "out of this world" << endl;
    
    str2 += "ly one";
    
    return 0;
    system("pause");
       
