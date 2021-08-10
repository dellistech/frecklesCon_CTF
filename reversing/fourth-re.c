//finish the sentence type thing (white_rabbit.object)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define INPUT_SIZE 52

int main()
{
    char* input;
    char* white_rabbit = "QWggYWggYWgsIHlvdSBkaWRuJ3Qgc2F5IHRoZSBtYWdpYyB3b3Jk";

    input = (char*) malloc(INPUT_SIZE);

    memset(input, 0, INPUT_SIZE);

    while(1)
    {
        printf("Finish the sentence: Oh my Ears & Whiskers I'm.... \n(press q to finish)\n");
        scanf("%s", input);

        if(0 == strncmp(input, "late", strlen("late\0")))
        {
            printf("Good job!\n");
            memset(input, 0, INPUT_SIZE);
            
        }else if(0 == strncmp(input, "q", 1))
        {
            printf("quitting...\n");
            break;
        }else if(0 == strncmp(input, white_rabbit, strlen(white_rabbit)))
        {
            printf("\nThis may be important: \n\n");
            printf("WW91IGdvdCBpdCwgdGFrZSB0aGF0IHRleHQsIGJhc2UgNjQgZGVjb2RlIGl0LCBhbmQgcHV0IGZyZWNrbGVze30gYXJvdW5kIHRoZSByZXN1bHRpbmcgcGhyYXNlIGFuZCB0aGF0J3MgdGhlIGtleSE=\n");
            break;
        }
    }

    
    free(input);
}