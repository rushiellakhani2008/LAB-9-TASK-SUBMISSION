#include <stdio.h>

void printData(void *ptr, char type);
int main()
{
    int productID = 128;
    float price = 304.26;
    char category = 'F';

    printData(&productID, 'i'); 
    printData(&price, 'f');      
    printData(&category, 'c');  
    
    return 0;
}

void printData(void *ptr, char type){
    switch (type)
    {
        case 'i':   // integer
            printf("Product ID: %d\n", *(int*)ptr);
            break;

        case 'f':   // float
            printf("Price: %.2f\n", *(float*)ptr);
            break;

        case 'c':   // character
            printf("Category Code: %c\n", *(char*)ptr);
            break;

        default:
            printf("Invalid type code!\n");
    }
}
