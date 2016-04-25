#include <stdio.h>
void main()
{
  int WinLotteryNo[10] = {1500, 1800, 5515, 7233, 5614, 8876, 1215, 4232, 9155, 9995};
  float WinAmount[10] = {50000, 20000, 10000, 5000, 5000, 5000, 5000, 3000, 3000, 3000};

  int N = 10;
  int i, won; 
  
  int YourLotteryNum;
   
  printf("Enter your Lottery Number (0 to end): "); 
  scanf("%d", &YourLotteryNum);
  while (YourLotteryNum != 0)
  { 
    won = 0; 
    for (i=0;i<N && !won; i++) 
    {
       if (YourLotteryNum == WinLotteryNo[i])
       {
          printf("Congratulations You Won %8.2f baht\n", WinAmount[i]); 
          won = 1;
       }
    }
    if (!won) 
      printf("Sorry Lottery Number %4d did not win\n", YourLotteryNum);
    printf("Enter your Lottery Number (0 to end): "); 
    scanf("%d", &YourLotteryNum);
  }
  printf("GOODBYE");
  scanf("%d", &i);
}