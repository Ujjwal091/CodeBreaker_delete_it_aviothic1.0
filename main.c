#include <stdio.h>

// taking command line arguments
int main(int argc, char *argv[]) {

    // if no file name is provided by the user
    if (argc == 1){
        printf("Please proved at least one file to be deleted\n");
        return  1;
    }

    // traverse through all the file name provided by the user
    for(int i = 1; i<argc; i++){

        // to check whether this file is exist or not on the system
        // if it is not there then check next file
        FILE *fp = fopen(argv[i], "r");
        if(!fp){
            printf("Can not open file %s\n", argv[i]);
            continue;
        }
        fclose(fp);

        // open file in write mode to first override the data
        FILE * file = fopen(argv[i], "w");
        if(!file){
          printf("Can not open file %s\n", argv[i]);
            continue;
        }

        // override the previous data
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

    // deleting the reference in order to free up the memory
    if (remove(argv[i]) == 0)
      printf("%30s Deleted successfully\n", argv[i]);
    else
      printf("Unable to delete the file %30s\n", argv[i]);
  }
  return 0;
}
