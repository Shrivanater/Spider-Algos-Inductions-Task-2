#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int N = 1e5;

int main(){
    int n, q, l, r, v;
    int i, j;
    vector<int> arr (N);
    
    cin >> n >> q;
            
    for(i = 1; i <= n; i++){
        arr[i] += i;
    }
    
    for(i = 0; i < q; i++){
        cin >> l >> r >> v;
        
        for(j = l; j <= r; j++){
            arr[j] += v;
        }        
    } 
    
    cout << *max_element(arr.begin(), arr.end());    
        
}
