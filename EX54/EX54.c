#include <stdio.h>
#include <stdbool.h>

bool primo(int N) {
    int count = 2;
    while(count <= N / 2) {
        if(N % count == 0) {
            return false;
        }
        count++;
    }
    return true;
}

int main () {
    int N;
    scanf("%d", &N);
    if(primo(N)) {
        printf("PRIMO\n");
    } else {
        printf("NAO PRIMO\n");
    }
}