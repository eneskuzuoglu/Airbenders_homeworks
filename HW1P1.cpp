#include <iostream>
#include <cmath>



  int main(){
    int n,m;
    ;
    std::cout << "How many candies you have?\n";
    std::cin >> n;
    std::cout << "Non-standart boxes take how many candies?\n";
    std::cin >> m;

    std::cout << "if you use standart boxes, " << n / 9 << " boxes needed and " << n % 9 << " candy left ";
    std::cout << "if you use non-standart boxes, " << n / m << " boxes needed and " << n % m << " candy left ";
  }


  
  
  
  
  
  


