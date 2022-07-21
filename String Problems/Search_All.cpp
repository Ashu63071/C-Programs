
//Basic

#include<bits/stdc++.h>
using namespace std;

vector<int> stringSearch(string big,string small){
    //store the occurrences in the result vector
    vector<int> result = {};
    int index = 0;
    while (index !=-1){
        index = big.find(small,index);
        if(index != -1){
            result.push_back(index);
            index +=1;
        }
    }
    return result;

}
