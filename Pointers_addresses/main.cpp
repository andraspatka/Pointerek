#include <iostream>

using namespace std;

/**
 * Ebben a programban egy t�mb mem�riac�meit
 * fogom megmutatni.
 */
int main()
{
    /// T�mbelemek sz�ma
    int N = 4;

    /// short t�pus� t�mb - 2 byte elemenk�nt
    short values2b[4] = {1, 2, 3, 4};

    /// int t�pus� t�mb - 4 byte elemenk�nt
    int values4b[4] = {1, 2, 3, 4};

    /// long long int t�pus� t�mb - 8 byte elemenk�nt
    long long int values8b[4] = {1, 2, 3, 4};

    cout<<endl<<"Memoriacimek          (short): ";
    for (int i = 0; i < N; ++i) {
        ///
        cout<<values2b + i<<": "<<values2b[i]<<" ";
    }

    cout<<endl<<"Memoriacimek            (int): ";
    for (int i = 0; i < N; ++i) {
        cout<<values4b + i<<": "<<values4b[i]<<" ";
    }

    cout<<endl<<"Memoriacimek: (long long int): ";
    for (int i = 0; i < N; ++i) {
        cout<<values8b + i<<": "<<values8b[i]<<" ";
    }

    cout<<endl;
    return 0;
}
