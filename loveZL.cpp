//
//#include <stdio.h>
//#include <math.h>
//
//float f(float x, float y, float z)
//{
//    float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
//    return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
//}
//
//float h(float x, float z)
//{
//    for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
//    {
//        if (f(x, y, z) <= 0.0f)
//            return y;
//    }
//    return 0.0f;
//}
//
//int main(int argc, char* argv[])
//{
//    for (float z = 1.5f; z > -1.5f; z -= 0.05f)
//    {
//        for (float x = -1.5f; x < 1.5f; x += 0.025f)
//        {
//            float v = f(x, 0.0f, z);
//            if (v <= 0.0f)
//            {
//                float y0 = h(x, z);
//                float ny = 0.01f;
//                float nx = h(x + ny, z) - y0;
//                float nz = h(x, z + ny) - y0;
//                float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
//                float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
//                putchar(".:-=+*#%@"[(int)(d * 5.0f)]);
//            }
//            else
//                putchar(' ');
//        }
//        putchar('\n');
//    }
//    printf("\n首先呢，我想说:Happy birthday my darling ,i love you\n欢迎来到21岁的第一天\n时光漫漫，生活不停推着我们向前\n我没有什么大的理想，只希望以后的生活都能够有你在身旁。\n和你在一起，感觉做什么事情都有奔头，每天都能够有动力\n生活不总是美好的，可是有你在身边，总感觉美好的人生就是这样的，有了你，我就能够很快乐。\n Your future starts right here,right now,not tomorrow\n\t最后，生日快乐哦（づ￣3￣）づ╭❤️～（づ￣3￣）づ╭❤️～（づ￣3￣）づ╭❤️～（づ￣3￣）づ╭❤️～\n\3t你的小宝贝\n\3t郝海程\n\3t2022.4.15(农历三月十五)\n\3t(❤️ ω ❤️) ");
//    getchar();
//}