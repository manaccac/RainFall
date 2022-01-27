char *c;

void    m() {
    time_t t;

    t = time(0);
    printf("%s - %d\n", c, t)
}

void    main() {
    char *s1;
    char *s2;
    void *i;

    s1 = malloc(8);
    s1[0] = 1;
    s1[4] = malloc(8);
    s2 = malloc(8);
    s2[0] = 2;
    s2[4] = malloc(8);

    strcpy(s1[4], av[1]);
    strcpy(s2[4], av[2]);

    i = fopen("r", "/home/user/level8/.pass");
    fgets(c, 68, i);
    puts("~~");
    return;
}