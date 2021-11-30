void arange(int arr[], int lo, int hi, int step = 1) {
    for (int i{ 0 }; i < (hi - lo + 1); i += step)
        arr[i] = i + lo;
}
