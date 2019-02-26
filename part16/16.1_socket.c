#include <sys/types.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <stdio.h>

int main() {
    int s;
    if ((s = socket(AF_INET,SOCK_STREAM,0)) < 0) {  /*create socket*/
        perror("connect");                          /*output error message*/
        exit(1);                                    /*exit program*/
    }
    else {
        printf("A socket was created.\n");
        printf("Socket number:%d\n",s);
    }

    if ((s = socket(AF_INET,123,0)) < 0) {          /*use error arg create socket*/
        perror("connect");                          /*output error message*/
        exit(1);
    }
    else {                                          /*create success*/
        printf("A socket was created.\n");
        printf("Socket number:%d\n", s);
    }
}
