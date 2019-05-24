// Assignment CS201.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int wflag;
	int choice;
	char schoice;
	int a[5];
	int total;
	wflag = 0;
	choice = 0;
	schoice = 'A';
	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	a[3] = 0;
	a[4] = 0;
	total = 0;
	while(wflag != 1) {
	   puts("Press 1 to Enter Data in Array");
	   puts("Press 2 to Read the Array Elements");
	   puts("Press 3 to Show Array Elements In Reverse Order.");
	   puts("Press 4 to Show Array Elements Which are multiple of 3.");
	   puts("Press 5 to Show Sum Of All The Elements.");
	   puts("Press 6 to Exit.");
	   printf("Enter your choice: ");
	   scanf_s("%d",&choice);
	   printf("Your Choice is: %d",choice);
	   puts("");
	   puts("");

	   if(choice == 6) {
	      wflag = 1;
	   }

	   if(choice == 1) {
		  puts("");
	      puts("");
		  puts("Enter Data In Array");
		  puts("");
		  for(int i = 0; i < 5; i++) {
		     printf("Please Enter Value %d: ",i);
	         scanf_s("%d", &a[i]);
		  }
		  puts("");
		  puts("5 Elements Entered.");
		  puts("");
	      puts("");
		  puts("Do you want to continue? Press Y/y for Yes: ");
		  scanf_s("%c",&schoice);
		  schoice = getchar();
		  if(schoice == 'Y' || schoice == 'y') {
			
		  }
		  else {
		     break;
		  }
	   }

	   if(choice == 2) {
		  puts("");
	      puts("");
		  puts("Read the Array Elements");
		  puts("");
		  for(int i = 0; i < 5; i++) {
		     printf("%d \n",a[i]);
		  }
		  puts("");
		  puts("Do you want to continue? Press Y/y for Yes: ");
		  scanf_s("%c",&schoice);
		  schoice = getchar();
		  if(schoice == 'Y' || schoice == 'y') {
			 
		  }
		  else {
		     break;
		  }
	   }

	   if(choice == 3) {
		  puts("");
	      puts("");
		  puts("Show the Array Elements In Reverse Order");
		  puts("");
		  for(int i = 4; i > -1; i--) {
		     printf("%d \n",a[i]);
		  }
		  puts("");
		  puts("Do you want to continue? Press Y/y for Yes: ");
		  scanf_s("%c",&schoice);
		  schoice = getchar();
		  if(schoice == 'Y' || schoice == 'y') {
			 
		  }
		  else {
		     break;
		  }
	   }

	   if(choice == 4) {
		  puts("");
	      puts("");
		  puts("Show the Multiple of 3 Of Each Array Elements");
		  puts("");
		  for(int i = 0; i < 5; i++) {
			 int b = a[i] * 3;
		     printf("%d \n",b);
		  }
		  puts("");
		  puts("Do you want to continue? Press Y/y for Yes: ");
		  scanf_s("%c",&schoice);
		  schoice = getchar();
		  if(schoice == 'Y' || schoice == 'y') {
			 
		  }
		  else {
		     break;
		  }
	   }

	   if(choice == 5) {
		  puts("");
	      puts("");
		  puts("Show the Sum Of the Array Elements");
		  puts("");
		  //total = 0;
		  for(int i = 0; i < 5; i++) {
			 total += a[i];
		     printf("%d \n",total);
		  }
		  printf("Sum Of Elements: ",total);
		  puts("");
		  puts("Do you want to continue? Press Y/y for Yes: ");
		  scanf_s("%c",&schoice);
		  schoice = getchar();
		  if(schoice == 'Y' || schoice == 'y') {
			 
		  }
		  else {
		     break;
		  }
	   }


	}

	return 0;
}

