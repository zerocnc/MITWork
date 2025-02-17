// find-max-crossing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>
#include <vector>

void Find_Max_Crossing_Subarray(int A[], int low, int mid, int high)
{
    int left_sum = std::numeric_limits<int>::min();
    int sum = 0;

    for (int i = mid; i < low; --i) 
    {
        sum = sum + A[i];

        if (sum > left_sum)
        {

        }
    }

}



int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
