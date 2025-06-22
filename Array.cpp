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



* 
