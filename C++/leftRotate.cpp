#include <iostream>
using namespace std;
void leftRotate(int arr[],int n){
    int firstDigit=0;
    for (int i = 0; i < n; i++)
    {
        if(i==0){
    // int temp=arr[i];
    // arr[i]=arr[n-1];
    // arr[n-1]=temp;
    firstDigit=arr[i];

}else
{
    arr[i-1]=arr[i];
    if(i==n-1){
        arr[i]=firstDigit;
    }
}

    }
    
for (int i = 0; i < n; i++)
{
    cout<<arr[i];
}


}
int main()
{
    int arr[]={6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    leftRotate(arr,n);
 return 0;
}