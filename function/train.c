#include <stdio.h>

int main()
{
    char name[50];
    int age, classType;
    float distance, farePerKm, totalFare, discount = 0, gst = 0;

    printf("Enter passenger name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter distance (km): ");
    scanf("%f", &distance);

    printf("Enter class (1-Sleeper, 2-AC, 3-General): ");
    scanf("%d", &classType);

    // Fare per km
    if (classType == 1)
    {
        farePerKm = 1;
    }
    else if (classType == 2)
    {
        farePerKm = 2;
    }
    else
    {
        farePerKm = 0.5;
    }

    totalFare = distance * farePerKm;

    // Age discount
    if (age < 5)
    {
        totalFare = 0;
    }
    else if (age <= 18)
    {
        discount = totalFare * 0.5;
        totalFare -= discount;
    }
    else if (age > 60)
    {
        discount = totalFare * 0.3;
        totalFare -= discount;
    }

    // GST for AC
    if (classType == 2)
    {
        gst = totalFare * 0.18;
        totalFare += gst;
    }

    printf("\n--- Ticket Details ---\n");
    printf("Name: %s\n", name);

    if (classType == 1)
        printf("Class: Sleeper\n");
    else if (classType == 2)
        printf("Class: AC\n");
    else
        printf("Class: General\n");

    printf("Total Fare: %.2f\n", totalFare);

    return 0;
}