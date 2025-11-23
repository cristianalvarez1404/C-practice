
int increment() {
    static int count = 3;
    count = count + 1;
    return count;
}