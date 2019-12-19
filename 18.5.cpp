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
	
	int k = 0;
	bool flag = 1;

	for (int i = 0; i < n; i++)
	{
		if (k == 0)
		{
			for (int j = 0; j < m; j++)
			{
				if (matrix[j][i] % 2 == 0)
				{
					flag = 0;
				}
			}
			if (flag)
			{
				k = i+1;
			}
		}
		
	}

	if (flag)
	{
		cout << k << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	
	return 0;
}
