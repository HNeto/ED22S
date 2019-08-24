#include <stdio.h>
#include <math.h>

// typedef struct polar Polar;
// typedef struct cartesiana Cartesiana;

struct polar {
    float r;
    float a;
};

struct cartesiana {
    float x;
    float y;
};

struct cartesiana converte_polar_cartesiana(struct polar coord_p) {
    struct cartesiana coord_c;
    coord_c.x = coord_p.r * cos(coord_p.a * 3.14 / 180);
    coord_c.y = coord_p.r * sin(coord_p.a * 3.14 / 180);
    return coord_c;
}

int main(void) {
    struct polar coord_p;
    struct cartesiana coord_c;

    coord_p.r = 3;
    coord_p.a = 90;

    coord_c = converte_polar_cartesiana(coord_p);
    printf("Cordenada convertida: %.2f, %.2f\n", coord_c.x, coord_c.y);

    return 0;
}
