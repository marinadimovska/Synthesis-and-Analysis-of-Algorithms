#include "stdafx.h"
#include <iostream>
using namespace std;
#define N 2
#define M 2
int _tmain(int argc, _TCHAR* argv[])
{
	int i, j, arr[N][M];
	
	for(i=0; i<N; i++)
		for(j=0; j<M; j++)
		{
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	
	for(i=0; i<N; i++)
		for(j=0; j<M; j++)
		{
			if((j>i) && (arr[i][j]%2!=0))
			{
				arr[i][j] = arr[i][j] + 1;
				arr[i][i] = 0;
			}
			if((i>j) && (arr[i][j]%2==0))
			{
				arr[i][j] = arr[i][j] - 1;
				arr[i][i] = 0;
			}
		}

	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
			cout << arr[i][j] << " ";;
		cout << "\n";
	}

	return 0;
}

