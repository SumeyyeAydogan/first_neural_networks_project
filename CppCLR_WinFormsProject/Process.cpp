#include "pch.h"
#include "Process.h" // Kendi başlık dosyanız
#include <climits> // INT_MAX sabiti için

int YPoint(int x, double* w, int carpan) {
	if (w[1] == 0) return INT_MAX; // Bölme hatası önlenir
	return (int)((double)(-1 * (double)carpan * w[2] - w[0] * x) / (double)(w[1]));
};