#include <stdio.h>
struct student {
  char name[60];
  int No;
  char address[75];
  int eng;
  int math;
  int phys;
} s[4];

int main() {
  int i;
  for (i = 0; i < 4; ++i) 
  {
    s[i].No = i + 1;
    printf("Enter Name: ");
    scanf("%s", s[i].name);
    
    printf("English Score:");
    scanf("%d", &s[i].eng);
    printf("Math score: ");
    scanf("%d", &s[i].math);
    printf("Physic score: ");
    scanf("%d", &s[i].phys);
    
  }
   
  printf("\nPrint student Information:\n");
  float mean;
  int sum;
  for (i = 0; i < 3; ++i) 
  {
    printf("\n No: %d\n", i + 1);
    printf("Name: ");
    puts(s[i].name);
    printf("English score: %d", s[i].eng);
    printf(" Math score: %d", s[i].math);
    printf(" Physic score: %d", s[i].phys);
    sum = s[i].eng + s[i].math + s[i].phys;
    mean = sum/3;
    if( 90 <= mean <= 100 )
    {
        printf("Grade A");
    }
    if( 80 <= mean < 90)
    {  
       printf("Grade B"); 
    }  
    if( 70 <= mean < 80)
    {
        printf("Grade C");
    }
    else
    { printf("Grade D");
      
  }
  }
  return 0;
}
