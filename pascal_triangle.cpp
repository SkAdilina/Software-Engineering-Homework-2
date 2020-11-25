void pascal_triangle(int n)
{
	int a[n][n];
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j] = 0;
		}
	}
	
	for(i=0;i<n;i++)
		a[i][0] = 1;
	a[1][0] = a[1][1] = 1;
	
	for(i=2;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			a[i][j] = a[i-1][j] + a[i-1][j-1];
		}
	}
	
	std::cout<<"PASCAL TRIANGLE\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			std::cout<<a[i][j]<<' ';
		}
		std::cout<<'\n';
	}
}

/*
1				
1	1			
1	2	1		
1	3	3	1	
1	4	6	4	1
*/