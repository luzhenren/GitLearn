#include <iostream>
using namespace std;

void sort(int* arr, int size) {
    for (int i  =0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    int arr[] = {5, ,4 ,3,2 ,1};
    int size = sizeof(arr)/sizeof(int);
    sort(arr, size);
    std::cout << "hello world" << std::endl;
}