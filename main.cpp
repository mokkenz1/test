#include <iostream>
#include "matrix.hpp"

int main()
{
  size_t M = 0, N = 0;
  std::cin >> M >> N; //вводим размеры матрицы
  if (std::cin.fail()) //проверяем корректность введенных данных
  {
    return 1;
  }
  int ** table = nullptr; //создаем указатель для матрицу
  try
  {
    table = createTable(M, N); //вызываем функцию для создания матрицы
  }
  catch(const std::bad_alloc &e)
  {
    std::cerr << "Not enough memory\n";
    return 2;
  }
  input(table, M, N); //вызываем функцию для иницилизации матрицы
  output(table, M, N); //вызываем функцию для вывода матрицы в консоль
  deleteTable(table, M); //освобождаем память
  return 0;
}
