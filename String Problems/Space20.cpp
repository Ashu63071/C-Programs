
#include <iostream>
#include <cstring>
using namespace std;

void replace_space(char *str){
    //code to replace all spaces with %20
    int countspace=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            countspace += 1;
        }
    }
    cout<<countspace<<endl;
    int idx = strlen(str) + 2*countspace;
    cout<<idx<<endl;
    str[idx]='\0';
    for(int i = strlen(str)-1 ; i>=0 ; i--)
    {
        if(str[i]==' '){
            //do something
            str[idx-1] = '0';
            str[idx-2]='2';
            str[idx-3]='%';
            idx -= 3;
            cout<<idx<<endl;
        }
        else{
            str[idx-- - 1]=str[i];
            // cout<<idx<<endl;
        }
    }
}
