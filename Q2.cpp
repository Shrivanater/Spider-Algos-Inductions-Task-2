#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

const int N = 1e5;

using namespace std;
int main(){	
	int i, n, q, l, r, v, M; 
	vector<int> vec(N,0);
	
	cin >> n >> q;

	for(i = 0; i < q; i++){
		cin >> l >> r >> v;
		
		vec[l] += v;
		vec[r+1] -= v;
	}
	
	for(i = 2; i <= n; i++){
		vec[i] += vec[i-1];
	}

	for(i = 1; i <= n; i++){
		vec[i] += i;
		M = max(M, vec[i]);
	}

	cout << M;	
}
