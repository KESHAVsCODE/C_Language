void A1()
{
    printf("YOU ARE IN A1\n");
}
void A2()
{
    printf("YOU ARE IN A2");
}
void B(void (*p)())
{
    (*p)();     //p();
}
void main()
{
    B(A1);
    B(A2);
    getch();
}
