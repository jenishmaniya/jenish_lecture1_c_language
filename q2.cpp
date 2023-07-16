#include<iostream>
using namespace std;
int main() {
	char a[100];
    int i;
    cout << "Enter your name:";
    cin >> a;
    
    
    for(i=0;i<=100;i++) {
        if(a[i]>='A' && a[i]<='Z'){
            a[i]=a[i]+32; 
        }
        else if (a[i]>='a'&& a[i]<='z'){
            a[i]=a[i]-32;
        }
    }
    
    cout << a;
    return 0;
}
