 #include <iostream>
 #include <cmath>

int main() {
    std::cout << "========================================" << std::endl;
    std::cout << "  V8 CYBER-PHYSICAL ENGINE SIMULATOR    " << std::endl;
    std::cout << "  STATUS: LOGICAL CORE ECU INITIALIZED  " << std::endl;
    std::cout << "========================================" << std::endl;

    double t= 1.5;
    double omega=0.5;
    double ans = std::sin(t*omega);
    std::cout << "The calculated answer is:"<< ans << std::endl;

    return 0;
}

