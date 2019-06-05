#include "pch.h"

#include <iostream>
#include <limits>
#include <cstdlib>
#include <cmath>
#include <ctime>


void MergeSort(int A[], int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;

	int * L = new int[n1 + 1];
	int * R = new int[n2 + 1];

	for (int ndx = 0; ndx < n1; ndx++)
		L[ndx] = A[p + ndx];

	for (int ndx = 0; ndx < n2; ndx++)
		R[ndx] = A[q + ndx + 1];

	L[n1] = INT_MAX;
	R[n2] = INT_MAX;

	int i, j, k;
	i = 0;
	j = 0;

	for ( k = p; k <= r; k++)
	{
		if (L[i] <= R[j])
		{
			A[k] = L[i];
			i++;
		}
		else 
		{
			A[k] = R[j];
			j++;
		}
	}

	delete[] L;
	delete[] R;

	return;
}

void PreSort(int A[], int p, int r)
{
	if (p < r)
	{
		int q = int((p + r) / 2);
		PreSort(A, p, q);
		PreSort(A, q + 1, r);
		MergeSort(A, p, q, r);
	}
}

int main()
{
	int *A = nullptr;
	A = new int[10];

	srand(time(NULL));
	
	for (int ndx = 0; ndx < 10; ndx++)
		A[ndx] = rand() % 100 + 1;

	std::cout << "Array Before: ";
	for (int ndx = 0; ndx < 10; ndx++)
		std::cout << A[ndx] << ", ";

	PreSort(A, 0, 9);

	std::cout << std::endl;

	std::cout << "Array After: ";
	for (int ndx = 0; ndx < 10; ndx++)
		std::cout << A[ndx] << ", ";

	std::cin.ignore(1000, '\n');
	std::cin.get();

	delete[] A;

	return 0;
}