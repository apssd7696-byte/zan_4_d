#include <iostream>
#include <cmath>

int main() {
    double A_prev = 1.0;
    double A_curr = 10.0;
    int n = 2;

    do {
        double A_next = (A_curr + A_prev) / 2.0;
        A_prev = A_curr;
        A_curr = A_next;
        ++n;
    } while (n <= 16 && fabs(A_curr - 7.0) >= 1e-4);

    std::cout << "d) n = " << n << ", A_n = " << A_curr << std::endl;
    return 0;
}