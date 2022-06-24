#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void largestBand(vector<int> a)
{
    unordered_set<int> s;
    for(auto element : a){
        s.insert(element);
    }
    int largest=0;
    // int i=1;
    for(auto element : s){
        int parent = element - 1;
        //do something if parent is not present in the set
        // cout<<"I..."<<i<<"___"<<element<<"____";
        if(s.find(parent)==s.end()){

            //find entire chain starting from element
            int next_no = element + 1;
            int count=1;

            //do something till the next_no is present in the set

            while(s.find(next_no)!=s.end()){
                // cout<<"next_no...."<<next_no<<" and "<<"I...."<<i++<<endl;
                next_no++;
                count ++;
            }
            if(count > largest){
                largest = count;
            }
        }
    }

    cout<<"LARGEST="<< largest;
}


int main() {
	// your code goes here
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};
    largestBand(arr);
	return 0;
}
