#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int height = get_int("Height: ");
     for(int i=0; i<=height;i++)
    {
      for(int j=0;j<i;j++)
    {
      printf("#");
    }

    printf("\n");
    }

}
