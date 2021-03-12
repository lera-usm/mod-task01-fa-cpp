unsigned int faStr1(const char* str) 
{
    long long i = 0;
    unsigned int col = 0;
    bool slovo = false;
    bool cifra = false;
    while (str[i] != '\0')
    {
        if (str[i] == ' ') 
        { 
            if (slovo && !cifra) 
            {
                col++;
            }
            slovo = false;
            cifra = false;
        }
        else
        {
            if (str[i] > 47 && str[i] < 58) 
            { 
                cifra = true;
            }
            slovo = true;
        }
        i++;
    }
    if (slovo && !cifra)
    {
        col++;
    }
    return col;
}
unsigned int faStr2(const char* str) 
{
    long long i = 0;
    unsigned int col = 0;
    bool slovo = false;
    bool zbukva = false;
    while (str[i] != '\0') 
    {
        if (str[i] == ' ') 
        { 
            if (slovo && !zbukva) 
            {
                ++col;
            }
            slovo = false;
            zbukva = false;
        }
        else 
        {
            if (str[i] > 64 && str[i] < 91)
            { 
                if (i == 0 || i > 0 && str[i - 1] == ' ') 
                {
                    slovo = true;
                }
                else 
                {
                    zbukva = true;
                }
            }
            else 
            {
                if (!(str[i] > 64 && str[i] < 91) && !(str[i] > 96 && str[i] < 123))
                { 
                    slovo = false;
                }
            }
        }
        i++;
    }
    if (slovo && !zbukva) 
    {
        col++;
    }
    return col;
}
unsigned int faStr3(const char* str)
{
    long long i = 0;
    unsigned int kol_sl = 0;
    unsigned int kol_simv = 0;
    bool slovo = false;
    while (str[i] != '\0') 
    {
        if (str[i] == ' ') 
        { 
            if (slovo)
            {
                kol_sl++;
            }
            slovo = false;
        }
        else
        {
            slovo = true;
            kol_simv++;
        }
        i++;
    }
    if (slovo) 
    {
        kol_sl++;
    }
    if (kol_sl == 0)
    {
        return 0;
    }
    float sr_aref = (float)(kol_simv) / (float)(kol_sl);
    return (int)(sr_aref + 0.5);
}