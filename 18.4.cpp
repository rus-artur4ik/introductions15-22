#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
	cout << "Vvedite razmer matrici" << endl;
	int m, n;
	cin >> m >> n;

	vector < vector <int> > matrix(m, vector <int>(n));

	cout << "Vvedite matrix" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	int srednee = 0;
	vector<int> kolvo(n);
	for (int j = 0; j < n; j++)
	{
		kolvo[j] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			srednee += matrix[j][i];
		}
		srednee /= m;

		for (int j = 0; j < m; j++)
		{
			if (matrix[j][i] < srednee)
			{
				kolvo[i]++;
			}
		}

		srednee = 0;
		
	}

	for (int j = 0; j < n; j++)
	{
		cout << j << " = " << kolvo[j] << endl;
	}
	
	return 0;

}
