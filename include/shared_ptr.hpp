template <typename T>
SharedPtr<T>::SharedPtr(T* input){
    _p = input;
    counter = new int { 1 };
}

template <typename T>
SharedPtr<T>::SharedPtr(){
    _p = nullptr;
    counter = new int { 1 };
}

template <typename T>
SharedPtr<T>::SharedPtr(const SharedPtr& pointer){
    std::cout << "copy constructor______" << std::endl;
    counter = pointer.counter;              
    _p = pointer._p;
    (*counter)++;
}

template <typename T>
SharedPtr<T>::~SharedPtr(){
    _p = nullptr;
    delete _p;
    _p = nullptr;
    --(*counter);
    if(*counter == 0){
        delete counter;
        counter = new int {};
    }
}

template <typename T>
SharedPtr<T>& SharedPtr<T>::operator=(const SharedPtr& pointer){
    _p = pointer._p;
    return *this;
}
template <typename T>
int SharedPtr<T>::use_count(){
    return *counter;
}

template <typename T>
T* SharedPtr<T>::get(){
    return _p;
}

template <typename T>
T& SharedPtr<T>::operator*(){
    return *_p;
}

template <typename T>
T* SharedPtr<T>::operator->(){
    return _p;
}

template <typename T>
void SharedPtr<T>::reset(){
    delete _p;
    delete counter;
    _p = nullptr;
    counter = new int{};
}

template <typename T>
void SharedPtr<T>::reset(T* input){
    delete _p;
    _p = input;
}

template <typename T>
SharedPtr<T>::operator bool(){
    if (_p == nullptr)
        return false;
    else
        return true;
}