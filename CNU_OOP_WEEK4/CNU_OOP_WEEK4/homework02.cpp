#include<iostream>

void swap(int& first, int& second) {//기존 매개변수와 다르게 Reference변수로 선언.
    int temp = first;
    first = second;
    second = temp;
}

int main() {
    int a = 2, b = 3;
    swap(a, b);

    std::cout << a << " " << b << std::endl;
    return 0;
}