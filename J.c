#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{

    int lili = 0, bili = 0;
    int ara[30];
    int limit = 1000;
    char str[limit];
    int pot, numkey, press, T = 0;
    scanf("%d", &T);
    getchar();
    for (size_t g = 0; g < T; g++)
    {

        for (size_t i = 0, lili = 0, bili = 0; i < 27; i++)
        {

            // printf("%d  ", i);

            if (i == 21)
            {

                ara[i] = lili + bili;
                //printf("i%d: lili %d: -- bili %d\n", i, lili, bili);
                if (i % 3 == 0)
                {
                    bili = 0;
                    lili = lili + 10;
                }
                continue;

                //printf("i%d: -- %d\n",i, ara[i + 1]);
            }
            if (i % 3 == 0)
            {
                bili = 0;
                lili = lili + 10;
            }

            ara[i] = lili + bili;
            bili++;
            //printf("i%d: -- %d\n",i, ara[i]);
        }
        ara[24] = 82;
        ara[25] = 90;
        ara[26] = 91;
        ara[27] = 92;
        ara[28] = 93;

        scanf("%s", str);
        getchar();
        printf("Case %d:\n", g + 1);
        for (size_t i = 0; i < (int)strlen(str); i++)
        {
            pot = ((int)str[i]) - 94;

            numkey = (int)ara[pot] / 10;
            press = (int)ara[pot] % 10;

            printf("%d-%d times\n", numkey, press + 1);
        }
    }

    return 0;
}
