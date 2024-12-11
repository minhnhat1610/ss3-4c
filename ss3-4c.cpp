#include <stdio.h>

int main() {
    float math, literature, english, total, average;

    printf("Nhập điểm Toán: ");
    scanf("%f", &math);

    printf("Nhập điểm Văn: ");
    scanf("%f", &literature);

    printf("Nhập điểm Anh: ");
    scanf("%f", &english);

    total = math + literature + english;
    average = total / 3;

    printf("Tổng điểm: %.2f\n", total);
    printf("Điểm trung bình: %.2f\n", average);

    return 0;
}