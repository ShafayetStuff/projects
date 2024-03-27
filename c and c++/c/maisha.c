#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 /// @brief 
 /// @return 
 int main (){

   char response[100];
   printf("Does Maisha love me:");

   scanf("%s",response);

   if(strcmp(response, "yes")== 0){
      printf ("I also love her.\n");
   }
   else if(strcmp(response, "no")== 0){
      printf ("One day she will. Matter of time you know.\n");
   }
   else if(strcmp(response, "idk")== 0){
      printf ("She will know. \n\n");
   }
   else if(strcmp(response, "Yes")== 0){
      printf ("I also love her\n\n");
   }
   else if(strcmp(response, "No")== 0){
      printf ("One day she will. Matter of time you know.\n\n");
   }
   else{
      printf("Say Yes,No,idk,yes or no");
   }
   
   return 0;
 }