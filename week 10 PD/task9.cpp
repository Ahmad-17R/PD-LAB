#include <iostream>
using namespace std;
int Specialnum(int arr[], int size);

main() {
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;
    int elements[size];
    cout << "Enter the elements of the array:"<<endl;
    for (int i = 0; i < size; ++i) {
        cin >> elements[i];
    }
    int result=Specialnum(elements, size);
    cout << "Special value: " <<result;
}
int Specialnum(int elements[], int size) {
    for (int x = 0; x <= size; ++x) {
        int count = 0;
        for (int i = 0; i < size; ++i) {
            if (elements[i] >= x) {
                count++;
            }
        }
        if (count == x) {
            return x;
        }
    }

    return -1;
}