#include<stdio.h>

#include<stdlib.h>

#define MIN(x, y)(x > y) ? y : x
int main() {
  int orate, drop = 0, cap, x, remain = 0, inp[10] = {    0  }, i = 0, nsec,n;
  printf("\n enter bucket size : ");
  scanf("%d", & cap);
  printf("\n enter output rate :");
  scanf("%d", & orate);
  printf("enter no of packets ");
  scanf("%d",&n);
  for(i=0;i<n;i++){

    printf("Enter for %d",i+1);
    scanf("%d",&inp[i]);
  }
  nsec = i;
  printf("\n second \t recieved \t sent \t dropped \tremained \n");
  for (i = 0; remain || i < nsec; i++) {
    printf(" %d", i + 1);
    printf(" \t\t%d\t ", inp[i]);
    printf(" \t %d\t ", MIN((inp[i] + remain), orate));//Display min value
    if ((x = inp[i] + remain - orate) > 0) {
      if (x > cap) {
        remain = cap;
        drop = x - cap;
      } else {
        remain = x;
        drop = 0;
      }
    } else {
      drop = 0;
      remain = 0;
    }
    printf(" \t %d \t\t %d \n", drop, remain);
  }
  return 0;
}
