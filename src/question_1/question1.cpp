#include "question1.h"

bool test_config()
{
    return true;
}

bool is_palindrome(string s)
{
    string reverse;
    for(int i = s.length()-1; i >= 0; --i)
    {
        reverse.push_back(s[i]);
    }
    if(reverse == s)
    {
        return true;
    }else{
        return false;
    }
}
