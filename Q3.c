#include <stdio.h>

int main() {
    int len=
    printf("Enter the Length %d",len);
    scanf("%d",&len);
    
    int bre=
    printf("Enter the Breadth %d",bre);
    scanf("%d",&bre);
    
    int area=(len*bre);
    int perimeter=(2*(len+bre));
    
    printf("The Area is %d",area);
    printf("The Perimeter is %d",perimeter);

    return 0;
}