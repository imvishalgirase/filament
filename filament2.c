#include <stdio.h> 
main() 
{ 
    char username[50]; 
    char password[20]; 
 
 
    printf("Enter your username:\n"); 
    scanf("%s",&username); 
 
    printf("Enter your password:\n"); 
    scanf("%s",&password); 
 
    if(strcmp(username,"vishal")==0)
	{ 
        if(strcmp(password,"1008100108")==0)
		{ 
 
        printf("\nwelcome to my world!"); 
        }
		else
		{ 
          printf("\nSir password fari thi nakho"); 
        } 
    }
	else
	{ 
         printf("\n  Sir fari thi try karo"); 
    } 
}
