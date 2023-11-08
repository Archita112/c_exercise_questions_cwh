//you have a travel agency and you want to take the details of the driver
//1. name
//2. driving license number
//3. route
//4. kms
//use structure

#include<stdio.h>
#include<string.h>

struct drivers_details
{
    char name[10];
    char license_number[10];
    char route[10];
    int kms;
};

int main(){
    struct drivers_details driver1;
    struct drivers_details driver2;

    strcpy(driver1.name, "Raju");
    strcpy(driver1.license_number, "974DHY");
    strcpy(driver1.route, "Shantinagar");
    driver1.kms = 90;

    printf("Details of Driver 1\n");
    printf("name: %s\n", driver1.name);
    printf("license_number: %s\n", driver1.license_number);
    printf("route: %s\n", driver1.route);
    printf("kms: %d\n", driver1.kms);

    strcpy(driver2.name, "Bablu");
    strcpy(driver2.license_number, "98HE5I");
    strcpy(driver2.route, "Kawdapeth");
    driver2.kms = 48;

    printf("\nDetails of Driver 2\n");
    printf("name: %s\n", driver2.name);
    printf("license_number: %s\n", driver2.license_number);
    printf("route: %s\n", driver2.route);
    printf("kms: %d\n", driver2.kms);

    return 0;
}
