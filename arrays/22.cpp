#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    int inc[n],dec[n];
	    inc[0]=1;
	    dec[n-1]=1;
	    for(int i=1;i<n;i++)
	    inc[i]=(arr[i]>arr[i-1])?(inc[i-1]+1):1;
	    for(int i=n-2;i>=0;i--)
	    dec[i]=(arr[i+1]<arr[i])?(dec[i+1]+1):1;
	     int max = inc[0] + dec[0] - 1;  
    for (int i = 1; i < n; i++)  
        if (inc[i] + dec[i] - 1 > max)  
            max = inc[i] + dec[i] - 1;  
	    cout<<max<<endl;
	}
	return 0;
}