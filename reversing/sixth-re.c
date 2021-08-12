#include<stdio.h>

int main()
{
    //write to file, tell them to hash the file inside that file
    FILE *fp;

    char* contents = "Yahaha-, you've found me! Take the MD5 sum of this file wrap it with \"freckles{}\" and there's your key\n";

    //write file

    fp = fopen(".flag.txt", "w+");

    fputs(contents, fp);
    fclose(fp);

    printf("I have written the method for getting the key to disk, try and find it!\nIt won't be so easy this time!\n");

}