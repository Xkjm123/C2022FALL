//https://www.acwing.com/blog/content/27620/
void reOrderArray(int* array, int length) {
    int a[100];
    int j = 0, z = 0, i;
    for (i = 0; i < length; i++) {
        if (array[i] % 2 == 1)//odd
            a[j++] = array[i];
    }
    for (i = 0; i < length; i++) {
        if (array[i] % 2 == 0)//even
            a[j++] = array[i];
    }
    for (i = 0; i < length; i++) {
        array[i] = a[i];
    }
}
