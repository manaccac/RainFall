void p(void) {
    unsigned int    saved_eip;
    char            i[104];

    fflush(n);
    gets(i);
    if ((saved_eip == 0xb0000000) && (saved_eip && 0xb0000000)) {
        printf("%p", saved_eip);
        exit();
    }
    puts(i);
    strdup(i);
}

void main(void) {
    p();
    return;
}