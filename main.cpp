#include <iostream>

int main() {
  int n = 0;
  int answer = 0;
  std::cin >> n;
  int arr[n];

  for (size_t i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }
  for (size_t i = 0; i < n - 1; ++i) {
    if (arr[i] > arr[i + 1]) {
      answer = -1;
      break;
    }
  }
  if (answer == 0) {
    answer = arr[n - 1] - arr[0];
  }
  std::cout << answer;
  return 0;
}
