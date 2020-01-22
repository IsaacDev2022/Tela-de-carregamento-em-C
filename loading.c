#include <stdio.h>
#include <stdlib.h>

void Carregando();
void Barra ();

int main(){
	for (;;){
		
		printf ("\n");
		printf ("\t\t\t\t\t\t");
		Carregando ();
		printf ("\n");
		Barra ();
		
		system ("cls");
	}
	
	return 0;	
}

void Barra (){
	int i, j;
	for (i = 0; i <= 100; i++){                
      	printf (" %d%%\r", i);
      	fflush (stdout);                      
         
      	for (j = 0; j < i; j++){ 
	  		if (!j) 
	  		
        	printf ("  ");   
        	printf ("%c", 219);
        	
        	Sleep(1);
    	}                      
   	} 
}

void Carregando (){
	char nome [11] = "Carregando:";
	int i, j;
	
	for (j = 0; j < 11; j++){
		printf("%c", nome[j]);
        Sleep(200);
    }
    
}
