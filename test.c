#include <stdio.h>
int main () {
  FILE *fp;
  int c;
  int n = 0;
  fp = fopen("c:\\test.txt","r");
  if(fp == NULL) {
      perror("Erreur d'ouverture de fichier");
      return(-1);
  } 
  do {
      c = fgetc(fp); //lire le fichier caractère par caractère
      if(feof(fp)){  //on s'arrête jusqu'à la fin du fichier
         break ;
      }
  printf("%c", c);
  }while(1);
  fclose(fp);
  return(0);
}
