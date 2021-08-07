#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>

int main(void)
{
    struct addrinfo* result = NULL;
    
    int error;

    printf("I'll try to reach out to the internet for the key!\n");

    error = getaddrinfo("base64obfuscatedkeygoeshere",NULL,NULL,&result);

    if (error != 0)
    {
        printf("error, the key was not found, maybe you can take a look and see where I went wrong.\n");
    }else {
        printf("something went wrong, that wasn't supposed to resolve, take a look!\n");
    }

    if (NULL == result) 
    {
        printf("result is null\n");
    }else
    {
        freeaddrinfo(result);
    }
    
    return 0;
}