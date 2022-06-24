#include <iostream>
#include<vector>
using namespace std;

void highestMountain(vector<int> a)
{
    int largest = 0;
    for(int i = 1; i< a.size()-2 ;){

        if(a[i]>a[i-1] && a[i]>a[i+1]){
            //do some code
            int count=1;
            int j=i;
            while(j>=1 && a[j-1]<a[j]){
                j--;
                count++;
                //cout<<"I......"<<i<<" and "<<"J......"<<j<<" and "<<"Count......"<<count<<endl;
            }
            while(i<=a.size()-2 && a[i+1]<a[i]){
                i++;
                count++;
                //cout<<"I......"<<i<<endl;
                //cout<<"I......"<<i<<" and "<<"J......"<<j<<" and "<<"Count......"<<count<<endl;
            }
            if(count>largest)
                largest = count;
        }
        else{
            i++;
                //cout<<"I......"<<i<<endl;
        }
    }
    cout<<"LARGEST="<< largest;
}


int main() {
	// your code goes here
    vector<int> arr{5,6,1,2,3,4,5,4,3,2,1,0,15,5,3,1};
    highestMountain(arr);
	return 0;
}
