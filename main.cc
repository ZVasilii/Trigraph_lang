#include "driver.hh"

int main(int argc, char** argv) {
     if(argc < 2) {
        std::cerr << "Expected input file" << std::endl;
        return 0;
    } 

    try {
        std::ifstream in(argv[1], std::ifstream::in);
        yy::Driver driver(in, std::cout);
        driver.parse();
        driver.dumpIR(std::cout);
    } catch(std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }    
}