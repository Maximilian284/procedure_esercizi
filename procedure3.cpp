#include <iostream>
#include <string>
#include <assert.h>
using namespace std;

int inputInt(string mes);
bool isMul(int &n1, int &n2);

int main(){
	int n1 = inputInt("inserisci un numero: ");
	int n2 = inputInt("inserisci un numero: ");
	
	isMul(n1, n2) == true ? cout << "i due numeri sono multipli" << endl : cout << "i due numeri non sono multipli" << endl;
}

int inputInt(string mes){
	int n;
	
	cout << mes;
	cin >> n;
	assert(n > 0);
	
	return n;
}

bool isMul(int &n1, int &n2){
	if (n1 < n2){
		n1 = n1 + n2;
		n2 = n1 - n2;
		n1 = n1 - n2;
	}
	
	return n1%n2 == 0 ? true : false;
}
