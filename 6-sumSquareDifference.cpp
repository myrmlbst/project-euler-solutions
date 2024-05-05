#include <iostream>
#include <cmath>

int sumOfSquares(int num) {
    int sum = 0;
    for (int i=1; i<=num; i++) {
        sum += (i*i);
    }
    return sum;
}

int squareOfSums(int num) {
    int sum = 0;
    for (int i=1; i<=num; i++) {
        sum += i;
    }
    return sum*sum;
}

int main() {
    int det = 100; // determinant integer
    std::cout << "The sum of the squares of " << det << 
                " is: " << sumOfSquares(det) << std::endl <<
                "The square of the sum of " << det <<
                " is: " << squareOfSums(det) << std::endl;
  
    int difference = abs(sumOfSquares(det) - squareOfSums(det));            
    std::cout << "\nThe difference is: \n" << squareOfSums(det) << " - " << sumOfSquares(det) << " = " << difference; 
    
    return 0;
}
