#include <iostream>

//#define SYNTAX 1
//#define SIZE 2
//#define CASTING 3
//#define COMPARE 4

using namespace std;

/**
 * Ebben a programban a pointerekhez k�t�d� alap
 * szintaxist �s m�k�d�st szeretn�k bemutatni.
 */
int main()
{
    #ifdef SYNTAX
    ///Alap szintaxis

    /// int t�pus� v�ltoz�
    int value = 3;

    /// & oper�tor - megadja egy v�ltoz� c�m�t
    cout<< &value<<endl; /// ki�rja a v�ltoz� c�m�t: pld. 0x6afefc

    /// int t�pus� pointer, jelenleg nem mutat "sehova"
    int * pointer;

    /// be�ll�tjuk, hogy a "value" v�ltoz� c�m�re mutasson
    pointer = &value;

    cout<<pointer<<": "<<*pointer<<endl; /// c�m: �rt�k - pld. 0x6afefc: 3

    #endif // SYNTAX

    #ifdef SIZE
    /// V�ltoz�k m�retei

    /// short t�pus� v�ltoz�
    short short_value;

    /// int t�pus� v�ltoz�
    int int_value;

    /// long long int t�pus� v�ltoz�
    long long int long_long_int_value;

    cout<<"Short merete         (byte): "<<sizeof(short_value)<<endl;
    cout<<"Int merete           (byte): "<<sizeof(int_value)<<endl;
    cout<<"Long long int merete (byte): "<<sizeof(long_long_int_value)<<endl;
    cout<<endl;

    /// short t�pus� pointer
    short * short_pointer;

    /// int t�pus� pointer
    int * int_pointer;

    /// long long int t�pus� pointer
    long long int * long_long_int_pointer;

    cout<<"Short * merete         (byte): "<<sizeof(short_pointer)<<endl;
    cout<<"Int * merete           (byte): "<<sizeof(int_pointer)<<endl;
    cout<<"Long long int * merete (byte): "<<sizeof(long_long_int_pointer)<<endl;

    #endif // SIZE


    #ifdef CASTING
    /// Cast-el�s

    int value = 10;

    short * short_pointer;
    int * int_pointer;
    long long int * long_long_int_pointer;

    /// void t�pus� pointer
    void * void_pointer = &value;

    /// short t�pus� pointerre val� cast-el�s
    short_pointer = (short*) void_pointer;

    /// int t�pus� pointerre val� cast-el�s
    int_pointer = (int*) void_pointer;

    /// long long int t�pus� pointerre val� cast-el�s
    long_long_int_pointer = (long long int*) void_pointer;

    cout<<"sizeof(*short_pointer):         "<<sizeof(*short_pointer)<<endl;
    cout<<"sizeof(*int_pointer):           "<<sizeof(*int_pointer)<<endl;
    cout<<"sizeof(*long_long_int_pointer): "<<sizeof(*long_long_int_pointer)<<endl;

    #endif // CASTING

    #ifdef COMPARE
    /// K�t pointer �sszehasonl�t�sa
    int value = 17;
    int * p1 = &value, * p2 = &value;

    /// Mindk�t pointer ugyanarra a mem�ria c�mre mutat, teh�t egyenl�ek
    if (p1 == p2) {
        cout<<"Egyenlo a ket pointer! "<<p1<<" "<<p2;
    }
    cout<<endl<<endl;

    int value2 = 56;
    /// p2 mostm�r m�s mem�ria c�mre mutat, mint p1
    p2 = &value2;
    if (p1 != p2) {
        cout<<"Ezuttal nem egyenloek! "<<p1<<" "<<p2;
    }
    cout<<endl<<endl;

    /// A k�t pointerben lev� memoria c�m szerinti �sszehasonl�t�s
    if (p1 > p2) {
        cout<<"Most p1 > p2 p1: "<<p1<<" p2: "<<p2;
    } else {
        cout<<"Most p2 > p1 p1: "<<p1<<" p2: "<<p2;
    }
    cout<<endl<<endl;

    /// A k�t pointer �rt�k szerinti �sszehasonl�t�sa
    if (*p1 > *p2) {
        cout<<"Most p1 > p2 p1: "<<*p1<<" p2: "<<*p2;
    } else {
        cout<<"Most p2 > p1 p1: "<<*p1<<" p2: "<<*p2;
    }
    cout<<endl<<endl;

    /// K�t pointer k�l�nbs�ge
    cout<<"p1 - p2 = "<<p1 - p2<<endl;
    #endif // COMPARE

    return 0;
}
