//  Online C++ compiler to run C++ program online
// The -1 is not because of j. The -1 is because we're comparing arr[i] with arr[i+1].

// Look at this array:

// 73 5 14 3 2 8

// Length:

// l = 6

// Valid indices:

// 0 1 2 3 4 5

// Now suppose we write:

// for(int i=0; i<l; i++)

// When i = 5, this line executes:

// if(arr[i] > arr[i+1])

// which becomes:

// if(arr[5] > arr[6])

// But arr[6] does not exist.

// So we must stop one position earlier:

// for(int i=0; i<l-1; i++)

// Now the last value of i is 4:

// arr[4] > arr[5]

// which is valid.

// Now let's understand the j.

// After Pass 1:

// 73 5 14 3 2 8
// ↓
// 5 14 3 2 8 73

// Notice 73 reached its final position.

// So during Pass 2, comparing with 73 is pointless because it's already sorted.
#include <iostream>
using namespace std;
int main() {

int arr[]= {73,5,14,3,2,8};
int l = sizeof(arr)/sizeof(arr[0]);
int temp = 0;
bool didswaped = false;

for(int j = 0; j<l-1;j++)
{
    
for(int i=0; i<l-j-1 ; i++)
{
        if(arr[i]>arr[i+1])
        {
            didswaped = true;
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
}
  if(!didswaped)
        {
           break; 
        }
}

cout <<"after sorting" << endl;
for(int k=0;k<l;k++)
{
  cout <<arr[k] << endl;
}

    return 0;
}
