#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
//1 feet = 12 inch
int main() {
    double UP, D, L, B, P, DOWN, V;
    const double pi = acos(-1);//armazena o valor de PI, também poderia usar M_PI
    int cases = 0;
    while(scanf("%lf", &UP) == 1) {
        if(UP < 1)  break;
        scanf("%lf %lf %lf %lf %lf %lf", &D, &L, &B, &P, &DOWN, &V);
        int runtime = (int)ceil(V/B - 0.000000000001); // quantas viagens serão dadas
        int i;
        double time = 0, oL = L;
        for(i = 0; i < runtime; i++) {
            time += UP+DOWN;
            time += sqrt(2*L/(32.2*12));
            time += L/P;
            L += 4*B*12*12*12/(D*D*pi);
        }
        if(cases)   puts("");
        printf("Scenario %d:\n", ++cases);
        printf("     up hill         %10.2lf sec\n", UP);
        printf("     well diameter   %10.2lf in\n", D);
        printf("     water level     %10.2lf in\n", oL);
        printf("     bucket volume   %10.2lf cu ft\n", B);
        printf("     bucket ascent rate%8.2lf in/sec\n", P);
        printf("     down hill       %10.2lf sec\n", DOWN);
        printf("     required volume %10.2lf cu ft\n", V);
        printf("     TIME REQUIRED   %10.2lf sec\n", time);
    }
    return 0;
}
