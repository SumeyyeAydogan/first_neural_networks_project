#include "pch.h"
#include "Process.h" // Kendi başlık dosyanız
#include <climits> // INT_MAX sabiti için
#include <iostream>

int YPoint(int x, double* w, int carpan) {
    if (!w) {
        std::cerr << "Error: Weight vector is null.\n";
        return INT_MAX;
    }

    if (w[1] == 0) {
        std::cerr << "Warning: Division by zero avoided, w[1] is zero.\n";
        return INT_MAX;
    }

    double numerator = -1.0 * carpan * w[2] - w[0] * x;
    double denominator = w[1];
    return static_cast<int>(numerator / denominator);
}
