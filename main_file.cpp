#include<iostream>
#include "header.h"

int main()
{
	
	int a[20];	
	int i, n=10;
	/*
	std::cout<<"*************** ANSWER 1 ***************\n";
	calculator();
	
	std::cout<<"\n\n*************** ANSWER 2 ***************\n";
	std::cout<<"Enter 10 integers: \n";
	for(i=0;i<n;i++)
	{
		std::cin>>a[i];
	}
	std::cout<<'\n';
	std::cout<<"Maximum value in the table is: "<<maximum_value(a)<<'\n';
	std::cout<<"Minimum value in the table is: "<<minimum_value(a)<<'\n';
	std::cout<<"Maximum occuring integer is: "<<occurance(a)<<'\n';
	
	
	std::cout<<"\n\n*************** ANSWER 3 ***************\n";
	sorting(a,n);
	std::cout<<"Sorted array: "<<'\n';
	for(i=0;i<n;i++)
	{
		std::cout<<a[i]<<' ';
	}
	
	
	std::cout<<"\n\n*************** ANSWER 4 ***************\n";
	std::cout<<"Enter size of pascal triangle: \n";
	std::cin>>n;
	pascal_triangle(n);
	
	std::cout<<"\n\n*************** ANSWER 6 ***************\n";
	
	int p_array[10];
	input_array(p_array);*/
	
	std::cout<<"\n\n*************** ANSWER 7 ***************\n";
	
	int s_array[10];
	std::cout<<"Enter 10 integers for the array to sort using pointers: \n";
	n=10;
	for(i=0;i<n;i++)
	{
		std::cin>>s_array[i];
	}
	*s_array = sorting_using_pointers(s_array, n);
	
	std::cout<<"\n\n";
	return 0;
}



/*
2 4 1 3 4 60 3 6 3 10


*/