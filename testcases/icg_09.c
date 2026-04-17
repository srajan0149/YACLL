/* ICG Test 09: Function with return */
int factorial(int n) {
    int result;
    result = 1;
    if (n > 1) {
        result = n * factorial(n - 1);
    }
    return result;
}
