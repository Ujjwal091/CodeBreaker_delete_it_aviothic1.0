#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc == 1){
        printf("Please proved at least one file to be deleted\n");
        return  1;
    }
  for(int i = 1; i<argc; i++){
      FILE *fp = fopen(argv[i], "r");
      if(!fp){
          printf("Can not open file %s\n", argv[i]);
          continue;
      }
      fclose(fp);
    FILE * file = fopen(argv[i], "w");

    if(!file){
      printf("Can not open file %s\n", argv[i]);
        continue;
    }

    int ch;

    while(1){
      ch = fgetc(file);
      if(ch == EOF){
        break;
      }
      else{
      fputc(1, file);
      }
    }

    fclose(file);
    if (remove(argv[i]) == 0)
      printf("%30s Deleted successfully\n", argv[i]);
    else
      printf("Unable to delete the file %30s\n", argv[i]);
  }

  return 0;
}
