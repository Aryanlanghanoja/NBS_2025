#include <bits/stdc++.h>
using namespace std;

int Consecutive_Prime_Sum(int n) {
    
    if(n == 3) {
        return 0 ;
    }
    
    if(n == 5) {
        return 1 ;
    }
    
	vector<bool> isPrime(n + 1 , true) ;
	
	for(int i = 2 ; i <= (n / i) ; i++) {
	    if(isPrime[i]) {
	        for(int j = i * i ; j < n ; j += i) {
	            isPrime[j] = false ;
	        }
	    }
	}
	
	vector<int> primeTillN ;
	
	for(int i = 2 ; i <= n ; i++) {
	    if(isPrime[i]) {
	        primeTillN.push_back(i) ;
	    }
	}
	
	int count = 0 ;
	
	for(int i = 2 ; i < primeTillN.size() ; i++) {
	    int num =  primeTillN[i];
	    int idx = i - 1 ;
	    
        for(int j = i - 1 ; j >= 0 ; j--) {
            
            if((num - primeTillN[j]) > 0) {
                num -= primeTillN[j] ;
                continue;
            }
            
            if(num == 0) {
                count++;
            }
            
            break ;
        }
	}
	
	return count ;
}

int main() {
	int n ;
	cin >> n ;
	
	int count = Consecutive_Prime_Sum(n) ;
	
	cout << count << endl ;
	
	return 0 ;

}
