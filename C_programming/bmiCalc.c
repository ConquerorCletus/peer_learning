#include <stdio.h>
/**
 * main - BMI calculator
 * Return:0
 */
int main()
{
	float weight;
	float height;
	float BMI;

	printf("Enter your weight in Kg:\n");
	scanf("%f", &weight);

	printf("Enter your height in m:\n");
	scanf("%f", &height);

	BMI = (weight / (height * height));
	printf("Your BMI value is %.2f\n", BMI);

	if(BMI < 18.5)
	{
		printf("You are underweight!!!\n");
	}
	else if (BMI >= 18.5 && BMI <= 24.9)
	{
		printf("You are healthy!!\n");
	}
	else if (BMI >= 25 && BMI <= 29.9)
	{
		printf("You are overweight!!\n");
	}
	else 
	{
		printf("you are obese!!\n");
	}
	return (0);
}
