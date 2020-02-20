#include <iostream>
#include <string>
using namespace std;

int inputInt(string mes);
void printSum(int a, int b);

int main(){
	printSum(inputInt("inserisci un numero: "), inputInt("inserisci un numero: "));
}

int inputInt(string mes){
	int n;
	
	cout << mes;
	cin >> n;
	
	return n;
}

void printSum(int a, int b){
	cout << "la somma di " << a << " e " << b << " e' " << a + b << endl;		 
}

