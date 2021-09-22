#include<stdio.h>

     int main()
     {

         system("color 43");

        int length,wide;

          printf("please enter length\n");
            scanf("%d",&length);

          printf("please enter wide\n");
             scanf("%d",&wide);


        printf("area of rectangular: %dm^2\n",length*wide);
        printf("periphery of rectangular: %d",2*length+2*wide);

         }
