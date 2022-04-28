template <typename T>
UniquePtr<T>::UniquePtr(){
    _p = nullptr;
}

template <typename T>
UniquePtr<T>::UniquePtr(T* input){
    _p = input;
}

template <typename T>
UniquePtr<T>::~UniquePtr(){
    delete _p;
    _p = nullptr;
}

template <typename T>
T* UniquePtr<T>::get(){
    return _p;
}

template <typename T>
T& UniquePtr<T>::operator*(){
    return *_p;
}

template <typename T>
T* UniquePtr<T>::operator->(){
    return _p;
}