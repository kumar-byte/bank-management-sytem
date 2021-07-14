#include <stdio.h>
struct customer
{
  
int price, accno, pin, balance, age;
   
char name[100];
 
} list[50];

int search(int);

int pin();

void add ();

void deposit ();

void withdraw ();

void balance ();

void details ();

int a, i = 0, num, num2, j, choice, amount, cust = 0,n,num4;

int main (void) 
{
while (j < 6){
printf ("\n\n\n1.Add account"); 
printf("\n2.Deposite Amount");
printf ("\n3.Withdraw Amount"); 
printf("\n4.Display Balance");
printf ("\n5.Display Account Details");
printf ("\nEnter choice(1-5) : ");
scanf ("%d", &choice);
switch (choice){
	case 1:{
	    add ();
	    break;
	  }
	case 2:{
	    deposit ();
	    break;
	  }
	case 3:{
	    withdraw ();
	    break;
	  }
	case 4:{
	    balance ();
	    break;
	  }
	case 5:{
	    details ();
	    break;
	  }
	}
    }
  return 0;
}


void add ()
{  
printf ("\n\nEnter The Account Number:");
scanf ("%d", &list[i].accno);
num=list[i].accno;   
n=search(num);

if(n==-1){
printf ("\n\nEnter Name : ");
scanf ("%s", list[i].name);
printf ("\n\nEnter The AGE :");
scanf ("%d",&list[i].age);
list[i].balance = 0;
pin();
cust += 1;
i += 1;
}   

else{
printf("\n\nYou Entered Account Number is Already Exist");
} 
}
int search(int num){    
	for(i=0;i<cust;i++){  
		if(list[i].accno==num){       
			return i;
		}
	}
	return -1;
}
int pin(){
	printf ("\n\nSet PIN:");   
	scanf ("%d", &num4);
	if(999<num4 && num4<10000){
 		list[i].pin=num4;
 	}
 	else{
 		printf("\n\nThe Pin Number Length must be 4");
 		pin();
	} 
}
void deposit (){
printf ("\n\nEnter Account Number : ");       
scanf ("%d", &num);
n=search(num);
if(n==-1){
	printf("\n\nYou Entered Account Number is Not Exist");
}   
else{                  
if (list[n].accno == num){
	printf ("\n\nEnter the PIN:");
	scanf ("%d", &num2);       
	  if (list[n].pin == num2){
	      printf ("\n\nEnter amount to deposit : ");
	      scanf ("%d", &amount);
	      list[n].balance += amount;
	    }
	  else{
	    printf ("\n\nYou Entered Wrong PIN Number");}
		}
	}
}


void withdraw ()
{
printf ("\n\nEnter Account Number : ");
scanf ("%d", &num);
n=search(num);
if(n==-1){
	printf("\n\nYou Entered Account Number is Not Exist");
}   
else{
if (list[n].accno == num){
		printf ("\n\nEnter the PIN:");
		scanf ("%d", &num2);
	  	if (list[i].pin == num2){
			printf ("\n\nEnter Amount to Withdraw : ");
	      	scanf ("%d", &amount);
	      	list[i].balance -= amount;
	    }
		else{
	    	printf ("\n\nYou Entered Wrong PIN Number");}
}
}
}


void balance ()
{
printf ("\n\nEnter Account Number : ");    
scanf ("%d", &num);
n=search(num);
if(n==-1){
	printf("\n\nYou Entered Account Number is Not Exist");
}   
else{
	if (list[n].accno == num){
	printf ("\n\nEnter the PIN:")
	scanf ("%d", &num2);
		if (list[i].pin == num2){
	      	printf ("\n\nThe Balance in Your Amount : %d",list[i].balance);
	    }
	  	else{
	    	printf ("\n\nYou Entered Wrong PIN Number");
			}
		}
	}
}


void details (){
printf ("\n\nEnter Account Number to Search : ");
scanf ("%d", &num);     
n=search(num);
if(n==-1){
	printf("\n\nYou Entered Account Number is Not Exist");
}   
else{
	if (list[n].accno == num){
		printf ("\n\nEnter the PIN:");  
		scanf ("%d", &num2);
	  		if (list[i].pin == num2){
				printf("\n===================================================");      
	      		printf ("\n\n\tAccount Name : %s", list[i].name);
	      		printf ("\n\n\tAccount Number : %d", list[i].accno);
				printf("\n\n\tAGE : %d",list[i].age);
	      		printf ("\n\n\tAccount Balance:%d", list[i].balance);
	    		printf("\n===================================================");	    
				}
	  		else{
				printf ("\n\nYou Entered Wrong PIN Number");}
}
}}
