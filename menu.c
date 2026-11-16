#include <stdio.h>

void writeMenu(){
    const char menuHeader[] = "==============";
    const char menuTitle[] = "Aplikacja Mini-Bank";
    const char menu1Option[] = "Sprawdz Saldo";
    const char menu2Option[] = "Wpladz pieniadze";
    const char menu3Option[] = "Wyplac pieniadze";
    const char menu4Option[] = "Historia operacji";
    const char menu5Option[] = "wyjdz";
    const char prompt[] = "wybierz opcje";

      const char * menulist[] = {
        menuHeader , menuTitle,
        menuHeader, menu1Option,
        menu2Option, menu3Option,
        menu4Option, menu5Option,
        menuHeader, prompt

      };

    for (int i=0; i<10; i++){
        printf("%s\n", menulist[i]);
    }
}

int menu(){
    int response = 0;
    while (1==1){
    writeMenu();
    scanf("%d", &response);
    if (response == 1)
        printf("wybrales saldo konta\n");
    if (response == 2)
        printf("wybrales wplac pieniadze\n");
    if (response == 3)
        printf("wybrales wyplac pieniadze\n");
    if (response == 4)
        printf("wybrales historia konta\n");
    if (response == 5)
        break;
    }
    return 0;
}