#include<iostream>
#include<string.h>

using namespace std;

const int N = 1e6;

int main(){
    
    int T, i, j, k, ans = 0, temp = 0, count = 0;
    char str[N];
    
    cin >> T;
    
    for(i = 0; i < T; i++){
        
        cin >> str;
        
        k = strlen(str);       
        count = temp = ans = 0;
        
        for(j = 0; j < k; j++){
            
            if(str[j] == '<'){
                count++;
            }
            
            else{
        
                if(count >= 0){
                    count--;
                    temp++;
                }
                                    
                if(count == 0){
                    ans = max(ans,temp);
                }
                    
                if(count < 0 || j == k - 1){
                    break;
                }
            }
        }
               
        cout << 2*ans << endl;
    }
}

