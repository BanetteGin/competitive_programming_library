#ifndef BANETTEGIN_HOGE_HPP_INCLUDED
#define BANETTEGIN_HOGE_HPP_INCLUDED

namespace BanetteGin {

template <class T>
T HomogenousProduct(T m, T n) {
    T ret = 1;
    for (long long int i = m + n - 1; i >= m; --i) {
        ret = ret * i;
    }
    for (long long int i = m - 1; i >= 1; --i) {
        ret = ret / i;
    }
    return ret;
}

}  // namespace BanetteGin

#endif