//476. Number Complement
int findComplement(int num) {
    int numOfBits = 1;
    uint32_t result = 0;
    int temp = num;
    if (temp) {
        while (((temp >> 1) != 0)) {
            numOfBits++;
            temp = temp >> 1;
        }
    }
    else {
        return 1;
    }
    result = ((~(0xffffffff << numOfBits)) & (~num));
    return result;
}
