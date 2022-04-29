template <typename T>
SharedPtr<T>::SharedPtr(T* input){
    _p = input;
}

template <typename T>
SharedPtr<T>::SharedPtr(){
    _p = nullptr;
}

template <typename T>
SharedPtr<T>::SharedPtr(const SharedPtr& pointer): _p { pointer._p }{
    std::cout << "copy constructor______" << std::endl;
    // _p = pointer._p;
}

template <typename T>
SharedPtr<T>::~SharedPtr(){
    _p = nullptr;
    delete _p;
    _p = nullptr;
}
