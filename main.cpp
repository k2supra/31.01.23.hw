#include <iostream>
#include <ctime>
using namespace std;

int S_U_M(int arr[], int sum, int ten_size);

int main() {
	srand(time(0));
	const int size = 100;
	int sum = 0;
	int ten_size = 10;
	int arr[size]{};
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 1000;
	}
	S_U_M(arr, sum, ten_size);
}

int S_U_M(int arr[], int sum, int ten_size) {
	for (size_t i = 0; i < ten_size; i++)
	{
		/*cout << "Num=" << arr[i];*/
		sum += arr[i];
		/*cout << "Res = " << sum;*/
	}
	cout << "Res = " << sum;
	/*sum += 15;
	cout << "hello!" << sum;*/
	return 0;
}