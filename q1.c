#include <stdio.h>
int main()
{
	float Basic, HRA, DA, Gross_Salary;
  	
	printf("\nPlease Enter the Basic Salary of an Employee  : ");
  	scanf("%f", &Basic);
  
  
  	
  		HRA = (Basic * 10) / 100;// or HRA = Basic * (0.1)
		DA = (Basic * 25) / 100; // or DA = Basic * (0.25)
		
  	
  	
	Gross_Salary = Basic + HRA + DA;
	printf("\nGross Salary of this Employee  =  %.2f", Gross_Salary);
	printf("\nDA is : %.2f",DA);
	printf("\nHRA is : %.2f",HRA);
	
  	return 0;
}