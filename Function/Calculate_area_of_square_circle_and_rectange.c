#include<stdio.h>
#include<math.h>
#define PI 3.14
float areaOfSquare(float side);
float areaOfCircle(float radius);
float areaOfRectangle(float length, float breadth);
int main()
{
	// For the area of Square.*********************************************************
	float side;
	printf("Enter the sides of square: ");
	scanf("%f",&side);
	float squareArea = areaOfSquare(side);
	printf("The area of square is %.2f\n\n",squareArea);
	
	// For the area of Circle.********************************************************
	float radius;
	printf("Enter the radius of circle: ");
	scanf("%f",&radius);
	float squareCircle = areaOfCircle(radius);
	printf("The area of circle is %.2f\n\n",squareCircle);
	
	// For the area of Rectangle.*****************************************************
	float length, breadth;
	printf("Enter the length of rectangle: ");
	scanf("%f",&length);
	printf("Enter the breadth of rectangle: ");
	scanf("%f",&breadth);
	float squareRectangle = areaOfRectangle(length, breadth);
	printf("The area of square is %.2f",squareRectangle);
	
	return 0;
}
// For the area of Square.************************************************************
float areaOfSquare(float side)
{
	return 4*side;
	
}

// For the area of Circle.************************************************************
float areaOfCircle(float radius)
{
	return PI*pow(radius,2);
}

// For the area of Rectangle.*********************************************************
float areaOfRectangle(float length, float breadth)
{
	return length*breadth;
}
