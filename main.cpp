#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;
  int arr[n];
  std::cin >> arr[0];
  for (size_t i = 1; i < n; ++i) {
    std::cin >> arr[i];
    if (arr[i-1] > arr[i]) {
      std::cout << -1;
      return 0;
    }
  }
  std::cout << arr[n - 1] - arr[0];
  return 0;
}
