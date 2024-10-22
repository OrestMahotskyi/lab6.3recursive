#include <iostream>
#include <iomanip>

using namespace std;

// Шаблонна рекурсивна функція для обміну елементів з парними та непарними індексами
void swapAdjacentElementsRecursive(int arr[], int size, int index = 1) {
    if (index >= size) return; // Базовий випадок
    swap(arr[index - 1], arr[index]); // Міняємо місцями елементи з індексами index-1 та index
    swapAdjacentElementsRecursive(arr, size, index + 2); // Рекурсивний виклик для наступної пари
}

// Шаблонна рекурсивна функція для генерації масиву
void generateArrayRecursive(int arr[], int size, int index = 0) {
    if (index == size) return; // Базовий випадок
    arr[index] = rand() % 100; // Генерація чисел від 0 до 99
    generateArrayRecursive(arr, size, index + 1); // Рекурсивний виклик для наступного елемента
}

// Шаблонна рекурсивна функція для виведення масиву
void printArrayRecursive(const int arr[], int size, int index = 0) {
    if (index == size) {
        cout << endl;
        return; // Базовий випадок
    }
    cout << setw(4) << arr[index];
    printArrayRecursive(arr, size, index + 1); // Рекурсивний виклик для наступного елемента
}

int main() {
    srand(time(0)); // Ініціалізація генератора випадкових чисел
    const int SIZE = 10;
    int arr[SIZE];

    // Генерація та виведення початкового масиву
    generateArrayRecursive(arr, SIZE);
    cout << "Initial array:" << endl;
    printArrayRecursive(arr, SIZE);

    // Міняємо місцями елементи з парними та непарними індексами
    swapAdjacentElementsRecursive(arr, SIZE);

    // Виведення модифікованого масиву
    cout << "Modified array:" << endl;
    printArrayRecursive(arr, SIZE);

    return 0;
}
