#include <iostream>
#include <string>
using namespace std;

int inputInt(string mes);
int ord(int n1, int n2);
int sum(int n1, int n2);

int main(){
	int n1 = inputInt("inserisci un numero: ");
	int n2 = inputInt("inserisci un numero: ");
	
	cout << ord(n1, n2);
}

int inputInt(string mes){
	int n;
	
	cout << mes;
	cin >> n;
	
	return n;
}

int ord(int n1, int n2){
	if (n1 > n2){
		n2 = n2 + n1;
		n1 = n2 - n1;
		n2 = n2 - n1;
	}
	
	return sum(n1, n2);
}

int sum(int n1, int n2){
	int s;
	
	for (int i = n1 + 1; i < n2; i++){
		s += i;
	}
	
	return s;
}
