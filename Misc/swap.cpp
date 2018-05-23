main()
{
	int a,b;
	a=3;b=6;
	{
		a^=b;
		b^=a;
		a^=b;
	}//swaps a with b;
}
