#include "stdafx.h"
#include <iostream>
using namespace std;
int fib(int n)
{
  if (n == 0)
      return 0;
   else if (n == 1)
      return 1;
   else 
      return fib(n-1) + fib(n-2);
}
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout << "Fn: "; 
	cin >> n;
	cout << "nF: " << fib(n) << "\n";
	return 0;
}
