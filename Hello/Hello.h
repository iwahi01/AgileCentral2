#ifdef HELLO_EXPORTS
#define HELLO_API __declspec(dllexport)
#else
#define HELLO_API __declspec(dllimport)
#endif

extern HELLO_API void Hello();

HELLO_API void Hello();