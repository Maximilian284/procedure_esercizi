#include <iostream>
#include <string>
#include <assert.h>
using namespace std;

int inputInt(string mes);
int calc1(int n);
int calc2(int n);
int rapp(float n1, float n2);

int main(){
	int n1 = inputInt("inserisci un numero: ");
	int n2 = inputInt("inserisci un numero: ");
	
	cout << "il valore finale e' " << rapp(calc1(n1), calc2(n2)) << endl;
}

int inputInt(string mes){
	int n;
	
	cout << mes;
	cin >> n;
	assert(n > 0);
	
	return n;
}

int calc1(int n){
	int c = 1;
	
	for (; n > 1; n--){
		c *= n;
	}
	
	return c;
}

int calc2(int n){
	int c = 1;
 	
 	for (int i = 1; i <= 3; i++){
 		c *= n;
	}
	
	return c;
}

int rapp(float n1, float n2){
	return n1/n2;
}

