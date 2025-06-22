#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
  vector<int>a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	long long S = 0;
	for (int i = 0; i < n; i++){
		S += a[i];
	}
	cout << S;
}



#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){   
        a[i]=a[i]*a[i];                 //print square elements in array
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}



* 
