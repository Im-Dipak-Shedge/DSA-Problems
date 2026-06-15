    // Online C++ compiler to run C++ program online
    #include <iostream>
    #include <vector>
    using namespace std;
    
    int partition(vector<int>& arr, int st, int end)
    {
        int pivot = arr[end];
        int i = st-1;
        
        
        for(int j=st; j<end ;j++)
        {
            if(arr[j]<pivot)
            {
                i++;
                swap(arr[j],arr[i]);
            }
        }
        i++;
        swap(arr[i],arr[end]);
        return i;
    }
    
    void quicksort(vector<int>& arr, int st, int end)
    {
        if(st<end)
        {
            int pivot = partition(arr,st,end);
            
            //recursion
            quicksort(arr, st , pivot-1);
            quicksort(arr, pivot+1, end);
        }
        
    }
    
    int main() {
       vector <int> arr = {1,4,5,30,3,2};
       int st = 0;
       int end = arr.size()-1;
       quicksort(arr,st,end);
       
       for(int i=0;i<=end;i++)
       {
           cout<<arr[i]<<endl;
       }
        return 0;
    }
