#include <iostream>

using namespace std;


/**
 * Egyszer� p�lda f�ggv�nypointerekre.
 * \param a - int t�pus� bemen� param�ter
 * \param b - int t�pus� bemen� param�ter
 * \param f - k�t int param�terrel rendelkez�,
 *            int visszat�r�t�si �rt�ket ad� f�ggv�nypointer
 * \return f(a, b)
 */
int foo(int a, int b, int (*f)(int, int)) {
    return f(a,b);
}
/**
 * �sszead�s f�ggv�ny
 * A 'foo' f�ggv�nyhez
 */
int add(int a, int b) {
    return a + b;
}

/**
 * Kivon�s f�ggv�ny
 * A 'foo' f�ggv�nyhez
 */
int subtract(int a, int b) {
    return a - b;
}

/**
 * Szorz�s f�ggv�ny
 * A 'foo' f�ggv�nyhez
 */
int multiply(int a, int b) {
    return a * b;
}

int main()
{
    int a = 15, b = 20;

    /// F�ggv�ny megh�v�sa, f�ggv�nypointer �tad�sa
    cout<<endl<<"add("<<a<<", "<<b<<"\) = "<<foo(a, b, add)<<endl;
    cout<<endl<<"subtract("<<a<<", "<<b<<"\) = "<<foo(a, b, subtract)<<endl;
    cout<<endl<<"multiply("<<a<<", "<<b<<"\) = "<<foo(a, b, multiply)<<endl;

    return 0;
}
