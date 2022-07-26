#include <iostream>

using namespace std;

int main()
{
    string str1 = "HiiiiH";
    string str2 = "HiiiiH";
    int f=1;
    if(str1.size()==str2.size())
    {
        f=0;
        int k = str2.size();
        for(int i = 0;i<str1.size()/2;i++)
        {
            if(str1[i]!=str2[--k]){   f=1;break;   }
        }
    }
    if(f==0){
        cout<<"YES Palindrome";
    }
    else
        cout<<"Not Palindrome";

    return 0;
}
