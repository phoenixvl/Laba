#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char surname[50];
    int year;
} humen;

// Функция для сравнения (по году рождения)
int compare(const void *a, const void *b) {
    return ((humen*)a)->year - ((humen*)b)->year;
}

int main() {
    humen source[4], sorted[4];

    printf("Введите данные 4 человек (Имя Фамилия Год):\n");
    for (int i = 0; i < 4; i++) {
        scanf("%s %s %d", source[i].name, source[i].surname, &source[i].year);
    }

    // Копируем данные в другой массив
    memcpy(sorted, source, sizeof(source));

    // Сортируем второй массив
    qsort(sorted, 4, sizeof(humen), compare);

    printf("\nОтсортированный список:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s %s, %d\n", sorted[i].name, sorted[i].surname, sorted[i].year);
    }

    return 0;
}
