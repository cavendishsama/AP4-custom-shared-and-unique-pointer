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

template <typename T>
void UniquePtr<T>::reset(){
    delete _p;
    _p = nullptr;
}

template <typename T>
void UniquePtr<T>::reset(T* input){
    delete _p;
    _p = input;
}
template <typename T>
T* UniquePtr<T>::release(){
    T* temp { _p };
    _p = nullptr;
    return temp;
}

template <typename T>
UniquePtr<T>::operator bool(){
    if (_p == nullptr)
        return false;
    else
        return true;
}