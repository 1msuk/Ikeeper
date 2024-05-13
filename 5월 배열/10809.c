#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101];
    int index[26];

    memset(index, -1, sizeof(index));
    scanf("%s", &word);
    for (int i = 0; i < strlen(word); i++) 
    {
        int idx = word[i] - 'a';
        if (index[idx] == -1)
            index[idx] = i;
    }

    for (int i = 0; i < 26; i++)
        printf("%d ", index[i]);

    return 0;
}
