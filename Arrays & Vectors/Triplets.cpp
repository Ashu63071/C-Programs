Input : arr({10,5,2,3,-6,11,9,4,7}) and S =10
Output: (-6	5	11) (-6	7	9) (2	3	5)
find the triplets of numbers in sorted order to sum upto S.



////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

vector<vector<int>> triplets(vector<int> ar, int sum){

    //Vector initialized for result
    vector<vector<int>> pairThree;

    //sorting below array
    sort(ar.begin(),ar.end());
    int i=0;
    while(i<ar.size())
    {
        int currSum = sum - ar[i];
        int j=i+1;
        int k=ar.size()-1;
        while (j<k){
            if(currSum == ar[j] + ar[k])
            {
                pairThree.push_back({ar[i],ar[j],ar[k]});
                j++;
                k--;
            }
            else if (currSum > (ar[j] + ar[k]))
            {
                j++;
            }
            else if (currSum < (ar[j] + ar[k]))
            {
                k--;
            }
            
        }
        i++;

    }

    return pairThree;
}

int main() {
	// your code goes here
    vector<int> arr {10,5,2,3,-6,11,9,4,7};
    int s=10;
    auto p = triplets(arr, s);
    for(auto a : p){
        for(auto b : a){
            cout <<b<<"\t";
        }
        cout<<endl;
    }
	return 0;
}

