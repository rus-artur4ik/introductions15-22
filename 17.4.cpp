#include <iostream>
#include <iterator>
#include <vector>
#include <math.h>

using namespace std;

class tochka {
public:
	bool determenition;  // положение точки
	int x;                // координата x
	int y;               // координата y
	float to_0;          // расстояние до нуля

	void chetvert() // четверть 2 или нет?
	{
		if ((x < 0) && (y > 0))
			determenition = true;
		else
			determenition = false;
	}

	void  rasstoianie()  // нахождения расстояния до нуля
	{
		to_0 = sqrt(x * x + y * y);
	}

	void vvod()                     // функция ввода значения координат
	{
		cin >> x;
		cin >> y;
		chetvert();
		if (determenition) rasstoianie();
		else
		{
			to_0 = 0;
			x = 0;
			y = 0;
		}
	}

	void vivod() // вывод точки
	{
		cout << "(" << x << "," << y << ")" << endl;
	}

	int getX()const
	{
		return this->x;
	}
};

int main()
{

	int n;
	cout << "Vvedite N" << endl;  // ввод количества точек
	cin >> n;

	vector<tochka> tjichka(n); //

	float max = 0;
	int index = 0;

	for (int i = 0; i < n; i++)  //
	{
		tjichka[i].vvod();
		if (tjichka[i].to_0 > max)
		{
			index = i;
			max = tjichka[i].to_0;
		}
	}

	tjichka[index].vivod();

	return 0;

}
