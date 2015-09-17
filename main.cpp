/*
 * File:   main.cpp
 * Author: bat
 *
 * Created on 29 Август 2015 г., 11:04
 */

#include <fstream>
using namespace std;
 
int main(int argc, char *argv[])
{
    ifstream in(argv[1]);
    unsigned int x, y, n;
    while(in >> x && in >> y && in >> n) {
        int i;
        for (i = 1; i < n; i++) {
            if ((i % x == 0) && (i % y == 0))
                printf("FB ");
            else if ((i % x) == 0)
                printf("F ");
            else if ((i % y) == 0)
                printf("B ");
            else
                printf("%i ", i);
        }
        if ((i % x == 0) && (i % y == 0))
            printf("FB");
        else if ((i % x) == 0)
            printf("F");
        else if ((i % y) == 0)
            printf("B");
        else
            printf("%i", i);
        printf("\n");
    }
    
    return 0;
}