#include "stdafx.h"
#include <iostream>
using namespace std;
#define N 3
#define M 3

int _tmain(int argc, _TCHAR* argv[])
{
	int i, j, arr[N][M], k=0;
	
	for(i=0; i<N; i++)
		for(j=0; j<M; j++)
		{
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	
	for(i=0; i<N-1; i++)
		for(j=i+1; j<M; j++)
			if(arr[i][j] < arr[j][i])
				k++;
	
	cout << "k = " << k << "\n";

	return 0;
}

