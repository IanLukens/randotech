#include <iostream>
#include <vector>

int
main ()
{
  std::vector<int> v;
  for (int i : {5, 4, 3, 2, 1})
  {
    v.push_back (i);
  }

int x = 5;
int y = 1;
if (x > y) {
  cout << "So much for Docker working";
}

  for (auto val : v)
  {
    std::cout << val << ' ';
  }
  std::cout << "\nHello, World!" << std::endl;

  return 0;
}
