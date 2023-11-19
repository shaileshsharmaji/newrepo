// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// to print reverse of an array
int main() {

int arr[6]={1,2,3,4,5,6};
int start=0,end=5;
while(start<end){
   arr[start]=arr[end];
   arr[end]=arr[start];
    start++;
    end--;
}
for(int i=0;i<6;i++)
cout<<arr[i]<<" ";
return 0;
}