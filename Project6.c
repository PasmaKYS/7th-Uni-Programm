#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("Ακέραιος:");
    scanf("%d", &a);
    printf("Μη Ακέραιος:");
    scanf(" %f", &b);
    getchar();
    printf("Ο χαρακτήρας είναι:");
    scanf("%c", &c);
    printf("Ο Ακέραιος είναι:%d\nΟ μη ακέραιος είναι:%f\nΟ χαρακτήρας είναι:%c\n\n",a,b,c);
    printf("Το μέγεθος του Ακεραίου είναι:%zu\nΤο μέγεθος του Μη Ακεραίου είναι:%zu\nΤο μέγεθος του Χαρακτήρα είναι:%zu\n\n",sizeof(a),sizeof(b),sizeof(c));
    printf("Το pointer του Ακεραίου είναι:%p\nΤο pointer του Μη Ακεραίου είναι:%p\nΤο pointer του Χαρακτήρα είναι:%p", &a, &b, &c);
    return 0;
}
