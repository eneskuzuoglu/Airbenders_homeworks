#include <iostream>
#include <cmath>


  HW3 PROBLEM1
template <typename T>
T findSecondLargest(T arr[], int size) {
    if (size == 0) {
        throw std::invalid_argument("Array is empty.");
    }

    T largest = arr[0];
    T secondLargest = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}
  
  
  
  
  

  


