#include <iostream>
#include <cstdio>
#include <thread>
#include <chrono>

void clearScreen() {
    for (int i = 0; i < 100; ++i) {
        std::cout << "\n";
    }
}

void zamienLitery(char *tekst)
{
    while (*tekst)
    {
        if ('a' <= *tekst && *tekst <= 'z')
        {
            *tekst = *tekst - ('a' - 'A'); // mała -> duża
        }
        else if ('A' <= *tekst && *tekst <= 'Z')
        {
            *tekst = *tekst + ('a' - 'A'); // duża -> mała
        }
        tekst++;
    }
}

int main()
{
    char tekst[256];


    printf("Podaj tekst: ");
    fgets(tekst, sizeof(tekst), stdin);



    zamienLitery(tekst);

    clearScreen();
    printf("1%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("3%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("6%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("9%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("15%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("21%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("26%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("29%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("33%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("37%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("41%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("55%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("61%\n");
    std::this_thread::sleep_for(std::chrono::seconds(2));
    clearScreen();
    printf("62%\n");
    std::this_thread::sleep_for(std::chrono::seconds(2));
    clearScreen();
    printf("63%\n");
    std::this_thread::sleep_for(std::chrono::seconds(4));
    clearScreen();
    printf("78%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("81%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("89%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("92%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("95%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("100%\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();
    printf("Po zamianie liter: %s\n", tekst);


    return 0;
}
