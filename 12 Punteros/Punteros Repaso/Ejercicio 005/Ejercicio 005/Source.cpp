#include<iostream>
#include<stdlib.h>

/*
	Ejericico 5. Pedir un arry dinamico y ordenarlo ascendemente
	new, delete
*/


using namespace std;

//varibles globales
int* arr, can;

//prototipos de funciones
void pedirDatos();
void bubbleSort(int*, int);
void insertionSort1(int*, int);
void insertionSort2(int*, int);
void selectionSort(int*, int);
void mostrarArr(int*, int);

int main() {
	int op;
	
	do {
		cout << "1. Rellenar arr" << endl;
		cout << "2. Bubble sort" << endl;
		cout << "3. Insertion sort1" << endl;
		cout << "4. Insertion sort2" << endl;
		cout << "5. Selection sort" << endl;
		cout << "6. Mostrar arr" << endl;
		cout << "7. borrar arr" << endl;
		cout << "8. Salir" << endl;
		cout << "Escogue una opcion: ";
		cin >> op;

		if (op == 1) {
			pedirDatos();
		}
		else if (op == 2) {
			bubbleSort(arr, can);
		}
		else if (op == 3) {
			insertionSort1(arr, can);
		}
		else if (op == 4) {
			insertionSort2(arr, can);
		}

		else if (op == 5) {
			selectionSort(arr, can);
		}
		else if (op == 6) {
			mostrarArr(arr, can);
		}
		else if (op == 7) {
			delete[] arr;
		}
		




		system("pause");
		system("cls");

	} while (op != 8);

	system("pause");
	return 0;
}


//funciones
void pedirDatos() {
	cout << "Dame la cantidad de elemntos: "; cin >> can;
	arr = new int[can];
	
	for (int i = 0; i < can; i++) {
		cout << "Dame el valor de [" << i << "]: ";
		cin >> *(arr + i);
	}
}
void bubbleSort(int* arr, int can) {
	int aux;

	for (int i = 1; i < can; i++) {
		for (int j = 0; j < can - i; j++) {
			if (*(arr + j) > *(arr + j + 1)) {
				aux = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = aux;
			}
		}
	}
}
void insertionSort1(int* arr, int can) {
	int dato,postA;
	for (int i = 1; i < can; i++) {
		dato = *(arr + i);
		postA = i;

		while (postA>0&&*(arr+postA-1)>dato)
		{
			*(arr + postA) = *(arr + postA - 1);
			postA--;
		}
		*(arr + postA) = dato;
	}
}
void insertionSort2(int* arr, int can) {
	int aux, postA;
	for (int i = 1; i < can; i++) {
		postA = i;

		while (postA>0&&*(arr+postA-1)>*(arr+postA))
		{
			aux = *(arr + postA-1);
			*(arr + postA - 1) = *(arr + postA);
			*(arr + postA) = aux;

			postA--;
		}
	}
}
void selectionSort(int* arr, int can) {
	int iMin;
	for (int i = 0; i < can; i++) {
		iMin = i;
		for (int j = i+1; j < can; j++)
		{
			if (*(arr + j) < *(arr + iMin)) {
				iMin = j;
			}
		}

		int aux = *(arr + i);
		*(arr + i) = *(arr + iMin);
		*(arr + iMin) = aux;
	}
}
void mostrarArr(int* arr, int can) {
	for (int i = 0; i < can; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
}