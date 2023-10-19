#include <stdio.h>

//function recursive du calcule de Un
int calcUn(int a,int d,int n){
    if (n==0){
        return a;
    }else{
        return calcUn(a, d, n - 1) + d;
    }
}

int main() {
    //recupiration des donnes
    int a,d,n,Un;
    printf("donner a\n");
    scanf("%d",&a);
    printf("donner d\n");
    scanf("%d",&d);
    printf("donner n\n");
    scanf("%d",&n);

    //affichage du resultat
    printf("Un = %d",calcUn(a,d,n));

    return 0;
}
