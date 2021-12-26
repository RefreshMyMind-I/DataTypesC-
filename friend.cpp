// made by refresh
#include<iostream>

using namespace std;

class Complex{
private:
    int real;
    int img;
public:
    

    void initComplex(){
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> img;
    }

    void display(){
        cout << real << " + " << img << "i" << endl;
    }
   friend void sum(Complex c1, Complex c2,Complex c3);
   

};
void sum(Complex c1, Complex c2,Complex c3){
        c3.real = c1.real + c2.real;
        c3.img = c1.img + c2.img;
    }
int main(){ 

    Complex c1,c2,c3;

    cout<<"Enter first complex number"<<endl;
    c1.initComplex();
    cout << "First Complex Number: ";
    c1.display();

    cout<<"Enter second complex number"<<endl;
    c2.initComplex();
    cout << "Second Complex Number: ";
    c2.display();

    cout<<"Sum of two complex numbers is"<<endl;
    sum(c1,c2,c3);

    c3.display();

    return 0;
}