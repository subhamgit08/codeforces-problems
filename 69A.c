#include<stdio.h>
#include<stdlib.h>

struct vector{
    int x , y ,z ;   
};

struct vector sumvec(struct vector vec1 , struct vector vec2)
{
    struct vector vec3 = {vec1.x + vec2.x , vec1.y + vec2.y , vec1.z + vec2.z};
    return vec3;
}

int main(){
    int n;
    scanf("%d",&n);
    struct vector *vecs =  (struct vector*)malloc(n*sizeof(struct vector))  ;
    if (vecs == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &vecs[i].x, &vecs[i].y, &vecs[i].z);
    }
    struct vector result = {0,0,0};
    
    for (int i = 0; i < n; i++)
    {
        result = sumvec(result,vecs[i]);
    }
    if (result.x == 0 && result.y == 0 && result.z == 0)
    {
        printf("YES\n");
    }
    else printf("NO\n");
    
    return 0;
}