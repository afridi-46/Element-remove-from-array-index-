#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your array size : ";
    cin >> n;

    int arr[n];

    cout<<"Enter " << n << " elements : " << endl;
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter arr["<<i<<"] Element : ";
        cin>>arr[i];
    }

    int index;
    cout<<"\n\nEnter deletion index : ";
    cin>>index;

    if(index < 0 || index >= n)
    {
        cout<<"Invalid\n";
    }
    else
    {
        for(int i = index; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1];
    }

    cout<<"After deleting the present array is : ";
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != NULL)
            cout << arr[i] << "\t";
    }
    cout << endl << endl;
}
