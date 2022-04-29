#ifndef SHARED_PTR
#define SHARED_PTR
#include <iostream>

template <typename T>
class SharedPtr {
    public:
        SharedPtr(T* input);
        SharedPtr();
        SharedPtr(const SharedPtr& pointer);
        ~SharedPtr();


    private:
        T* _p;
};

template <typename T>
T* make_shared(T input){
    return new T { input };
}

#include "shared_ptr.hpp"


#endif //SHARED_PTR