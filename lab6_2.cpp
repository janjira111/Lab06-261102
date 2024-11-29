#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg ){
    return deg * M_PI / 180;
}
double rad2deg(double rad ){
    return rad * 180 / M_PI;
}
double findXComponent(double lx1, double lx2, double radx1, double radx2){
    return (lx1 * cos(radx1) ) + (lx2 * cos(radx2) );
}
double findYComponent(double ly1, double ly2 , double rady1, double rady2){
    return (ly1 * sin(rady1) ) + (ly2 * sin(rady2) );
}
double pythagoras(double a, double b){
    return sqrt(pow(a,2) + pow(b,2));
}
void showResult(double a, double b){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
    cout << "Length of the resultant vector = " << a << "\n";
    cout << "Direction of the resultant vector (deg) = " << b << "\n" ;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
