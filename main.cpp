#include <iostream>
#include "matrix.hpp"

int main()
{
  size_t M = 0, N = 0;
  std::cin >> M >> N;
  if (std::cin.fail())
  {
    return 1;
  }
  int ** table = nullptr;
  try
  {
    table = createTable(M, N);
  }
  catch(const std::bad_alloc &e)
  {
    std::cerr << "Not enough memory\n";
    return 2;
  }
}
