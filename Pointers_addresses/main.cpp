#include <iostream>

using namespace std;

/**
 * Ebben a programban egy tömb memóriacímeit
 * fogom megmutatni.
 */
int main()
{
    /// Tömbelemek száma
    int N = 4;

    /// short típusú tömb - 2 byte elemenként
    short values2b[4] = {1, 2, 3, 4};

    /// int típusú tömb - 4 byte elemenként
    int values4b[4] = {1, 2, 3, 4};

    /// long long int típusú tömb - 8 byte elemenként
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
