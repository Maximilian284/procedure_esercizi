#include <iostream>
#include <string>
#include <assert.h>
using namespace std;

int inputInt(string mes);
void calc(int n);

int main(){
	int n = inputInt("inserisci un numero: ");
	
	calc(n);
}

int inputInt(string mes){
	int n;
	
	cout << mes;
	cin >> n;
	assert(n > 0);
	
	return n;
}

void calc(int n){
	int s = 0, i = 0;
	
	for (; s < n; i += 1){
		s += i;
	}
	
	cout << "il numero e' " << s << " e sono stati necessari " << i - 1 << " numeri" << endl;
}
