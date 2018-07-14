#ifndef SIMPLE_H_INCLUDED
#define SIMPLE_H_INCLUDED
#ifdef BUILD_DLL

    #define DLL_EXPORT __declspec(dllexport)

#else

    #define DLL_EXPORT __declspec(dllimport)

#endif

int DLL_EXPORT get_id(void);
int DLL_EXPORT add(int,int);
#endif // SIMPLE_H_INCLUDED
