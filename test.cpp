#include <iostream>
#include <cmath>



  /*
    HW1 PROBLEM1
    int n,m;
    ;
    std::cout << "How many candies you have?\n";
    std::cin >> n;
    std::cout << "Non-standart boxes take how many candies?\n";
    std::cin >> m;

    std::cout << "if you use standart boxes, " << n / 9 << " boxes needed and " << n % 9 << " candy left ";
    std::cout << "if you use non-standart boxes, " << n / m << " boxes needed and " << n % m << " candy left ";
    */
  /*
    int a,b,c;
    HW1 PROBLEM2
    std::cout << "Lenght of the first side: ";
    std::cin >> a;
    std::cout << "Lenght of the second side: ";
    std::cin >> b;
    std::cout << "Lenght of the third side: ";
    std::cin >> c;
    float s; // half of perimeter
    double cost; //constant cost of the tile per area
    cost = 0.8;
    s = (a + b + c) / 2;
    std::cout << "the cost of the triangle tile is " << sqrt(s*(s - a)*(s - b)*(s - c)); // area * cost per area
    */
  /*
HW2 PROBLEM2 
#include <iostream>
#include <cctype>


bool isPalindrome(const std::string& str) {
    std::string cleanedStr;

    // Remove non-alphanumeric characters and convert to lowercase
    for (char c : str) {
        if (isalnum(c)) {
            cleanedStr += tolower(c);
        }
    }

    int n = cleanedStr.length();
    for (int i = 0; i < n / 2; i++) {
        if (cleanedStr[i] != cleanedStr[n - i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string input;
    char choice;

    do {
        std::cout << "Enter a string: ";
        std::cin >> input;

        if (isPalindrome(input)) {
            std::cout << "It's a palindrome!" << std::endl;
        } else {
            std::cout << "It's not a palindrome." << std::endl;
        }

        std::cout << "Do you want to check another string? (y/n): ";
        std::cin >> choice;
        std::cin.ignore();  // To ignore the newline character left in the input buffer

    } while (choice == 'y' || choice == 'Y');

    return 0;
}




*/
  /*
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
  
  
  
  
  
  */
  


