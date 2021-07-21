#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	
	long long int n, m, i = 0, j = 0, c = 1, temp, add = 1, broken = 0;
	long long unsigned int sum = 0, ans = 1;
	vector<int> s;
	
	cin >> n >> m;
	
	while(i < m){
		cin >> j;
		s.push_back(j);
		i++;
	};
	
	for(i = 1; i <= n; i++){
		
//		cout<< "i: " << i << endl;
//		cout << "broken: " << broken << endl;
		
		if(broken > 1){
			cout << 0;
			exit(0);
		}
						
		else{
			
			if(binary_search(s.begin(), s.end(), i) == 0 && i < n){
				c++;
				broken = 0;
			}
			
			else{
							
				if(i == n){
					c++;
				}
				else{
					broken++;
				}	
							
//				cout << " C: " << c << endl;				
				for(j = 0; j < c; j++){
					temp = sum;
					sum += add;
					sum %= 1000000007;
					add = temp;
				}
				
//				cout << "Sum: " << sum << endl;
				ans *= sum;
				ans %= 1000000007;
				sum = c = 0;
				add = 1;			
			}
		}
	}
	
//	ans %= 1000000007;
	
	cout << ans;	
}
