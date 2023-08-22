// #include<stdio.h>
// // it is a preprocessing command.
// // stdio.h is the file and the content of that file 
// //file are required while executing the code

// int main()
// {
//     // from here the programe starts.
//     // here main is the function
//     // main returns int
//     // that int goes to the operating system
//      printf("Snehal");
//      return 0;
//      //  sub kuch tik thak chal to ye return mai operating system ko Zero dega

// }

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("The sum of a and b is %d", a+b);
    return 0;
}