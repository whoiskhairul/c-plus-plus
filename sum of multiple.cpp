#include <iostream>
unsigned long long sum(unsigned long long x)
{
  return x * (x + 1) / 2;
}
int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned long long last;
    std::cin >> last;
    last--;
long long int    auto sumThree   =  3 * sum(last /  3);
long long int    auto sumFive    =  5 * sum(last /  5);
long long int    auto sumFifteen = 15 * sum(last / 15);
    std::cout << (sumThree + sumFive - sumFifteen) << std::endl;
  }
  return 0;
}
