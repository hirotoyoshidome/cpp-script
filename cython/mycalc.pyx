# distutils: language = c++

cdef extern from "sample.hpp":
    int calc_add(int x, int y)

def sample_add(int x, int y):
    cdef:
        int ans
    ans = calc_add(x, y)
    return ans
