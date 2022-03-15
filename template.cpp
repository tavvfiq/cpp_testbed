#include <iostream>

template<typename T>
void Print(T value) {
  std::cout << value << std::endl;
}

int main() {
  Print("Hello World");
  std::cin.get();
}