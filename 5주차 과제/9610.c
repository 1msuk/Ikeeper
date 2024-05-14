#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, AXIS = 0; 
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y); 

        if (x > 0 && y > 0) 
            Q1++;
        else if (x < 0 && y > 0) 
            Q2++;
        else if (x < 0 && y < 0) 
            Q3++;
        else if (x > 0 && y < 0) 
            Q4++;
        else //뭔지는 모르지만 그외의 경우로 나두어 보았다
            AXIS++;
    }
    printf("Q1: %d\n", Q1);
    printf("Q2: %d\n", Q2);
    printf("Q3: %d\n", Q3);
    printf("Q4: %d\n", Q4);
    printf("AXIS: %d\n", AXIS);

    return 0;
}
