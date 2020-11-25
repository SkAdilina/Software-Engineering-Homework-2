int * sorting_using_pointers(int * arr, int n)
{
	int i, j, temp;  
	for (i = 0; i < n-1; i++)      
    {  
	    for (j = 0; j < n-i-1; j++)  
	    {
			if (*(arr + j) > *(arr + j + 1))  
	        {
				temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;  
			}
		}
	}
	
	return arr;
}

void input_array(int* arr)
{
	int i;  
	
	std::cout<<"Enter 5 integers: \n";
	for(i=0;i<5;i++)
	{
		std::cin>>*(arr + i);
	}
	
	std::cout<<"Array displayed on screen: "<<'\n';
	for(i=0;i<5;i++)
	{
		std::cout<<*(arr + i)<<' ';
	}
}

int max_val_pointer(int * arr, int n)
{
	int i,ans;
	
	ans = *(arr + 0);
	for(i=1;i<n;i++)
	{
		if(ans< *(arr + i))
			ans = *(arr + i);
	}
	return ans;
}