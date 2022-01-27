
void    n() {
    system("/bin/sh");
    return;
}

void    m() {
    puts("Nope");
    return;
}

void    main(int ac, char **av) {
    char    *str;
    void    *i(void);

    str = (char*)malloc(64);
    i = malloc(4);
    i = &m;
    strcpy(str, av[1]);
    i();
    return;
}