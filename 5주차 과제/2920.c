#include <stdio.h>

int main() {
    int a[8];
    int ascending = 1;
    int descending = 1;
    //1부터 8까지 차례대로 연주한다면 ascending
    //8부터 1까지 차례대로 연주한다면 descending
    //둘 다 아니라면 mixed
    for (int i= 0; i < 8; i++) {
        scanf("%d\n", &a[i]);
    }
    // ascending 확인
    for (int i = 0; i < 7; i++) {
        if (a[i] > a[i + 1]) {
            ascending = 0;
            break;
        }
    }

    // descending 확인
    for (int i = 0; i < 7; i++) {
        if (a[i] < a[i + 1]) {
            descending = 0;
            break;
        }
    }
    if (ascending) {
        printf("ascending\n");
    }
    else if (descending) {
        printf("descending\n");
    }
    else {
        printf("mixed\n");
    }
    return 0;
}
