#include "cryptlib.h"

#if (defined(OPENSSL_SYS_WINDOWS) || defined(OPENSSL_SYS_WIN32)) && _WIN32_WINNT==0x0602

#include "random.h"
#include <random>

int GetRandom()
{
    static std::random_device engine;
    return engine();
}

#endif
