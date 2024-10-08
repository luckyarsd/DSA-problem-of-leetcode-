// WAP to Show implementation of binary search.
# include <iostream>
using namespace std;

void display_array(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sort(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i ; j>0 ; j--)
        {
            if(arr[j]<arr[j-1])
                swap(arr[j] , arr[j-1]);
            else
                break;
        }
    }
}

void binary_search (int arr[] , int n)
{
    int target;
    cout<<"Enter target to find: ";
    cin>>target;
    int start = 0 , end = n , index = -1 , mid = 0;
    while(start<end)
    {
        mid = (start+end)/2;
        if(arr[mid]==target)
        {
            index = mid;
            cout<<"Got it at index = ";
            break;
        }
        else if(arr[mid]<target)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    cout<<index;
}

int main()
{
    int arr[1000] = {};
    int n;
    cout<<"Number of element in array: ";
    cin>>n;
    cout<<endl;
    for(int i=0; i<n ; i++)
    {
        cout<<"Enter "<<i<<" element: ";
        cin>>arr[i];
    }
    sort(arr,n);
    display_array(arr,n);
    cout<<endl;
    binary_search(arr,n);
    return 0;
}
