#include <stdio.h>
int main (){
	char linea [256]; //store a string
	char ruta [256]; //store the path
	FILE *f;    //pointer to the file
	printf("Ingresa la ruta: \n"); //ask for the path
	scanf("%s", ruta); //read the path
	f = fopen(ruta,"r"); //open the file
	if (f == NULL){     //if the file couldn't be read
	        fclose(f); //close the file
		printf("No se puede abrir el archivo\n"); //show the user an error
		return 1; //inform the error
		}
	while ((fgets(linea,sizeof(linea),f)!=NULL)){ //if the file isn't null, store in the variable "linea" a string of the size of 256
		printf("%s",linea); //write the line
	}
	fclose (f);  //close the file
	return 0; //inform that the program executed sucessfully
}
