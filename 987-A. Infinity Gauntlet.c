#include <stdio.h>


int main(){

int m;
int visited[6] = {0};
char gems[6][8] = {"Power" , "Time" , "Space" , "Soul" , "Reality" , "Mind"};


scanf("%d",&m);


char color[8];
char ch;
int temp = m;

while(temp--){

scanf("%s" , color);
ch = *color;

switch (ch) {
	case 'p':
	visited[0] = 1;
	break;
	
	case 'g':
	visited[1] = 1;
	break;
	
	case 'b':
	visited[2] = 1;
	break;
	
	case 'o':
	visited[3] = 1;
	break;
	
	case 'r':
	visited[4] = 1;
	break;
	
	case 'y':
	visited[5] = 1;
	break;
	
	default:
	break;
	
	
	}
	
	
	}//end of while
	
printf("%d\n",6-m);
for(int i=0 ; i<6 ; i++)
	if(!visited[i]) printf("%s\n",gems[i]);



}
