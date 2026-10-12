#include <iostream>
using namespace std;
class vehicle{
public:
string brand ="BMW" ;
void hunk(){
    cout<<"hello vehicle";
 }
};
class car: public vehicle{
    public:
    string model = "m5";
};
int main(){
    car c;
    vehicle v;
return 0;
}
