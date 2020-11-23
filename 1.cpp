#include <iostream>

int comparison(int x, int y);

int main() {
    int x, y;
    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "Введите второе число: ";
    std::cin >> y;
    int result = comparison(x, y);
    std::cout << "Ответ: ";
    std::cout << result;
}

int comparison(int x, int y) {
    int result;
    if (x > y) {
      result = x;
    } else {
      result = y;
    }
    return result;
}
