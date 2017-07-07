#include <stdio.h>
#include <string.h>

int main() {
    char line[BUFSIZ];
    char *pos;
    while(fgets(line, sizeof line, stdin) != NULL) {
        pos = strchr(line, '\n');
        if(pos == NULL) {
            fprintf(stderr, "Line length exceeded standard buffer size\n");
            break;
        } else {
            *pos = '\0';
        }
        printf("%s!\n", line);
    }

    return 0;
}
