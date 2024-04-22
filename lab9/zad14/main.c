#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

void wstrCopyNew(wchar_t txt1[], wchar_t txt2[]){
    int i=0;
    while(txt1[i] !=0){
        txt2[i] = txt1[i];
        i++;
    }
    txt2[i] = 0;
}

int main()
{
    setlocale(LC_ALL,"");
    wchar_t n1[] = L"ŁÓDKA";
    wchar_t n2[] = L"informatyka";
    wprintf(L"%s %s\n", n1, n2);
    wstrCopyNew(n1, n2);
    wprintf(L"%s %s\n", n1, n2);
    return 0;
}
