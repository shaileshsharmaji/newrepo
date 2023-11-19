#include <iostream>
using namespace std;
int main()
{
    int n; // to tell the nth number of in a fibonacci series
    int arr[1000];
    cout << "enter the number to find ";
    cin >> n;
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 0; i<n-1; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];

        cout << arr[n-1]<<" ";
        
       
    }

}



