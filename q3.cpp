//WAP to find all leap years from 2020 to 3030 and store in array.
#include<iostream>
using namespace std;
int main(){
    int a=2020,b=3030,i,j=0;
	int leap[b-a]; 
	for(i=a;i<=b;i++){
    	if(i%4==0 && (i%100!=0 || i%400==0)) { 
    	leap[j] =i;
    	j++;
    	}
	}
	cout << "The array is: ";
	for(i=0;i<j;i++){ 
    cout << " " << leap[i];
    }
    return 0;
}
