#include <stdio.h>
#include <math.h>

#define PI 3.14

typedef struct polar Polar;
typedef struct cartesiano Cartesiano;
struct polar {
    float raio;
    float argumento;
};

struct cartesiano {
    float x;
    float y;
};

int main(void){
    Polar coord_original;
    Cartesiano coord_convertida;
    printf("Informe o raio: ");
    scanf("%f", &coord_original.raio);
    printf("Informe o argumento: ");
    scanf("%f", &coord_original.argumento);

    coord_convertida.x = coord_original.raio * cos(PI * coord_original.argumento / 180);
    coord_convertida.y = coord_original.raio * sin(PI * coord_original.argumento / 180);

    printf("Coordenada no plano cartesino: %.2f, %.2f",
            coord_convertida.x, coord_convertida.y);

    return 0;
}
