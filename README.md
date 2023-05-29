# CodeBreaker_delete_it_aviothic1.0
# Delete It

###  ** An command line application that protects your privacy by deleting your data permanently from your device storage so that no one can take advantage of your deleted data. **

## Feature 
Delete your Data permanently from your device.
- This application is able to delete all type of files stored on your device locally.
- Application is able to delete single file as well as multiple files at once.

## How to Use 
First you need to compile the scource code once.

- Compile the source code using comman
``` gcc main.c -o main.exe ```
if you compiled using ``` gcc main.c ``` then run it using 
```<complied file name> <files-to-be-delted>```



- To Delete file or files stored on system you need to run following commmand.
 ```.\main.exe <file-name1> <file-name2> ... <file-name-n> ```
 File name is name of file with its absoulte path.

- If for any reason program is unable to work on file (may be file is opened anywhere else).
 Then you will recieve messsage like this.
```Can not open file```
 
 - After succesfully deleting a file it will show
 ``` <file-name> Deleted sucessfully```
 
 - If due to any reason it is unable to delete file, then it will show.
 ``` Unable to delete the file <file-name> ```
 
## Working of Software

As **data can never be deleted from memory** we only delete its referrence from memory. 
Various malicious software and hackers take advantage of this fact and can retrive your deleted data (this is happened in past many times) so 
this software is designed to first override your data that you want to delete and then delete its reference from memory in order to free up space.
After deleting data using this app if anyone try to retrive data he/she will only get overrided data and your privacy will protected.

- This Software is build in pure C programming language.
- No libray other than ```stdio.h``` is used.

 
