#include<iostream>

using namespace std;

const int n = 100;

int main(){
    int N, i, A[n], B[n], sum = 0;
    
    cin >> N;
    for(i = 0; i < N-1; i++)
        cin >> B[i];
    
    A[0] = B[0];
    A[N-1] = B[N-2];
    sum += A[0] + A[N-1];
    
    for(i = 1; i < N-1; i++){
        if(B[i]<B[i-1])
            A[i] = B[i];
        else
            A[i] = B[i-1];
        sum += A[i];
    }
    
    cout << sum;
}
