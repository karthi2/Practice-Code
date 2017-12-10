/*
 * Routine which return true/false depending on whether there exists 3
 * contiguous integers in the array whose sum is X
 */

bool contSum (int X, int *arr, int n) {
    int i = 0;
    if (n < 3) {
        return false;
    }

    /*
     * 1st method
     */
    int sum = 0;
    for (i = 0; ((i < n-3) && (i+2 < n)); i++) {
        sum = arr[i] + arr[i+1] + arr[i+2];
        if (sum == X) {
            return true;
        }
    }

    /*
     * 2nd method
     */
    int sum = arr[0] + arr[1] + arr[2];
    if (sum == X) {
        return true;
    }

    for (i = 3; i < n; i++) {
        sum = sum - arr[i - 2] + arr[i];
        if (sum == X) {
            return true;
        }
    }

    return false;
}
