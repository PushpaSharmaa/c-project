#include<stdio.h>

int main() {
    printf("1=Burger \n2=Fries \n3=Sandwitch \n4=Pasta \n5=Pizza \n");

    char food;
    int x;
    
    printf("Enter your choice:");
    scanf("\n %c", &food);

    switch(food)
    {
        case '1':
        x=99;
        printf("Food Item=Burger \n Price=Rs%d",x);
        break;

        case '2':
        x=149;
        printf("Food Item=Fries \n Price=Rs%d",x);
        break;

        case '3':
        x=189;
        printf("Food Item=Sandwitch \n Price=Rs%d",x);
        break;

        case '4':
        x=249;
        printf("Food Item=Pasta \n Price=Rs%d",x);
        break;

        case '5':
        x=199;
        printf("Food Item=Pizza \n Price=Rs%d",x);
        break;

        default:
        printf("Invalid Choice!");

    }

}