#include <stdio.h>
#include <math.h>

int main() {
        int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
        printf("located at index #%d\n", binsearch(7, numbers, 16));
}


int binsearch(int x, int v[], int n) {
        int low, high, mid;
        low = 0;
        high = n - 1;
        mid = (low+high)/2;
        while(low <= high && x != v[mid]) {
                mid = (low+high)/2;
                if (x < v[mid]) {
                        printf("smaller than: %d\n", mid);
                        high = mid + 1;
                } else {
                        printf("bigger than: %d\n", mid);
                        low = mid + 1;
                }
        }
        if(low > high) {
                return -1;
        } else {
                return mid;
        }
}
