#include "alice_lib.h"

#include "platform.h"

#define APIENTRY
#include "glcorearb.h"

#ifdef _WIN32
#include "win32_platform.cpp"
#endif

#include "gl_renderer.h"

int main()
{
    platform_create_window(1200, 720, "ALICE");
    while(running)
    {
        platform_update_window();

    }
    return 0;
}