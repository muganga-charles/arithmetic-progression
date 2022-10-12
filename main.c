#include <stdio.h>
#include <stdlib.h>
int main()
{ int intial_age,common_diffrence,number_of_participants,sum=0,average;
    printf("enter first person's age\n"); //this is the  starting value
    scanf("%d",&intial_age);
     printf("enter d\n");//d is the common diffrence
    scanf("%d",&common_diffrence);
     printf("enter number of people\n");//n is the number of times,(participants)
    scanf("%d",&number_of_participants);
    int age[number_of_participants];

    for(int i=0;i<number_of_participants;i++){//the loop to certify the condition for the number of times
        age[i]=intial_age+i*common_diffrence;
      printf("%d is the age of participant %d\n",age[i],i+1);
     sum=sum+age[i];
    }average=sum/number_of_participants;
    printf("AVERAGE:%d\n",average);//this calculates the average
    return 0;
}
