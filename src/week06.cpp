#include <iostream>
#include <random>
#include <vector>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

// int add (int a, int b){
//     int r;
//     r = a + b;
//     return r;
// }

// int sub (int a, int b, int* r){
//     *r = a - b;
// }

int main (){
    int n = 0;
    vector<int> data;
    default_random_engine en;
    uniform_int_distribution<> u {1, 10};

    for (int i = 10; i > 0; i--){
        data.push_back(u(en));
        }
    cout << endl;

    stringstream sout;

    for (int n : data){
        sout << setw(3) << n << ": " << string(n, 'X') << endl;
    }

    cout << sout.str();


    // normal_distribution<double> n {0.0, 1.0};

    // for (int i = 100; i > 0; i--){
    //     cout << n(en) << ", ";
    // }
    // cout << endl;

    // int* r = new int;

    // sub(12, 4, r);
    // cout <<  *r << endl;
    // delete r;
    // r = nullptr;

    // int n = 100;
    // int& m = n;

    // int* ptr = nullptr;

    // cout << n << endl;
    // cout << m << endl;

    // ptr = &n;

    // cout << ptr << endl;
    // cout << *ptr << endl;

    // cout << &n << endl;
    // cout << &m << endl;

    // double* dptr = new double;
    // *dptr = 3.14;
    // cout << *dptr << endl;

    // delete dptr;
    // dptr = nullptr;

    // int* ids = new int[1000];
    // for (int i = 0; i <= 1000; i++){
    //     ids[i] = i + 1;
    // }

    // cout << ids[2000] << endl;

    // for (int i = 0; i < 1000; i++){
    //     cout << ids[i] << ", ";
    //     if (i == 10){
    //         break;
    //     }
    // }

    // delete[] ids;



    return 0;
};