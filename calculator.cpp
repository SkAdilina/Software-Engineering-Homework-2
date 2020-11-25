void calculator()
{
	int a,b,sum,opt;
	char c;
	
	while(1)
	{
		std::cout<<"MENU \n1. Add  \n2. Subtract  \n3. Multiply  \n4. Divide  \n5. Modulus  \nEnter your choice: ";
 	   	std::cin>>opt;
		std::cout<<"Enter your two numbers: "; 
		std::cin>>a>>b;
		
		if(opt == 1)
			sum = a+b;
		else if(opt == 2)
			sum = a-b;
		else if(opt == 3)
			sum = a*b;
		else if(opt == 4)
			sum = a/b;
		else if(opt == 5)
			sum = a%b;
		
		std::cout<<"Result: "<<sum<<'\n';
		
		
		std::cout<<"\nContinue? ";
		std::cin>>c;
		
		if(c != 'y')
			break;
	}
				 
}