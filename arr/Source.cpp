#include <iostream>
#include <ctime>
#include "Array.h"
using namespace std;

int main()
{
	srand(time(0));

	//Array ar(10);
	//ar.FillArrRandom();
	//ar.ShowArr();
	//cout << endl;
	//ar.SortArr();
	//ar.ShowArr();
	//Array ar2(ar);
	//ar.DeleteElementByIndex(2);
	//ar.DeleteElementByIndex(3);
	//ar.DeleteElementByIndex(4);
	//ar.DeleteElementByIndex(5);
	//cout << endl;
	//ar.ShowArr();
	//ar2.ShowArr();

	Array ar(10);
	ar.FillArrRandom();
	ar.ShowArr();
	cout << endl;
	cout << ar.GetavgValue() << endl;
	cout << ar.GetMin() << endl;
	cout << ar.GetMax() << endl;
	system("pause");
	return 0;
}