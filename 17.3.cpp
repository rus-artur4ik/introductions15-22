#include <iostream>
#include <iterator>
#include <vector>
#include <list>

using namespace std;

int main()
{

	int k;
	cout << "Vvedite K" << endl; // номер K-ой серии
	cin >> k;

	int n;
	cout << "Vvedite N" << endl; // количество элементов массива
	cin >> n;

	cout << "Vvedite massiv" << endl;
	vector<float> arr(n); // общий массив
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	list<float> arr_before_k; // массив элементов до серии K
	
	list<float> arr_k; // массив элементов серии K
	
	list<float> arr_after_k; // массив элеметов после серии K
	
	list<float> arr_last; // массив элементов последней серии


	int counter = 1; // счётчик серий

	int counter_last = 1; // номер последней серии

	for (int i = 1; i < n; i++) // подсчёт номера последней серии
	{
		if (arr[i] != arr[i - 1])
		{
			counter_last++;
		}
	}

	for (int i = 0; i < n-1; i++)  // заполнение всех массивов
	{
		if (counter < k)
		{
			arr_before_k.push_back(arr[i]); // заполнение до К-ой серии
		}

		if (counter == k)
		{
			arr_k.push_back(arr[i]); // заполнение К-ой серии
		}

		if ((counter > k) && (counter != counter_last))
		{
			arr_after_k.push_back(arr[i]); // заполнение серии после К-ой, но перед последней
		}

		if (counter == counter_last)
		{
			arr_last.push_back(arr[i]); // заполнение последней серии
		}

		if (arr[i] != arr[i + 1])
		{
			counter++;
		}
	}

	arr_last.push_back(arr[n-1]);

	copy(arr_before_k.begin(), arr_before_k.end(), ostream_iterator<float>(cout, " "));

	copy(arr_last.begin(), arr_last.end(), ostream_iterator<float>(cout, " "));

	copy(arr_after_k.begin(), arr_after_k.end(), ostream_iterator<float>(cout, " "));
	
	copy(arr_k.begin(), arr_k.end(), ostream_iterator<float>(cout, " "));
	
	return 0;
	
}
