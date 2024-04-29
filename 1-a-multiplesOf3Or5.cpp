exercise 1 approach 1

// first method: brute-force approach

int multiple() {
    int count = 0;
    
    for (int i=0; i<1000; i++) {
        if (i%3==0 || i%5==0) {
            count += i;
        }
    }
    
    return count;
};


int main() {
    std::cout<< multiple() << std::endl;
    return 0;
}
