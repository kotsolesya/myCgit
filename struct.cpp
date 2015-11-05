#include <stdio.h>
#include <conio.h>

 struct adr {
            char *name;
            char *city;
            int zip;
            };
            
            
int main(void)
{

    struct adr A,B;

      A.name="Jack";
      A.city="Oslo";
      A.zip=18000;
          printf(" %s ",A.name);
          printf(" %s ",A.city);
          printf(" %d ",A.zip);     
         
                FILE *h;
                h=fopen("adr.txt","w+");
                fwrite(&A,sizeof(adr),1,h);
                
                rewind(h);
                /*FILE *g;
                g=fopen("adr.txt","r");*/
                fread(&B,sizeof(adr),1,h);
                
                      printf("\n %s ",B.name);
                      printf(" %s ",B.city);
                      printf(" %d ",B.zip);     
                fclose(h);
          
    getch();     
    return 0;
}
