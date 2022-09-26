#include<stdio.h>
#include<conio.h>
int main()
{
    FILE* file = fopen ("num.txt.txt", "r");
  int i = 0;

  if(file == NULL){
    printf("not opening");
  }
  fscanf (file, "%d", &i);
  printf ("%d ", i);
  while (!feof (file))
    {
      printf ("%d ", i);
      fscanf (file, "%d", &i);
    }
  fclose (file);
}
