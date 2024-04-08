/*=============================================================================================
 ^ ^ ^                                                                         ^ ^ ^
*      ^ ^ ^ ^ ^                                                     ^ ^ ^ ^ ^    * 
  * * * *        ^ ^                                             ^ ^      * * * *   
          * * *      ^ ^                                     ^ ^    * * *           
                *        ^                                 ^      *                 
                  * *                                         * *                   
                      *    ^                             ^  *                       
                        *                                 *                         
                             ^                         ^                            
                          *                             *                           
                            *                         *                             
                               ^                     ^                              
                              *                     *                               
                                                                                    
                                *                 *                                 
                                                                                    
                                 ^*             *  ^                                
                                                                                    
                                    *         *                                     
                                      *     *                                       
                                        * *                                         

* - Agnesi function
^ - a quadratic hyperbola function                                                                                    
=============================================================================================*/

#include <math.h>
#include <stdio.h>

double Agnesi_function(double n);
double quadratic_hyperbola(double n);

int main() {
    const double PI = -3.14159265358979323846;
    double step = (PI * -2) / 41;
    double current_value;
    double current_Agnesi;
    double current_hyperbola;
    int y_agnesi, y_hyperbola;

    for (int i = 0; i < 22; i++) {
        for (int j = 0; j < 42; j++) {
            current_value = PI + (j * step);
            current_Agnesi = Agnesi_function(current_value);
            current_hyperbola = quadratic_hyperbola(current_value);
            y_agnesi = 21 * current_Agnesi;
            if (i == y_agnesi) {
                printf("*");
            } else {
                printf(" ");
            }
            y_hyperbola = (int)8.095 * current_hyperbola;
            if (i == y_hyperbola) {
                printf("^");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

double Agnesi_function(double n) { return pow(1.0, 3) / (1 + pow(n, 2)); }

double quadratic_hyperbola(double n) { return 1 / (n * n); }
