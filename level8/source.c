#include <stdio.h>

char    *service;
char    *auth;

void    main(void) {
    char    s[160];
    char    *authname;

    while(1) {
        printf("%p, %p\n", auth, service);
        if (!fgets(s, 128, stdin)) {
            break;
        }
        if (!strncmp(s, "auth ", 5)) {
            auth = malloc(4);
            authname = s + 5;
            if (strlen(authname) <= 30)
                strcpy(auth, authname);
        }
        if (!strncmp(s, "reset", 5)) {
            if (auth)
                free(auth);
        }
        if (!strncmp(s, "service", 7)) {
            service = stdup(s + 7);
        }
        if (!strncmp(s, "login ", 5)) {
            if (auth + 32 == service)
                system("/bin/sh");
            else
                fwrite("Password:\n", 1, 10, stdout);
        }
    }
}