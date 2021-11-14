#include<stdio.h>
#include<math.h>

int main()
{
double R1 = 500; /*Der erste Wert R1 des Widerstandes*/
double R2 = 200; /*Der Wert R2*/
double R3 = 100; /*Widerstand R3*/
double R_ges;
double X; /*R_ges für Parallelschaltung*/
double R_Unbekannt; /*Wheatstonesche Messbrücke*/
printf("R1 = %.2f Ohm\n", R1);
printf("R2 = %.2f Ohm\n", R2);
printf("R3 = %.2f Ohm\n\n", R3);
/*Berechnung der Reihenschaltng*/

R_ges = R1 + R2 + R3;
printf("R_ges = %f + %f + %f = %f Ohm\n",R1,R2,R3, R_ges);

/*Berechnung der Parallelschaltung*/
X = 1/R1 + 1/R2 + 1/R3;
printf(" X = 1/%f + 1/%f + 1/%f = %f Ohm\n",R1, R2, R3, X);/*Ergebniss als ein Zahl mit Nachkommastelle*/

/*Berechnung der Wheatstonesche Messbrücke*/
R_Unbekannt = R3 * (R1 / R2);
printf("R_Unbekannt = %f * (%f / %f) = %f Ohm\n", R3, R1, R2, R_Unbekannt);

    return 0;
}
