// SumOfSequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int i, n, r, result=0;
    /*
    cout << " \n Please enter an integer value for n \t";
    cin >> n;
    for (i = 0; i < n; i++) {
        result += n * (n - i);
    }
    cout << "The sum of the sequence is \t" << result;
    */

    //ncr calculation
    cout << "\n Enter the value for n and r \t";
    cin >> n >> r;

    //finding n!
    int nfact = 1;
    for (i = 1; i <= n; i++) {
        nfact *= i;
    }
    int rfact = 1;
    for (i = 1; i <= r; i++) {
        rfact *= i;
    }
    int nrfact = 1;
    for (i = 1; i <= (n-r); i++) {
        nrfact *= i;
    }
    result = nfact / (rfact * nrfact);
    cout << "\n ncr = \t" << result;
}

