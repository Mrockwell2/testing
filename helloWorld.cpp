#include <iostream>
using namespace std;

void sieve(int n, int* primes) {
	int temp_primes[n-1];
	for(int i = 2; i <= n; i++)
		temp_primes[i-2] = i;
}

int main() {
	cout << "Hello World!!" << endl;
	int num = 10;
	int primes [9] = { };
	sieve(num, primes);
	cout << "Testing array creation:";
	for(int i = 0; i < (num-1); i++)
		cout << " " << primes[i];
}