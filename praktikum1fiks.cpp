// praktikum1fiks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada Array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "===============" << endl;
	cout << "masukan Elemen Array" << endl;
	cout << "===============" << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke - " << (i + 1) << ":";
		cin >> arr[i];
	}
}

void bubbleSortArray() { //prosedur untuk mengurutkan array dengan metode bubble sort
	int pass = 1; //step 1
	do {
		for (int j = 0; j <= n - 1 - pass; j++) { //step 2
			if (arr[j] > arr[j + 1]) {//step 3
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
		pass = pass + 1; //step 4
	} while (pass <= n); //step 5

}