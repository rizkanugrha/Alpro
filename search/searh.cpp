#include <iostream>

using namespace std;

void Linear(int arr[], int size, int cari)
{
	int counter = 0;
	int hasil = 0;
	
	for(int i = 0; i < size; i++)
	{
		if(cari == arr[i])
		{
		counter++;
		hasil = i;
		if(hasil > 1)
		{
			cout <<", index ke-" << hasil << endl;
		}
		else 
		{
			cout << "ditemukan di index ke-" << hasil;
		}
		}
	
	}
	cout << "jumlah yang di temukan =" << counter << endl;
}

int main()
{
	int arr[10] = {1,5,5,3,6,7,9,10,9,1};
	
	Linear(arr, 10, 5);
	
	
	return 0;
}


