#ifndef _FUNCTION_TEMPLATES_H
#define _FUCNTION_TEMPLATES_H
/*
 * File: function_templates.h
 * Author: Charles, Liu.
 */

template <typename T>
inline T const & Max(T const &a, T const &b) {
    return a < b ? b : a;
}

#endif
