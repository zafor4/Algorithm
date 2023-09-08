#include <stdio.h>
int linear_search(int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    int a[] = { 3, 4, 5,1,2 ,6};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 4;

    if (linear_search(a, n, key) == 0) {
        printf("%d is Found in array\n",key);
    } else {
        printf("Not found\n");
    }

    return 0;
}
