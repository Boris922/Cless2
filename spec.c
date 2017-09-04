#include <stdio.h>

int main()
{
    int age, weight;
    char name[50];
    printf("Введите имя: ");
    scanf("%s", name);
    printf("Возраст: ");
    scanf("%d", &age);
    printf("Введите вес: ");
    scanf("%d", &weight);
    printf("Вывод: \n");
    printf("Ваше имя %s, ваш возраст %d, ваш вес - %d\n", name, age, weight);
    printf("Адрес переменной - 0x%p\n", &name);
}