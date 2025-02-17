#include<stdio.h>
int main(){
int hooror,mystery,history;
printf("THERE ARE HOOROR , MYSTERY, HISTORICAL BOOKS IN OUR LIBRARY\n");
printf("THE NUMBER OF BOOKS IN HORROR CATEGORY :");
scanf("%d",&hooror);
printf("\nTHE NUUMBER OF BOOKS IN MYSTERY CATEGORY:");
scanf("%d",&mystery);
printf("\n THE NUMBER OF BOOKS IN HISTORY CATEGORY:");
scanf("%d",&history);
int totalbook;
 totalbook=hooror+mystery+history;
 printf("\n THE TOTAL NUMBER OF BOOKS IN THIS LIBRARY IS : %d",totalbook);
 return 0;
 }
