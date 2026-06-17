// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int st,int mid,int end)
{
    int i = st, j = mid+1;
    vector<int> temp;
    while(i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    
    for(int k=0; k<temp.size(); k++)
    {
        arr[k+st]= temp[k];
    }
    
}


void devide(vector<int> &arr,int st, int end)
{
    if(st<end){
    int mid = st + (end-st)/2;
    
    devide(arr,st,mid);//left part
    devide(arr,mid+1,end);//right part
    
    //merging the parts in sorted order
    merge(arr,st,mid,end);
    }
}

int main() {
    vector<int> arr = {32,3,4,5,2,6};
    devide(arr,0,arr.size()-1);
    
    for(int val : arr)
    {
        cout<<val<<endl;
    }

    return 0;
}

//How k+st Solves It (An Example)Imagine your main array is arr = {32, 3, 4, 5, 2, 6}.Later in the program,
the algorithm decides to merge the right half: {5, 2, 6}.For this specific right half:The starting index st is 3 (because 5 is at index 3 in the main array).
Your code sorts these numbers into temp, resulting in temp = {2, 5, 6}.Now,
the loop runs to copy them back:Loop Iteration (k)Temp Index (temp[k])ValueTarget Array Index (k + st)Where it goes in Main Arrayk = 0temp[0]20 + 3 = 3arr[3] = 2k = 1temp[1]51 + 3 = 4arr[4] = 5k = 2temp[2]62 + 3 = 5arr[5] = 6
By adding st, you shift the index forward so the sorted numbers land exactly back where they belong.
