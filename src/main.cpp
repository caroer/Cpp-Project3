/* ===============================================================
 * SF2565 Program construction in C++ for Scientific Computing
 * Project 3: Sophie Malmliden & Caroline Eriksson
 * Date: November 2019
 * ===============================================================
 */
#include "lower_curve.h"
#include "line_v.h"
#include "line_h.h"
#include "Domain.h"
int main() 
{
    // Task 2: Values for the boundary sides
    double pmin0 = -10.0, pmax0 = 5.0, d0 = 10.0;
    double pmin1 = 0.0, pmax1 = 3.0, d1 = 5.0;
    double pmin2 = -10.0, pmax2 = 5.0, d2 = 3.0;
    double pmin3 = 0.0, pmax3 = 3.0, d3 = -10.0;                  
    // Task 2: Creation of the boundary sides
    lower_curve curve_0 = lower_curve(pmin0, pmax0, d0);
    line_v line_v1 = line_v(pmin1, pmax1, d1);
    line_h line_h2 = line_h(pmin2, pmax2, d2);
    line_v line_v3 = line_v(pmin3, pmax3, d3);
    // Task 3: Creation of the domain and corresponding grid
    Domain D = Domain(curve_0, line_v1, line_h2, line_v3);
    D.grid_generation();
    // Task 4: Write the grid to a file
    D.writetofile();
    return 0;
}