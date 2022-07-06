#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


vector<int> pairSum(vector<int> ar, int sum)
{
    unordered_set<int> arr;
    vector<int> pair;
    for(int i = 0;i< ar.size();i++){
        if(arr.find(sum-ar[i]) != arr.end()){
            pair.push_back(ar[i]);
            pair.push_back(sum-ar[i]);
            break;
        }
        else{
            arr.insert(ar[i]);
        }
    }
    return pair;
}

int main() {
	// your code goes here
    vector<int> arr {10,5,2,3,-6,11,9};
    int s=19;
    auto p = pairSum(arr, s);
    if(p.size()==0)
    cout<< "No Such Pair"<<endl;
    else
    cout <<"("<< p[0] <<","<<p[1]<<")"<<endl;
	return 0;
}
