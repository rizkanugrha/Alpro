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



#include <iostream>

using namespace std;

void tampil(int arr[], int length)

{

    for (int i = 0; i < length; i++)

    {

        cout << arr[i] << "\t";

    }

}

int *insertionSort(int arr[], int length)

{

    for (int i = 1; i < length; i++)

    {

        int current = arr[i];

        int j = i - 1;

        while (j >= 0 && arr[j] > current)

        {

            arr[j + 1] = arr[j];

            j--;

        }

        arr[j + 1] = current;

    }

    return arr;

}

int binarySearch(int arr[], int length, int searchKey)

{

    int left = 0;

    int right = length - 1;

    int middle = 0;

    int j = 0;

    while (left <= right)

    {

        middle = (left + right) / 2;

        if (arr[middle] == searchKey)

        {

            return middle;

        }

        else if (searchKey < arr[middle])

        {

            right = middle - 1;

        }

        else

        {

            left = middle + 1;

        }

    }

    return -1;

}

int main()

{

    int arr[] = {34, 67, 23, 28, 98, 15, 98, 67, 28, 23, 98};

    int length = sizeof(arr) / sizeof(int);

    int *hasilSorting = insertionSort(arr, length);

    tampil(hasilSorting, length);

    // binary search

    int idx[length];

    int hasil = binarySearch(hasilSorting, length, 23);

    int search = 0;

    // cout << "\nindexnya = " << hasil;

    cout << "\nindeksnya = " << hasil << endl;

    cout << "semua indeks : ";

    while (hasil >= (length / 2))

    {

        if (hasilSorting[hasil] == 23)

        {

            cout << hasil << "\t";

            hasil++;

        }

    }

    return 0;

}// anu

