#include <stdio.h>
#include <stdlib.h>

void *aloca(int nbytes){
    int *v = malloc(nbytes * sizeof(int));

    for(int i = 0; i < nbytes; i++){
        scanf("%d", &v[i]);
    }
}

void libera(void *v){
    free(v);
}

int main(){
    
    int *p = (int*) aloca(10);
    libera(p);

    return 0;
}