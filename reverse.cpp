#include <iostream>

void reverse(int arr[], int size) {
  for (int i{0}; i < size / 2; i++) {
    std::swap(arr[i], arr[size - i - 1]);
  }
}

void recurReverse(int arr[], int size, int n) {
  if (n == size) {
    return;
  }

  int elem = arr[n];
  recurReverse(arr, size, n + 1);
  arr[size - n - 1] = elem;
}

void printArray(int arr[], int size) {
  for (int i{0}; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main() { 
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  std::cout << "Первый способ:" << std::endl;
  printArray(arr, size);
  reverse(arr, size);
  printArray(arr, size);
  
  std::cout << "Второй способ:" << std::endl;
  printArray(arr, size);
  recurReverse(arr, size, 0);
  printArray(arr, size);

  return EXIT_SUCCESS;
}
