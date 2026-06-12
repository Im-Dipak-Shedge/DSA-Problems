// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {

int arr[]= {7,5,39,2,8};
int l = 5;
int temp = 0;


for(int i=0; i<l ; i++)
{
    for(int j=i+1;j< l; j++)
    {
        if(arr[j]<arr[i])
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        
        }
       
    }
}

cout <<"after sorting" << endl;
for(int k=0;k<l;k++)
{
  cout <<arr[k] << endl;
}

    return 0;
}
