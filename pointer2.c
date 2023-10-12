# include <stdio.h>

int main() {
    int staticArray[5] = {}; // Static array with size 5

    // Attempt to increase the size (Not possible)
    staticArray[150];
    int i;
    for(i=0; i<150; i++){
        staticArray[i]=i+1;
        printf("%d ", staticArray[i]);
    }

    return 0;
}
