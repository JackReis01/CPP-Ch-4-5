#include <iostream>
#include <string>
using namespace std;

double perimeter(int Hei, int Bas, int c)
{
	double perim;
	perim = Hei + Bas + c;

	return perim;
}
double areaF(int Hei, int Bas)
{
	double area;
	area = 0.5 * (Hei * Bas);

	return area;
}
double pythag(int Hei, int Bas)
{
	double c;

	c = 0.5 * ((Hei * Hei) + (Bas * Bas));
	return c;
}
int main()
{
	string Tri;
	int a, b;
	double c, perim, area;
	cout << "What kind of triangle is it? (Right, Iso, Equal)" << endl;
	cin >> Tri;
	cout << "Please input side A (The base)." << endl;
	cin >> a;
	cout << "Please input side B.(One of the sides)" << endl;
	cin >> b;
	if (Tri == "Equal" || Tri == "equal")
	{
		c = pythag(a,b);
		perim = perimeter(a,b,c);
		area = areaF(a,b);

			cout << "Side c is " << c << ". The area is " << area << ". The perimeter is " << perim << "." << endl;
	}
	if (Tri == "Iso" || Tri == "iso")
	{
		c = pythag(a, b);
		perim = perimeter(a, b, c);
		area = areaF(a, b);

		cout << "Side c is " << c << ". The area is " << area << ". The perimeter is " << perim << "." << endl;
	}
	if (Tri == "Right" || Tri == "right")
	{
		c = pythag(a, b);
		perim = perimeter(a, b, c);
		area = areaF(a, b);
		
		cout << "Side c is " << c << ". The area is " << area << ". The perimeter is " << perim << "." << endl;
	}




	system("pause");
	return 0;
}