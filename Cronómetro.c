//hacer un cronometro que comience cuando se puls espacio
#include<stdio.h>
#include<windows.h>
int main()
{
int h, m, s, x=1000;
char c;
 
do {
printf("inicia el cronometro con al tecla s:");
	fflush (stdin);
		scanf("%c",&c);
}
 while (c!='s' && c!='S');
 {
 	
 for (h=0; h<24; h++){
 
     for (m=0; m<60; m++){
   
         for(s=0; s<60; s++){
     
     	printf("%02i, %02i, %02i\r", h, m, s);
     	Sleep(x);
	 }}}}
	 
	
	return 0;
}

