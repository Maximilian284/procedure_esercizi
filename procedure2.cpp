#include <iostream>
#include <cmath>
#include <assert.h>
using namespace std;

int inputInt(string mes);
char inputChar(string mes);
void printOperation(int &a, int &b, char &o);

int main(){
	int n1 = inputInt("inserisci un numero: ");
	int n2 = inputInt("inserisci un numero: ");
	
	char c = inputChar("inserisci l'operatore: ");

	printOperation(n1, n2, c);
}

int inputInt(string mes){
	int n;
	
	cout << mes;
	cin >> n;
	
	assert(n > 0);
	
	return n;
}

char inputChar(string mes){
	char c;
	
	cout << mes;
	cin >> c;
	assert(c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
	
	return c;
}

void printOperation(int &n1, int &n2, char &c){
	if (c == '+'){
		cout << "la somma tra " << n1 << " e " << n2 << " e' " << n1 + n2 << endl; 
	}else if (c == '-'){
		cout << "la differenza tra " << n1 << " e " << n2 << " e' " << n1 - n2 << endl;
	}else if (c == '*'){
		cout << "il prodotto tra " << n1 << " e " << n2 << " e' " << n1 * n2 << endl;
	}else if (c == '/'){
		cout << "la divisione tra " << n1 << " e " << n2 << " e' " << n1 / n2 << endl;
	}else if (c == '^'){
		cout << "l'elevamento a potenza di " << n1 << " a " << n2 << " e' " << pow(n1, n2) << endl;
	}
}

