#include <stdio.h>
#include <stdlib.h>

int n = 6;
int A[] = {1, 2, 3, 4, 5, 5};

bool hasNoDuplicates() {
    unsigned *arr = new unsigned[n] {};
    bool noDupes = true;
    for (int i = 0; i < n; i++) {
        int num = A[i] - 1;
        if (arr[num]) {
            noDupes = false;
            break;
        } else {
            arr[num] = 1;
        }
    }
    delete[] arr;
    return noDupes;
}

int main() {
    printf("has no duplicates: ");
    if (hasNoDuplicates()) {
        printf("true\n");
    } else {
        printf("false\n");
    }
}
