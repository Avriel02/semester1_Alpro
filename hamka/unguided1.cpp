#include <iostream> 
using namespace std;
int main()
{
const float k = 273,f = 32;
int pilih;
float Celcius, hasil;
cout << "\t\t"<<"konvensi suhu"<< endl;
cout << "\t"<<"1.Reamur -> Celcius" << endl;
cout << "\t" <<"2.kelvin -> Celcius "<< endl;
cout << "\t" << "3.fahrenheit -> Celcius"<< endl;
cout << "\t" <<" masukan pilihan" << endl;

cin >> pilih;
if(pilih==1){
    cout << endl<< "masukan nilai reamur:";
}
else if(pilih==2){
    cout << endl<< "masukan nilai kelvin: ";
}
else if(pilih==3) {
    cout << endl<< "masukan nilai Fahrenheit: ";
}
else{
    cout << endl<< " tidak valid ";
return 0;
}

cin >> Celcius;
if(pilih==1){
hasil=(float)5/4*Celcius;
}
if(pilih==2){
hasil= (float) Celcius-k;
}
if(pilih==3){
hasil=(float)(Celcius - f)*5/9;
}
cout <<"sama dengan "<< hasil << " Celcius" << endl;
return 0;
}