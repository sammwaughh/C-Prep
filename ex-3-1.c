#include <stdio.h>

int oldBinSearch(int x, int v[], int n);
int binsearch(int x, int v[], int n);

int main() {
    int n = 6;
    int v[6] = {1, 3, 7, 11, 20, 100};
    printf("%d %d\n", oldBinSearch(20, v, n), binsearch(20, v, n));
    return 0;
}

int binsearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high) / 2;
        if (x < v[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        } 
    }
    if (x == v[high]) {
        return high;
    } else if (x == v[mid]) {
        return mid;
    } else if (x == v[low]){
        return low;
    } else {
        return -1;
    }
}

int oldBinSearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high) / 2;
        if (x < v[mid]) {
            high = mid - 1;
        } else if (x > v[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

