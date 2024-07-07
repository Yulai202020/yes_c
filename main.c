#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char* message = "";

    if (argc == 1) {
        message = "y";
    } else if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            char addiction;

            if (i + 1 == argc) {
                addiction = '\0';
            } else {
                addiction = ' ';
            }

            char* tmp = argv[i];

            size_t source_len = strlen(tmp);
            char* tmp2 = (char*) malloc(source_len+1);
            strcpy(tmp2, tmp);

            tmp2[source_len] = addiction;
            tmp2[source_len+1] = '\0';

            size_t tmp2_len = strlen(tmp2);
            size_t message_len = strlen(message);
            size_t total_len = tmp2_len + message_len + 1;

            char* result = (char*) malloc(total_len*sizeof(char));

            strcpy(result, message);
            strcat(result, tmp2);

            message = (char*) malloc(strlen(result));
            strcpy(message, result);

            free(tmp);
            free(tmp2);
            free(result);
        }
    }

    for (;;) {
        printf("%s\n", message);
    }

    free(message);

    return 0;
}