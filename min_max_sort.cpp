int maximum_value(int arr[])
{
	int i,ans;
	
	ans = arr[0];
	for(i=1;i<10;i++)
	{
		if(ans<arr[i])
			ans = arr[i];
	}
	return ans;
}

int minimum_value(int arr[])
{
	int i,ans;
	
	ans = arr[0];
	for(i=1;i<10;i++)
	{
		if(ans>arr[i])
			ans = arr[i];
	}
	return ans;
}


int occurance(int arr[])
{
	int len = maximum_value(arr);
	int count[len+10]; // count array will keep track of occurance of each number in arr
	int i, cur_val;
	
	for(i=0;i<=len;i++) // initializing the count array to 0
	{
		count[i] = 0;
	}
	
	for(i=0;i<10;i++) // iterate through arr and update the occurance of each integer
	{
		cur_val = arr[i];
		count[cur_val]++;
	}
	
	int ans_index = 0;
	int ans = count[0];
	for(i=1;i<len;i++) // get the most occuring integer
	{
		if(ans<count[i])
		{
			ans = count[i];
			ans_index = i;
		}
	}
	
	return ans_index;
}


void sorting(int arr[], int n)
{
	int i, j, temp;  
	
	for (i = 0; i < n-1; i++)      
    {  
	    for (j = 0; j < n-i-1; j++)  
	    {
			if (arr[j] > arr[j+1])  
	        {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;  
			}
		}
	}
}