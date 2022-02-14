/* provides simple rm command to delete a file */
#include <stdio.h>

int main(int argc, char *argv[]){
   if(argc == 2){
      if(remove(argv[1]) != 0){
         perror("Error deleting file");
      } else {
         return 0;
      }
   } else if(argc > 2){
      printf("Only expecting one argument.\n");
   } else{
      printf("Please specify a filename to delete.\n");
   }
}