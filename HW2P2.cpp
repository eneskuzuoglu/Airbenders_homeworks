#include <iostream>
#include <cmath>



 

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
  


