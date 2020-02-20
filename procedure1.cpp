#include <iostream>
#include <string>
using namespace std;

int input(string mes);
void printSum(int a, int b);

int main(){
	printSum(input("inserisci un numero: "), input("inserisci un numero: "));
}

int input(string mes){
	int n;
	
	cout << mes;
	cin >> n;
	
	return n;
}

void printSum(int a, int b){
	cout << "la somma di " << a << " e " << b << " e' " << a + b << endl;		 
}

