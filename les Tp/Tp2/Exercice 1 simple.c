#include <stdio.h>
// etudiant : Nafa Abdellah yahia mat: 202031076002
//function du calcule de Un
int calcUn(int a,int d,int n){
    return a + (d*n);
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
    printf("Un = %d",calcUn(a,d,n));

    return 0;
}
