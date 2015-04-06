#ifndef AVANTGARDESORT_H
#define AVANTGARDESORT_H

template<class T>
class AvantGardeSort {
public:
    T* sort(T* array, int size) const;
};

template<class T>
T* AvantGardeSort<T>::sort(T* array, int size) const {
    return array;
}

#endif
