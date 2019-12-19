#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
	cout << "Vvedite razmer matrici" << endl;
	int a;
	cin >> a;

	vector < vector <int> > matrix(a, vector <int>(a));

	cout << "Vvedite matrix" << endl;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cin >> matrix[i][j];
		}
	}

	int i = 0;
	int j = 0;

	while (a > 1)
	{
		for (j; j < a-1; j++)
		{
			if (matrix[j][i] != -439071) {
				cout << matrix[j][i] << " ";
				matrix[j][i] = -439071;
			}
		}

		for (i; i < a-1; i++)
		{
			if (matrix[j][i] != -439071) 
		{
			cout << matrix[j][i] << " ";
			matrix[j][i] = -439071;
		}
		}

		for (j; j > 0; j--)
		{
			if (matrix[j][i] != -439071) 
		{
			cout << matrix[j][i] << " ";
			matrix[j][i] = -439071;
		}
		}

		a--;

		for (i; i > 0; i--)
		{
			if (matrix[j][i] != -439071) 
		{
			cout << matrix[j][i] << " ";
			matrix[j][i] = -439071;
		}
		}
	}

	return 0;

}
