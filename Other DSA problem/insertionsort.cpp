// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
 int arr[]={3,5,32,25,1,4};
 int n = sizeof(arr)/sizeof(arr[0]);
 
 for(int i=0; i<n ; i++)
 {
     int key  = arr[i];
     int j = i-1;
     while(j>=0 && arr[j]>key)
     {
         arr[j+1] = arr[j];
         j--;
     }
     
     arr[j+1] = key; //j+1 bcoz when j will be -1 when loop breaks
 }
     
     
     for(int k=0; k<n;k++)
     {
         cout<<arr[k]<<endl;
     }
    return 0;
}
