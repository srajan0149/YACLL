/* ICG Test 08: Nested if inside while */
int main() {
    int i, n, sum;
    sum = 0;
    i = 0;
    while (i < n) {
        if (i > 0) {
            sum = sum + i;
        }
        i = i + 1;
    }
}
