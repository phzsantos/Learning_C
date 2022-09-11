#include <stdio.h>

int main()
{
    FILE *arquivo;
    int contador_a = 0, contador_b = 0, contador_c = 0, contador_d = 0, contador_e = 0, contador_f = 0, contador_g = 0, 
        contador_h = 0, contador_i = 0, contador_j = 0, contador_k = 0, contador_l = 0, contador_m = 0, contador_n = 0,
        contador_o = 0, contador_p = 0, contador_q = 0, contador_r = 0, contador_s = 0, contador_t = 0, contador_u = 0,
        contador_v = 0, contador_w = 0, contador_x = 0, contador_y = 0, contador_z = 0;
    char caractere;

    arquivo = fopen("arq.txt", "r");

    while ((caractere = getc(arquivo)) != EOF)
    {
        if (caractere < 97 && caractere != '\n')
        {
            caractere += 32;
        }

        switch (caractere)
        {
            case 'a':
                contador_a++;
                break;
            case 'b':
                contador_b++;
                break;
            case 'c':
                contador_c++;
                break;
            case 'd':
                contador_d++;
                break;
            case 'e':
                contador_e++;
                break;
            case 'f':
                contador_f++;
                break;
            case 'g':
                contador_g++;
                break;
            case 'h':
                contador_h++;
                break;
            case 'i':
                contador_i++;
                break;
            case 'j':
                contador_j++;
                break;
            case 'k':
                contador_k++;
                break;
            case 'l':
                contador_l++;
                break;
            case 'm':
                contador_m++;
                break;
            case 'n':
                contador_n++;
                break;
            case 'o':
                contador_o++;
                break;
            case 'p':
                contador_p++;
                break;
            case 'q':
                contador_q++;
                break;
            case 'r':
                contador_r++;
                break;
            case 's':
                contador_s++;
                break;
            case 't':
                contador_t++;
                break;
            case 'u':
                contador_u++;
                break;
            case 'v':
                contador_v++;
                break;
            case 'w':
                contador_w++;
                break;
            case 'x':
                contador_x++;
                break;
            case 'y':
                contador_y++;
                break;
            case 'z':
                contador_z++;
                break;
            default:
                break;
        }
    }

    fclose(arquivo);

    printf("a: %d, b: %d, c: %d, d: %d, e: %d, f: %d, g: %d, h: %d, i: %d, j: %d, k: %d, l: %d, m: %d, n: %d, o: %d, p: %d, q: %d, r: %d, s: %d, t: %d, u: %d, v: %d, w: %d, x: %d, y: %d, z: %d\n", contador_a, contador_b, contador_c, contador_d, contador_e, contador_f, contador_g, contador_h, contador_i, contador_j, contador_k, contador_l, contador_m, contador_n, contador_o, contador_p, contador_q, contador_r, contador_s, contador_t, contador_u, contador_v, contador_w, contador_x, contador_y, contador_z);

    return 0;
}