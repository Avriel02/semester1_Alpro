#include <iostream> 
using namespace std;
int main()
{
string gender;
float bb, tb, bb_ideal;

cout << " gender (L/P) :" ;
cin >> gender ;

if  (gender== "L" ){
cout << " berat badan  :" ;
    cin >> bb;
cout << " tinggi badan :" ;
    cin >> tb; }
if (gender =="L")  {
    bb_ideal = (tb - 100 ) - ((tb - 100 ) * 0,1);}

else if (gender == "P"){
    bb_ideal = (tb - 100) - ((tb - 100 ) * 0,15);}

if (bb_ideal !=0){
    if (bb==bb_ideal){
    cout << "berat badan ideal " << bb_ideal << "Kg" << endl;
    cout << "berat badan anda ideal" << endl;}
else if (bb > bb_ideal ){
    cout << "berat badan ideal " << bb_ideal << "Kg" << endl;
    cout << "berat badan anda gemuk" << endl; }   
else {
    cout << "berat badan ideal " << bb_ideal << "Kg" << endl;
    cout << "berat badan anda Kurus" << endl;}    
    }
    return 0;
}