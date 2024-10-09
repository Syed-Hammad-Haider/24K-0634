#include <stdio.h>

int main() {
	int i,x=1;
	for(i='A';i<='O';i++){ //Loop's ending character can be adjusted to display single or multiple hour glasses(Not hardcoded)  
		if (x==1 || x==5)
			printf("%c %c %c %c %c\n",i,i+1,i+2,i+3,i+4);
		else if(x==2 || x==4)
			printf("  %c   %c \n",i+1,i+4);
		else
		    printf("    %c    \n",i+2);
                x++;
                if (x>5)
                    x=1;
	
		}
}