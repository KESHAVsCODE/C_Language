main()
{
    int x=5,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    printf("%u\n",q);
    printf("%u\n",r);
    ***r=7;
    printf("%d",x);

}

