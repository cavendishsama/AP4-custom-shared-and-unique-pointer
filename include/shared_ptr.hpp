template <typename T>
SharedPtr<T>::SharedPtr(T* input){
    _p = input;
    // counter = new int { 1 };
}

template <typename T>
SharedPtr<T>::SharedPtr(){
    _p = nullptr;
    // counter = new int { 1 };
}

template <typename T>
SharedPtr<T>::SharedPtr(const SharedPtr& pointer): _p { pointer._p }{
    // std::cout << "copy constructor______" << std::endl;
    // _p = pointer._p;
    // counter = new int { 1 };
}

template <typename T>
SharedPtr<T>::~SharedPtr(){
    _p = nullptr;
    delete _p;
    _p = nullptr;
    // --(*counter);
}

template <typename T>
SharedPtr<T>& SharedPtr<T>::operator=(const SharedPtr& pointer){
    _p = pointer._p;
    return *this;
}