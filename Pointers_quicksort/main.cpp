#include <iostream>
#include <stdlib.h>

using namespace std;

/**
 * Összehasonlító függvény a qsort-hoz.
 * \param a - konstans pointer az elsõ számra
 * \param b - konstans pointer a második számra
 * \return -1, ha a < b
 *          1, ha a > b
 *          0, ha a == b
 */
int compare (const void * a, const void * b) {
  if ( *(int*)a <  *(int*)b ) return -1;
  if ( *(int*)a == *(int*)b ) return 0;
  if ( *(int*)a >  *(int*)b ) return 1;
}

/**
 * Egyszerûbb Összehasonlító függvény a qsort-hoz.
 * FIGYELEM: Csak olyan esetekben lehet használni,
 *           amelyekben a két összehasonlítandó
 *           érték egy szám.
 * \param a - konstans pointer az elsõ számra
 * \param b - konstans pointer a második számra
 * \return -1, ha a < b
 *          1, ha a > b
 *          0, ha a == b
 */
int comp (const void * a, const void * b) {
    return *(int*) a - *(int*) b;
}

/**
 * Ebben a programban a dinamikus helyfoglalást
 * és a qsort használatát szemléltetem.
 */
int main()
{
    /// Tömb mérete
    int N = 10;

    /// Dinamikus helyfoglalás - void* calloc (size_t num, size_t size);
    int * values = (int *) calloc(N, sizeof(int));
    if (values == NULL) {
        cout<<"Could not reserve memory for 'values' array";
        return -1;
    }

    /// Tömb feltöltése véletlenszerû elemekkel
    cout<<"Szamsorozat: ";
    for (int i = 0; i < N; ++i) {
        /// Véletlenszerû szám [0, 99] intervallumból
        /// Tömb elemeire való hivatkozás ugyanúgy történik,
        /// mint amikor statikusan foglalunk helyet
        values[i] = rand() % 100;
        cout<<values[i]<<" ";
    }
    cout<<endl<<endl;

    /**
    void qsort (void* base,
                size_t num,
                size_t size,
                int (*compar)(const void*,const void*));
    */
    qsort(values, N, sizeof(int), comp);

    cout<<"Rendezett szamsorozat: ";
    for (int i = 0; i < N; ++i) {
        cout<<*(values + i)<<" ";
    }
    cout<<endl;

    /// Memória felszabadítása
    free(values);
    return 0;
}
