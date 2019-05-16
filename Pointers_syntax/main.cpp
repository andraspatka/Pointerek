#include <iostream>

//#define SYNTAX 1
//#define SIZE 2
//#define CASTING 3
//#define COMPARE 4

using namespace std;

/**
 * Ebben a programban a pointerekhez kötõdõ alap
 * szintaxist és mûködést szeretnék bemutatni.
 */
int main()
{
    #ifdef SYNTAX
    ///Alap szintaxis

    /// int típusú változó
    int value = 3;

    /// & operátor - megadja egy változó címét
    cout<< &value<<endl; /// kiírja a változó címét: pld. 0x6afefc

    /// int típusú pointer, jelenleg nem mutat "sehova"
    int * pointer;

    /// beállítjuk, hogy a "value" változó címére mutasson
    pointer = &value;

    cout<<pointer<<": "<<*pointer<<endl; /// cím: érték - pld. 0x6afefc: 3

    #endif // SYNTAX

    #ifdef SIZE
    /// Változók méretei

    /// short típusú változó
    short short_value;

    /// int típusú változó
    int int_value;

    /// long long int típusú változó
    long long int long_long_int_value;

    cout<<"Short merete         (byte): "<<sizeof(short_value)<<endl;
    cout<<"Int merete           (byte): "<<sizeof(int_value)<<endl;
    cout<<"Long long int merete (byte): "<<sizeof(long_long_int_value)<<endl;
    cout<<endl;

    /// short típusú pointer
    short * short_pointer;

    /// int típusú pointer
    int * int_pointer;

    /// long long int típusú pointer
    long long int * long_long_int_pointer;

    cout<<"Short * merete         (byte): "<<sizeof(short_pointer)<<endl;
    cout<<"Int * merete           (byte): "<<sizeof(int_pointer)<<endl;
    cout<<"Long long int * merete (byte): "<<sizeof(long_long_int_pointer)<<endl;

    #endif // SIZE


    #ifdef CASTING
    /// Cast-elés

    int value = 10;

    short * short_pointer;
    int * int_pointer;
    long long int * long_long_int_pointer;

    /// void típusú pointer
    void * void_pointer = &value;

    /// short típusú pointerre való cast-elés
    short_pointer = (short*) void_pointer;

    /// int típusú pointerre való cast-elés
    int_pointer = (int*) void_pointer;

    /// long long int típusú pointerre való cast-elés
    long_long_int_pointer = (long long int*) void_pointer;

    cout<<"sizeof(*short_pointer):         "<<sizeof(*short_pointer)<<endl;
    cout<<"sizeof(*int_pointer):           "<<sizeof(*int_pointer)<<endl;
    cout<<"sizeof(*long_long_int_pointer): "<<sizeof(*long_long_int_pointer)<<endl;

    #endif // CASTING

    #ifdef COMPARE
    /// Két pointer összehasonlítása
    int value = 17;
    int * p1 = &value, * p2 = &value;

    /// Mindkét pointer ugyanarra a memória címre mutat, tehát egyenlõek
    if (p1 == p2) {
        cout<<"Egyenlo a ket pointer! "<<p1<<" "<<p2;
    }
    cout<<endl<<endl;

    int value2 = 56;
    /// p2 mostmár más memória címre mutat, mint p1
    p2 = &value2;
    if (p1 != p2) {
        cout<<"Ezuttal nem egyenloek! "<<p1<<" "<<p2;
    }
    cout<<endl<<endl;

    /// A két pointerben levõ memoria cím szerinti összehasonlítás
    if (p1 > p2) {
        cout<<"Most p1 > p2 p1: "<<p1<<" p2: "<<p2;
    } else {
        cout<<"Most p2 > p1 p1: "<<p1<<" p2: "<<p2;
    }
    cout<<endl<<endl;

    /// A két pointer érték szerinti összehasonlítása
    if (*p1 > *p2) {
        cout<<"Most p1 > p2 p1: "<<*p1<<" p2: "<<*p2;
    } else {
        cout<<"Most p2 > p1 p1: "<<*p1<<" p2: "<<*p2;
    }
    cout<<endl<<endl;

    /// Két pointer különbsége
    cout<<"p1 - p2 = "<<p1 - p2<<endl;
    #endif // COMPARE

    return 0;
}
