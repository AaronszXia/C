int  main()
{ 	int a[3]={1},i;
	scanf("%d",a[0]);
	for(i=1;i<=3;i++) a[0]=a[0]+a[i];
 	printf("a[0]=%d\n",a[0]);
    return 0;
}
