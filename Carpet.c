//
//  main.c
//  FrolovaAlbina - Assignment2
//
//  Created by Альбина Фролова on 10/3/16.
//  Copyright © 2016 Альбина Фролова. All rights reserved.
//

#include <stdio.h>
#define LABOR 0.35
#define TAX 0.085

int DC = 0;

void getData(int* a, int* b, int* c, double* d){
    printf("Length of room (feet)? ");
    scanf("%d", a);
    printf("Width of room (feet)? ");
    scanf("%d", b);
    printf("Customer discount (percent)? ");
    scanf("%d", c);
    printf("Cost per square foot (xxx.xx)? ");
    scanf("%lf", d);
}

int getArea(int l, int w){
    return l * w;
}

void calculateInstalledPrice(double* a, int area, double cost){
    double carpetPrice = area * cost;
    double laborPrice = LABOR * area;
    *a = carpetPrice + laborPrice;
}

void calculateSubtotal(double a, double* b, int disc){
    double temp = a - (a * disc / 100.0);
    *b = temp;
}

void calculateTotal(double* a, double b){
    double temp = b + b * TAX;
    *a = temp;
}

void calculate(double* a, double* b, double* c, int l, int w, double cost, int disc){
    calculateInstalledPrice(a, getArea(l, w), cost);
    calculateSubtotal(*a, b, disc);
    calculateTotal(c, *b);
}

void printMeasurement(int len, int wid){
    printf("\t\tMEASUREMENT");
    printf("\nLength\t\t\t\t\t%i ft\n", len);
    printf("Width\t\t\t\t\t%i ft\n", wid);
    printf("Area\t\t\t\t\t%i square ft\n", getArea(len, wid));
}

void printCharges(double a, double b, double c, int l, int w, double cost, int dC){
    int area = getArea(l, w);
    printf("\t\t CHARGES\n\n");
    printf("DESCRIPTION\tCOST/SQ.FT.\tCHARGE\n");
    printf("-----------    ------------   ----------\n");
    printf("Carpet \t\t%7.2lf\t\t$%7.2lf\n", cost, area*cost);
    printf("Labor\t%15.2f\t\t%8.2lf\n", LABOR, LABOR*area);
    printf("\t\t\t      ----------\n");
    printf("INSTALLED PRICE\t\t\t$%7.2lf\n", a);
    printf("Discount\t%5d%%\t\t%8.2lf\n", dC,a-b);
    printf("\t\t\t      ----------\n");
    printf("SUBTOTAL\t\t\t$%7.2lf\n", b);
    printf("Tax\t\t\t\t  %6.2lf\n", TAX*b);
    printf("TOTAL\t\t\t\t$%7.2lf\n", c);
}

void print(int l, int w, double insPrice, double sub, double tot, double cost, int dc){
    printMeasurement(l, w);
    printCharges(insPrice, sub, tot, l, w, cost, dc);
}

int main(){
    int length, width, discount;
    double cost;
    double installedPrice, subtotal, total;
    getData(&length, &width, &discount, &cost);
    DC = discount;
    calculate(&installedPrice, &subtotal, &total, length, width, cost, discount);
    print(length, width, installedPrice, subtotal, total, cost ,DC);
    return 0;
}
