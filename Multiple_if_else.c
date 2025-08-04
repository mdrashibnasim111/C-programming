//w.a.p to check wether the given character is vowel or consonant.
#include<stdio.h>
#include<conio.h>
void main()
{
  char c;                                   //data type char is used 
  printf("enter a alphabet\t");
  scanf("%c",&c);
  if(c=='a')                               //in char single quotes are used to represent character 'a'
      printf("it is a vowel");
  else
      if(c=='A')
      printf("it is a vowel");
      else
          if(c=='e')
          printf("it is a vowel");
          else
              if(c=='E')
              printf("it is a vowel");
              else
                  if(c=='i')
                  printf("it is a vowel");
                  else
                      if(c=='I')
                      printf("it is a vowel");
                      else
                          if(c=='o')
                          printf("it is a vowel");
                          else
                              if (c=='O')
                              printf("it is a vowel");
                              else
                                  if(c=='u')
                                  printf("it is a vowel");
                                  else
                                      if(c=='U')
                                      printf("it is a vowel");
                                      else
                                          printf("it is a consonant");
 getch();                     
}