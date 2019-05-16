#include <iostream>

using namespace std;


/**
 * Egyszerû példa függvénypointerekre.
 * \param a - int típusú bemenõ paraméter
 * \param b - int típusú bemenõ paraméter
 * \param f - két int paraméterrel rendelkezõ,
 *            int visszatérítési értéket adó függvénypointer
 * \return f(a, b)
 */
int foo(int a, int b, int (*f)(int, int)) {
    return f(a,b);
}
/**
 * Összeadás függvény
 * A 'foo' függvényhez
 */
int add(int a, int b) {
    return a + b;
}

/**
 * Kivonás függvény
 * A 'foo' függvényhez
 */
int subtract(int a, int b) {
    return a - b;
}

/**
 * Szorzás függvény
 * A 'foo' függvényhez
 */
int multiply(int a, int b) {
    return a * b;
}

int main()
{
    int a = 15, b = 20;

    /// Függvény meghívása, függvénypointer átadása
    cout<<endl<<"add("<<a<<", "<<b<<"\) = "<<foo(a, b, add)<<endl;
    cout<<endl<<"subtract("<<a<<", "<<b<<"\) = "<<foo(a, b, subtract)<<endl;
    cout<<endl<<"multiply("<<a<<", "<<b<<"\) = "<<foo(a, b, multiply)<<endl;

    return 0;
}
