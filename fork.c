#include <stdio.h>
#include <unistd.h>

int main(){
    
    int a = 5;

    int pid = fork();

    if(pid==0){
        printf("Soy el proceso hijo, a = %d\n", a);
        execl("./hola", "hola", "Juan", "yo", (char *) NULL);
        printf(" Esto no deveria imprimirse");
        return 0;
    }
    printf("Soy el proceso padre, a = %d\n", a);
    sleep(20);
    return 0;
}
