#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, c, max;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	
	if(a>b)
		max = a;
	else
		max = b;
	if(c>max)
		max = c;
	
	cout << "max = " << max << "\n";

	return 0;
}
