#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A_1 = 1.0;
    double A_2 = 10.0;
    int n = 2;
    do {
        double A_next = (A_2 + A_1) / 2.0;
        A_1 = A_2;
        A_2= A_next;
        ++n;
    } while (n <= 16 && fabs(A_2 - 7.0) >= 0.0001);

    cout << "d) n = " << n << ", A_n = " << A_2 << endl;
}
