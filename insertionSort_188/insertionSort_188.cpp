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