#pragma once
#include <iostream>

class BigMemoryPool {
public:
    BigMemoryPool(){
        std::cout << "blank ctr" << std::endl;
    }
    ~BigMemoryPool() {
        if (_pool != nullptr) {
            delete _pool;
        }
    }
private:
    char* _pool;
};