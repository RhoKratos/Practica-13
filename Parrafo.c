 # include <stdio.h>
 # include <string.h>
 # include <stdlib.h>
 # include <ctype.h>
 
 int main () {
 	
 	FILE *archivo;
 	int numPalabras;
 	int numeros;
 	
 		archivo=fopen("texto.txt","r");
 		while(!feof(archivo)){
 			letra=fgetc(archivo);
 			if(letra=='')numPalabras++;
			if(isdigit(letra))numeros++;
 		}
 		fclose(archivo);
 			archivo=fopen("resultado.txt","w");
 			fprint(archivo,"Son %d palabras", numPalabras);
				fclose(archivo);
		archivo=fopen("resultado2.txt","w");
		fprintf(archivo"Son %d digitos", numeros)
	fclose(archivo);		
 }
