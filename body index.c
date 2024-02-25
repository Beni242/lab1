//  bodyIndex

#include <stdio.h>
#include <stdlib.h>

float bodyIndex (float w , float h)
{
    return w/(h * h);
}

int determineCategory(float bmi) {
    if (bmi >=0 && bmi <= 18)
       { 
           printf("you're slim \n");
        
        return 1;
       }
    else if (bmi >= 19 && bmi <= 25)
        {
            printf("you're normal good\n");
            return 2; 
        }
    else if (bmi >= 26 && bmi <= 30)
        {
            printf("you can lose some kilo\n");
            return 3; 
        }
    else
        printf("you need to do some exercises\n");
        return 4; 
}

int main(void)
{
    float weight, height;
    
    printf("enter your weight : \n");
    scanf("%f", &weight);

    printf("enter your height : \n");
    scanf("%f", &height);

  float BMI = bodyIndex ( weight , height);

  int category = determineCategory(BMI);

  printf("Your Body Mass Index (BMI): %.2f\n", BMI);
  printf("Body Mass Index Function Return Value Status: %d\n", category);


}
