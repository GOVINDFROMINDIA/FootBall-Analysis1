#include<stdio.h>
int main()
{float match,goal,ratio,ming,min;
printf("FOOTBALL ANALYSIS \n");
printf("Matches Played:");
scanf("%f",&match);
printf("Goals SCored:");
scanf("%f",&goal);
printf("Minutes Played ");
scanf("%f",&min);
ming=min/goal;
printf("Minutes Per Goal is %f \n",ming);
ratio = goal/match;
printf("Goal Ratio is %f \n",ratio);
return 0;
}