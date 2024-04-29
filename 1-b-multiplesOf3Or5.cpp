#include <iostream>

// second method: seperate the %

/* 
LINE OF THINKING:
In the previous method, we iterate through all numbers from 1 to 1000. That approach isn't necessary, 
as we know that we only need to go over the numbers that are divisible by 3 and 5. So here, we only 
iterate through the numbers which we know satisfy our requirements and skip out on the rest.

In the second for-loop of our solution function, we skip out the numbers that are divisible by both 5
and 3 in order to avoid duplicates in the two loops.
*/

int solution() {
    int count = 0;
    
    for (int i=3; i<1000; i+=3) {
        if (i%3==0) {
            count += i;
        }
    }
    
    for (int i=5; i<1000; i+=5) {
        if (i%3==0) continue;
        else if (i%5==0) count += i;
    }
    
    return count;
};


int main() {
    std::cout<< solution() << std::endl;
    return 0;
}
