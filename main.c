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

// #include <stdio.h>
// int main(){
//     int marks;
//     printf("Enter Your marks\n");
//     scanf("%d", &marks);
//     if(marks >= 90 ){
//         printf("You got A+");
//     }
//     if(marks >= 80 && marks <= 89  ){
//         printf("You got A");
//     }
//     if(marks >= 70 && marks <= 79  ){
//         printf("You got A Minor");
//     }
//     if(marks >= 60 && marks <= 79  ){
//         printf("You got B");
//     }
//     if(marks >= 50 && marks <= 59  ){
//         printf("You got C");
//     }
//     if(marks >= 40 && marks <= 49  ){
//         printf("You got D");
//     }
//     if(marks >= 0 && marks <= 39  ){
//         printf("You got E");
//     }
// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////

// writing a progrm to check if number is divisible by 3 

// #include <stdio.h>
// int main(){
//     int marks;
//     printf("Enter Your Number\n");
//     scanf("%d", &marks);
//     marks = marks % 3;
//     if(marks == 0){
//         printf("Divisible");
//     }
//     else{
//         printf("Not divisible");
//     };

// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////

// writing a progrm to check if number is divisible by 3 

// #include <stdio.h>
// int main(){
//     int marks;
//     printf("Enter Your marks\n");
//     scanf("%d", &marks);
//     if(marks >= 11 && marks <= 99){
//         printf("Number is greater then 11 and smaller then 99");
//     }
//     else{
//         printf("Number is not between 11 and 99");
//     };

// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////

// Write a C program that takes hours, minutes and seconds (declare as long int) as input,
// and calculates the total number of seconds.
// Expected Output:
// Input
// hours: 5
// minutes: 37
// seconds: 10
// Total: 20230 seconds


// #include <stdio.h>

// int main(){
//     long int hours, minutes,seconds,total;
//     printf("Enter hours\n");
//     scanf("%d", &hours);
//     printf("Enter minutes\n");
//     scanf("%d", &minutes);
//     printf("Enter seconds\n");
//     scanf("%d", &seconds);

//     total = seconds + ( minutes*60 ) + (hours * 60 *60);

//     printf("Your total in seconds\n%d", total );
    

// return 0 ;
// }

//////////////////////////////////////////////////////////////////////////////////////////////

// Given the following pseudo code, write a program that executes it.
// a. read x
// b. read y
// c. compute p=x*y
// d. compute s=x+y
// e. total=s2+p*(s-x)*(p+y)
// f. print total

#include <stdio.h>

int main(){

    int x,y,p,s,total;

    printf("Enter your number for X ");
    scanf("%d", &x);
    printf("Enter your number for Y ");
    scanf("%d", &y);

    p = x * y;
    s = x + y;

    total = s * 2 + p* (s-x) * (p+y) ;
    printf("Your total is \t%d", total );
}