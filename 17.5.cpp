#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

class Point
{
private: int x, y;
public:
	Point()
	{
		this->x = 0;
		this->y = 0;
	}

	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	int getX() const
	{
		return x;
	}

	int getY() const
	{
		return y;
	}

	double getDistance() const
	{
		return sqrt(pow(x, 2) + pow(y, 2));
	}

	double getDistance(Point point) const
	{
		return sqrt(pow(this->x - point.getX(), 2) + pow(this->y - point.getY(), 2));
	}
};



void fillVector(vector<Point>* arr)
{
	int x, y;

	for (int i = 0; i < arr->size() - 1; i++)
	{
		cout << "\n" << i << "\ninput x: ";
		cin >> x;
		cout << "input y: ";
		cin >> y;
			
		arr->at(i) = Point(x, y);
	}
}

Point findFarthestPoint(vector<Point>* arr)
{
	double maxDistance = arr->at(0).getDistance();
	int index = 0;
	for (unsigned int i = 1; i < arr->size() - 1; i++)
	{
		if (maxDistance < arr->at(i).getDistance())
		{
			maxDistance = arr->at(i).getDistance();
			index = i;
		}
	}

	Point p(arr->at(index).getX(), arr->at(index).getY());
	arr->erase(arr->begin() + index);
	return p;
}

Point findFarthestPoint(vector<Point>* arr, Point point)
{
	double maxDistance = arr->at(0).getDistance(point);
	int index = 0;
	for (unsigned int i = 1; i < arr->size() - 1; i++)
	{
		if (maxDistance < arr->at(i).getDistance(point))
		{
			maxDistance = arr->at(i).getDistance(point);
			index = i;
		}
	}

	Point p(arr->at(index).getX(), arr->at(index).getY());
	arr->erase(arr->begin() + index);
	return p;
}

int findBiggestPerimeterTriangle(vector<Point>* arr, Point p_first, Point p_second)
{
	double maxPerimeter = p_first.getDistance(arr->at(0)) + p_second.getDistance(arr->at(0));
	int index = 0;
	for (unsigned int i = 1; i < arr->size() - 1; i++)
	{
		if (maxPerimeter < p_first.getDistance(arr->at(i)) + p_second.getDistance(arr->at(i)))
		{
			maxPerimeter = p_first.getDistance(arr->at(i)) + p_second.getDistance(arr->at(i));
			index = i;
		}
	}

	return index;
}

int main()
{
	int N;
	cout << "input number of points: ";
	cin >> N;
	if (N < 2) return 0;

	vector<Point> Points(N);

	fillVector(&Points);

	Point pointFirst = findFarthestPoint(&Points);
	Point pointSecond = findFarthestPoint(&Points, pointFirst);
	int pointThirdIndex = findBiggestPerimeterTriangle(&Points, pointFirst, pointSecond);

	cout << "\ncoordinates of 1st point is: X:" << pointFirst.getX() << " Y: " << pointFirst.getY();
	cout << "\ncoordinates of 2nd point is: X:" << pointSecond.getX() << " Y: " << pointSecond.getY();
	cout << "\ncoordinates of 3rd point is: X:" << Points.at(pointThirdIndex).getX() << " Y: " << Points.at(pointThirdIndex).getY();
}
