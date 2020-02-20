#include <iostream>
#include <cmath>
#include <string>
#include <assert.h>
#include <stdlib.h>
using namespace std;

int inputInt(string mes);
int factorial(int n);
int expn(int n, int e);
int printMenu();
void choice(int choice, bool &exit);

int main(){
	bool exit = false;
	
	while (exit == false){
		int n = printMenu();
		
		choice(n, exit);		
	}
}

int inputInt(string mes){
	int n;
	
	cout << mes;
	cin >> n;
	assert(n > 0);
	
	return n;
}

int factorial(int n){
	int f = 1;
	
	for (; n > 1; n--){
		f *= n;
	}
	
	return f;
}

int expn(int n, int e){
 	int p = 1;
 	
 	for (; e > 0; e--){
 		p *= n;
	}
	
	return p;
}

int printMenu(){
	int choice;
	
	cout << "1. calcolo fattoriale\n2. calcolo potenza\n3. esci" << endl;
	choice = inputInt("=> ");
	assert(choice == 1 || choice == 2 || choice == 3);
	
	system("cls");
	
	return choice;
}

void choice(int choice, bool &exit){
	if (choice == 1){
		cout << "il fattoriale e'" <<  factorial(inputInt("inserisci un numero: ")) << endl;
	}else if (choice == 2){
		cout << "il numero elevato a potenza e' " << expn(inputInt("inserisci un numero: "), inputInt("inserisci l' esponente: ")) << endl;
	}else if (choice == 3){
		exit = true;
	}
	
	system("sleep 2");
	system("cls");
}
