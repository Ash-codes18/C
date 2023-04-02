// #include <stdio.h>

// int main(){
//     int t,n,c=0;
//     scanf("%d",&t);
//     while (t--)
//     {
//         scanf("%d",&n);
//         char s[n];
//         for(int i=0;i<n;i++){
//             scanf("%c",&s[i]);
//         }
//     for(int i=0;i<sizeof(s)/4;i++){
//         if(sizeof(s)/4>=4){
//         if(s[i]!='aeiou' && s[i+1]!='aeiou' && s[i+2]!='aeiou' && s[i+3]!='aeiou'){
//             printf("YES\n");
//         }
//         else{
//             printf("NO\n");
//         }
//         }
//         else{
//             printf("YES\n");
//         }
//     }
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        char s[n];
        for(int i=0;i<n;i++){
            scanf(" %c", &s[i]);
        }
        if(n<4){
            printf("YES\n");
            continue;
        }
    
        int flag = 0;
        for(int i=0; i<n-4; i++){
            if(s[i]!='a' && s[i+1]!='e' && s[i+2]!='i' && s[i+3]!='o' && s[i+4]!='u'
               && s[i+1]!='a' && s[i+2]!='e' && s[i+3]!='i' && s[i+4]!='o' && s[i+5]!='u'){
                printf("NO\n");
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("YES\n");
    }
    }
    return 0;
}
