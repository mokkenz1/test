#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <cstddef>
int** createTable(size_t m, size_t n);
void deleteTable(int** t, size_t m);
void input(int** t, size_t m, size_t n);
void output(const int * const * t, size_t m, size_t n);
#endif
