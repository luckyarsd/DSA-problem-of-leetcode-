// Wap to sort an array in descending order using Bubble sort.

# include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,5,9,3,2};
    for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<5 ; j++)
        {
            if(arr[j+1]>arr[j])
                swap(arr[j+1] , arr[j]);
            else
                break;
        }
    }
    
    
    for (int i=0 ; i<5 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
