#include <iostream>

// second method: seperate the %

int multiple() {
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
    std::cout<< multiple() << std::endl;
    return 0;
}
