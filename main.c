/////////////////////////////////////////////////////////////////////////////////////////////

// first code to print c language 

// #include <stdio.h>
// int main(){
//     printf("################################################################ \n");
//     printf("\t\twelcome to my profile\n");
//     printf("This is my first code writing in c programming language \n");
//     printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&");
// }

/////////////////////////////////////////////////////////////////////////////////////////////

// code to take input from user and print it 

// #include <stdio.h>
// int main(){
//     int a , b;
//     printf("Print two number you want to print \n");
//     scanf("%d", &a);
//     scanf("%d", &b);
//     printf("%d %d ", a , b);
// return(0);
// }

/////////////////////////////////////////////////////////////////////////////////////////////

// Writting a code to add two number in program

// #include <stdio.h>

// int main(){
//     int a,b,c ;
//     printf("Enter First number you want to add\n");
//     scanf("%d", &a );
//     printf("Enter second number you want to add\n");
//     scanf("%d", &b );
//     c = a + b;
//     printf("Total is: %d", c );
// return(0);
// }

/////////////////////////////////////////////////////////////////////////////////////////////

// Writting a code to subtract two number in program

// #include <stdio.h>

// int main(){
//     int a,b,c ;
//     printf("Enter First number you want to add\n");
//     scanf("%d", &a );
//     printf("Enter second number you want to add\n");
//     scanf("%d", &b );
//     c = a - b;
//     printf("Total is: %d", c );
// return(0);
// }

/////////////////////////////////////////////////////////////////////////////////////////////

// Writting a code to multiply two number in program

// #include <stdio.h>

// int main(){
//     int a,b,c ;
//     printf("Enter First number you want to add\n");
//     scanf("%d", &a );
//     printf("Enter second number you want to add\n");
//     scanf("%d", &b );
//     c = a * b;
//     printf("Total is: %d", c );
// return(0);
// }

//////////////////////////////////////////////////////////////////////////////////////////////

// to print some word like name i.e printing word

// #include <stdio.h>

// int main(){
//     char a[100] ;
//     printf("Write Your name i will give you your name in output \n");
//     scanf("%s", &a);
//     printf("%s", a );
// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////

// writing a progrm to print grave of student

#include <stdio.h>
int main(){
    int marks;
    printf("Enter Your marks\n");
    scanf("%d", &marks);
    if(marks >= 90 ){
        printf("You got A+");
    }
    if(marks >= 80 && marks <= 89  ){
        printf("You got A");
    }
    if(marks >= 70 && marks <= 79  ){
        printf("You got A Minor");
    }
    if(marks >= 60 && marks <= 79  ){
        printf("You got B");
    }
    if(marks >= 50 && marks <= 59  ){
        printf("You got C");
    }
    if(marks >= 40 && marks <= 49  ){
        printf("You got D");
    }
    if(marks >= 0 && marks <= 39  ){
        printf("You got E");
    }
return 0;
}
