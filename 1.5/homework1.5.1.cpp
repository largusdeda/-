#include <iostream>

int main() { 
  int arr[] = {-773, 1, 10, 666, 1000000, 34, 9, 0, -3453, -1};

  bool isFirst = true;
  for (auto num : arr) {
    if (isFirst) {
      std::cout << num;
      isFirst = false;
    }
    std::cout << ", " << num;
  }

return EXIT_SUCCESS;
}