#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char surname[50];
    int year;
} humen;

int compare(const void *a, const void *b) {
    return ((humen*)a)->year - ((humen*)b)->year;
}

int main() {
    humen source[4], sorted[4];

    printf("Введите данные 4 человек (Имя Фамилия Год):\n");
    for (int i = 0; i < 4; i++) {
        scanf("%s %s %d", source[i].name, source[i].surname, &source[i].year);
    }

    memcpy(sorted, source, sizeof(source));
   
    qsort(sorted, 4, sizeof(humen), compare);

    printf("\nОтсортированный список:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s %s, %d\n", sorted[i].name, sorted[i].surname, sorted[i].year);
    }

    return 0;
}


#include <stdio.h>    // printf, scanf
#include <stdlib.h>   // qsort
#include <string.h>   // memcpy

typedef struct {
    char name[50];     // строка до 49 символов — имя
    char surname[50];  // строка до 49 символов — фамилия
    int year;          // целое число — год рождения
} humen;               // псевдоним типа: теперь можно писать humen вместо struct humen

int compare(const void *a, const void *b) {   // принимает два указателя на void —
                                              // qsort не знает тип данных заранее
    return ((humen*)a)->year - ((humen*)b)->year;
    // приводим void* к humen*, обращаемся к полю year
    // если результат < 0 → a стоит раньше b (сортировка по возрастанию)
    // если результат > 0 → b стоит раньше a
    // если результат = 0 → элементы равны
}

humen source[4], sorted[4];
// source — исходный массив, который пользователь заполняет вручную
// sorted — копия, которую будем сортировать (source остаётся нетронутым)

printf("Введите данные 4 человек (Имя Фамилия Год):\n");

for (int i = 0; i < 4; i++) {           // цикл 4 раза — по одному человеку
    scanf("%s %s %d",                    // читаем строку, строку, целое число
          source[i].name,               // куда записать имя i-го элемента
          source[i].surname,            // куда записать фамилию
          &source[i].year);             // куда записать год (&, т.к. нужен адрес int)
}

memcpy(sorted, source, sizeof(source));
// копирует sizeof(source) байт из source в sorted
// sizeof(source) = 4 * sizeof(humen) — весь массив целиком

qsort(sorted,        // массив для сортировки
      4,             // количество элементов
      sizeof(humen), // размер одного элемента в байтах — чтобы qsort знал шаг
      compare);      // указатель на функцию сравнения

printf("\nОтсортированный список:\n");

for (int i = 0; i < 4; i++) {
    printf("%s %s, %d\n",        // шаблон строки
           sorted[i].name,       // имя i-го элемента отсортированного массива
           sorted[i].surname,    // фамилия
           sorted[i].year);      // год рождения
}
