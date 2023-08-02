#include <iostream>
#include <cmath>



  int main(){
  
    int a,b,c;
   
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
    
  }
     
  
  
  
  */
  


