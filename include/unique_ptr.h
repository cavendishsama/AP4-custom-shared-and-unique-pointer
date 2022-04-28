#ifndef UNIQUE_PTR
#define UNIQUE_PTR
#include <iostream>
template <typename T>
class UniquePtr {
    public:

        UniquePtr();
        UniquePtr(T* input);
        ~UniquePtr();
        //UniquePtr(const UniquePtr& Ptr) = delete;             in cpp11
        T* get();
        
        
        T& operator*();
        UniquePtr<T>& operator=(const UniquePtr& Ptr) = delete;
        T* operator->();
    private:
        T* _p;
        UniquePtr(const UniquePtr& Ptr);
        // UniquePtr<T>& operator=(const UniquePtr& Ptr);
};

template <typename T>
T* make_unique(T input){
    return new T { input };
}

#include "unique_ptr.hpp"

#endif //UNIQUE_PTR