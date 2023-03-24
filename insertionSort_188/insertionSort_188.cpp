#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true)
	{
		cout << "Masukkan Jumlah Data Pada Array : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << " Masukkan Element Array " << endl;
	cout << "======================" << endl;


	for (int i = 0; 1 < n; i++)
	{
		cout << "Data ke-" << (1 + 1) << ": ";
		cin >> arr[i];
	}
}

void insertionsort() {

	int temp;
	int j;

	for (int i = 1; i < n; i++) {

		temp = arr[i];

		j = i - 1;

		while (j >= 0 && arr[j] > temp)

		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = temp;

		cout << "\nPass " << 1 << ": ";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";
		}
	}

}

void display() {
	cout << endl;
	cout << "\n=============================" << endl;
	cout << " Element Array Telah Tersusun" << endl;
	cout << "===============================" << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << endl;
}

int main()
{
	input();
	insertionsort();
	display();
}