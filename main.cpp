#include <iostream>
#include <ctime>
using namespace std;

int S_U_M(int arr[], int sum, int ten_size, int arr_sum[], int begin);

int main() {
	srand(time(0));
	const int size = 100;
	int sum = 0;
	const int sum_size = 100;
	int counter = 0;
	int begin = 0;
	int ten_size = 10;
	int arr[size]{};
	int arr_sum[size]{};
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 1000;
		cout << arr[i] << ' ';
	}
	S_U_M(arr, sum, ten_size, arr_sum, begin);
	
}

int S_U_M(int arr[], int sum, int ten_size, int arr_sum[], int begin) {
	for (begin; begin < ten_size; begin++)
	{
		sum += arr[begin];
		arr_sum[begin] = sum;
		if (begin == 9)
		{
			cout << "\nArr_sum = " << arr_sum[begin];
			
		}
	}
	/*arr_sum[0] = sum;*/
	/*cout << "\nRes = " << sum;*/
	/*cout << "\nArr_sum = " << arr_sum[0];*/
	return 0;
}