//WAP to find all even elements from given 1D array.
#include<iostream>
using namespace std;
int main(){
    int i,n;
	cout<<"Enter the size of array:";
    cin >> n;
    int arr[n];
   
    for(i=0; i<n; i++)
        cin>>arr[i];
        cout<<"\nEven Numbers are:\n";
    for(i=0; i<n; i++){
      if(arr[i]%2==0)
         cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}
