#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int freq[256] = {0};
        int length = 0;

        for (int j = i; j < n; j++) {
            if (freq[(unsigned char)s[j]] == 1)
                break;

            freq[(unsigned char)s[j]] = 1;
            length++;

            if (length > maxLen)
                maxLen = length;
        }
    }

    printf("%d", maxLen);
    return 0;
}
