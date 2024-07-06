#include<stdio.h>
int
main ()
{
  
int math, eng, bio, chem, phy;
  
char grade;
  
double average;
  
 
printf ("Enter your Mathematics score: ");
  
scanf ("%d", &math);
  
 
printf ("Enter your English score: ");
  
scanf ("%d", &eng);
  
 
printf ("Enter your Biology score: ");
  
scanf ("%d", &bio);
  
 
printf ("Enter your Chemistry score: ");
  
scanf ("%d", &chem);
  
 
printf ("Enter your Physics score: ");
  
scanf ("%d ", &phy);
  
 
average = (math + eng + bio + chem + phy) / 5;
  
printf ("Your average score is: %.2f\n", average);
  
 
if (average < 1 || average > 99)
	{
	  
printf ("The marks you entered are invalid, please try again");
	
}
  else
	{
	  
if (average > 79 && average < 100)
		{
		  
grade = 'A';
		
}
	  else if (average > 69 && average < 80)
		{
		  
grade = 'B';
		
}
	  else if (average > 59 && average < 70)
		{
		  
grade = 'C';
		
}
	  else if (average > 40 && average < 60)
		{
		  
grade = 'D';
		
}
	  else
		{
		  
grade = 'F';
		
}
	
}
  
 
printf ("your mean grade is: %c\n", grade);
  
 
return 0;

}
