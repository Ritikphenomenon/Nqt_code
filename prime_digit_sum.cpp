/*
To check,is the digit sum of the prime number is prime.
*/

#include <iostream>

using namespace std;

bool isPrime(int n) {
   	// Write your code here.
	if(n==1)
	return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0 || n%(n/i)==0)
		return false;
	}
	return true;
}

bool calculateSum(int n) {
    int sum = 0;
    while (n > 0) {
        int num = n % 10;
        sum += num;
        n /= 10;
    }
    return isPrime(sum);
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        if (isPrime(i) && calculateSum(i)) {
            cout << i << endl;
        }
    }
    return 0;
}