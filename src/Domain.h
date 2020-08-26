/* ===============================================================
 * SF2565 Program construction in C++ for Scientific Computing
 * Project 3: Sophie Malmliden & Caroline Eriksson
 * Date: November 2019
 * ===============================================================
 */
#ifndef DOMAIN_H
#define DOMAIN_H
class Domain 
{
public:
    Domain(lower_curve& curve_0, line_v& line_v1, 
           line_h& line_h2, line_v& line_v3);
    // Task 3: Function generating grid
    void grid_generation(); 
    // Task 4: Function writing the grid to a file
    void writetofile();   
private:
    // Grid intervals
    const static int n = 49, m = 19;  
    // Interpolated grid points
    double x[n + 1][m + 1], y[n + 1][m + 1]; 
    // Grid points for boundary curve 0
    lower_curve curve_0;
    double* x_0, * y_0; 
    // Grid points for boundary curve 1
    line_v line_v1; 
    double* x_1, * y_1; 
    // Grid points for boundary curve 2
    line_h line_h2;
    double* x_2, * y_2; 
    // Grid points for boundary curve 3
    line_v line_v3;
    double* x_3, * y_3; 
}; 
#endif