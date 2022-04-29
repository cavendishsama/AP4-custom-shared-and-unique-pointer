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

        SharedPtr<T>& operator =(const SharedPtr& pointer);

    private:
        T* _p;
        int* counter;
};

template <typename T>
T* make_shared(T input){
    return new T { input };
}

#include "shared_ptr.hpp"


#endif //SHARED_PTR