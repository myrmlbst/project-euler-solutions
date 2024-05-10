// exercise 1 approach 1
// first method: brute-force approach

int multiple() {
    int count = 0;

    /* 
    we iterate through every element from 0 to 1000 to check
    whether or not they are divisible by 3 & 5. If they are, 
    we increment the counter by 1.
    */
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
