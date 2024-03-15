// Copyright 2021 NNTU-CS
int cbinsearch(int *arr, int size, int value) {
    int c = 0;
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] == value) {
            c++;
            int sleft = middle - 1;
            while (sleft >= 0 && arr[sleft] == value) {
                c++;
                sleft--;
            }
            int sright = middle + 1;
            while (sright < size && arr[sright] == value) {
                c++;
                sright++;
            }
            return c;
        }
        else if (arr[middle] > value) {
            right = middle - 1;
        }
        else {
        left = middle + 1;
        }
    }
  return 0;
}
