#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;

  int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int i = 2;

  if (a[i] == i[a])
  {
    std::cout << "a[i] == i[a]" << std::endl;
  }
  else
  {
    std::cout << "a[i] != i[a]" << std::endl;
  }
  /*
   * https://www.geeksforgeeks.org/ai-ia-cc-arrays/
   * The definition of [] subscript operator operator in C, according to (C99, 6.5.2.1p2), is that
   *  E1[E2] is identical to (*((E1)+(E2)))
   */

  return 0;
}
