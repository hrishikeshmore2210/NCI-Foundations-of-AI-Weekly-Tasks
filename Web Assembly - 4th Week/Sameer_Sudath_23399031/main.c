#include <stdio.h>
#include <emscripten/emscripten.h>

EMSCRIPTEN_KEEPALIVE
int compute_product() {
    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int product = 1;
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < length; i++) {
        product *= numbers[i];
    }

    return product;
}

int main() {
    printf("WebAssembly Module Loaded!\n");
    return 0;
}
