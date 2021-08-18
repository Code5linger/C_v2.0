/*
 * Author: CodeSlinger
 * Date: 17/08/2021
 */
/*
#include <stdio.h>

int main() {
    printf("Hello World\n");
    return 17;
}
*/
/*
int main(){
    printf("\nHi, My name is CodeSlinger\n");
    return 87;
    //Single Line Comment

     Multi Line Comment

}
*/
/*
int main(){
    printf ("\nHi, My name is CodeSLinger\n");
    return 17;
}
*/
/*
int main() {
    printf("Hello World");
    return  87;
}
 */
/*
#include <stdio.h>

int main(){
    printf("Hello World!");
    return 0;
}
 */
/*
#include <stdio.h>

int main(){
    printf("\nHi! My name is Codeslinger.\n");
    return  87;
}*/
/*
#include <stdio.h>
int main(){
    char str[100];
    int i;

    printf("Enter a value:");
    scanf("%d %s", &i, str);

    printf("\nYou entered: %d:::::%s\n", i, str);

    return 0;
}
 */
/*
 * %s       = String            geeksforgeeks
 * %d %i    = Signed Integer    45 | 45
 * %u       = Unsigned Integer 4294967286 | 10
 * %c       = Character         A-Z
 * %f | %e | %E = Floating-point    1.267000e+01
 *
 */
#include <stdio.h>

int main(){
    char str[100];
    int i;

    printf("Enter a number:");
    scanf("%i", &i);

    printf("\nYour number is: %i \n", i);
    return 0;
}