#include <iostream>
#include <stdlib.h>

using namespace std;

/**
 * �sszehasonl�t� f�ggv�ny a qsort-hoz.
 * \param a - konstans pointer az els� sz�mra
 * \param b - konstans pointer a m�sodik sz�mra
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
 * Egyszer�bb �sszehasonl�t� f�ggv�ny a qsort-hoz.
 * FIGYELEM: Csak olyan esetekben lehet haszn�lni,
 *           amelyekben a k�t �sszehasonl�tand�
 *           �rt�k egy sz�m.
 * \param a - konstans pointer az els� sz�mra
 * \param b - konstans pointer a m�sodik sz�mra
 * \return -1, ha a < b
 *          1, ha a > b
 *          0, ha a == b
 */
int comp (const void * a, const void * b) {
    return *(int*) a - *(int*) b;
}

/**
 * Ebben a programban a dinamikus helyfoglal�st
 * �s a qsort haszn�lat�t szeml�ltetem.
 */
int main()
{
    /// T�mb m�rete
    int N = 10;

    /// Dinamikus helyfoglal�s - void* calloc (size_t num, size_t size);
    int * values = (int *) calloc(N, sizeof(int));
    if (values == NULL) {
        cout<<"Could not reserve memory for 'values' array";
        return -1;
    }

    /// T�mb felt�lt�se v�letlenszer� elemekkel
    cout<<"Szamsorozat: ";
    for (int i = 0; i < N; ++i) {
        /// V�letlenszer� sz�m [0, 99] intervallumb�l
        /// T�mb elemeire val� hivatkoz�s ugyan�gy t�rt�nik,
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

    /// Mem�ria felszabad�t�sa
    free(values);
    return 0;
}
