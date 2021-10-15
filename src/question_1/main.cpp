#include "question1.h"
using std::cout; using std::cin;

int main()
{
    string user_string;
    cout<<"Enter a string: ";
    cin>>user_string;
    bool bool_palindrome = is_palindrome(user_string);
    cout<<std::boolalpha<<bool_palindrome;

    return 0;
}