 #include <iostream>
 #include <cmath>

 void calc(double *ptr, int length,double omega, double dt) {
    for (int i = 0; i < length ; i++){
        *(ptr+i) = std::sin(omega*(i*dt));
    }
 }

int main() {
    std::cout << "========================================" << std::endl;
    std::cout << "  V8 CYBER-PHYSICAL ENGINE SIMULATOR    " << std::endl;
    std::cout << "  STATUS: LOGICAL CORE ECU VERIFIED & INITIALIZED  " << std::endl;
    std::cout << "========================================" << std::endl;

    std::cout << "Lets TEST SOMETHING"<< " " << "Some Bullshit Hard Coded Value" << std::endl;
    double rpm = 3000;
    double srate = 1000;
    long double pi = 3.141592653589793;
    double omega = (rpm/60)*2*pi;
    double dt = 1/srate;
    double values[10]={};
    calc (values,10, omega, dt);
    for (int i = 0; i<10; i++){
        std::cout << "Sample" << i << ":" << *(values+i) << std::endl;
    }


    return 0;
}

