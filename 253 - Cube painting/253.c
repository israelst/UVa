#include <stdio.h>

rotate_x(char cube[6]){
    char aux = cube[2];
    cube[2] = cube[1];
    cube[1] = cube[3];
    cube[3] = cube[4];
    cube[4] = aux;
}

rotate_y(char cube[6]){
    char aux = cube[0];
    cube[0] = cube[1];
    cube[1] = cube[5];
    cube[5] = cube[4];
    cube[4] = aux;
}

rotate_z(char cube[6]){
    char aux = cube[0];
    cube[0] = cube[3];
    cube[3] = cube[5];
    cube[5] = cube[2];
    cube[2] = aux;
}

main() {
    int x, y, z, i;
    int w;
    int equal = 0;
    char line[12];
    char cube[6];
    char rotated_cube[6];
    for(w=0;w<3;w++){
        for(i=0;i<6;i++)
            rotated_cube[i] = getchar();
        for(i=0;i<6;i++)
            cube[i] = getchar();
        for(x=0; x<4; x++) {
            for(y=0; y<4; y++) {
                for(z=0; z<4; z++) {
                    if(!strcmp(cube, rotated_cube)){
                        equal = 1;
                        printf("TRUE\n");
                        break;
                    }
                    rotate_z(rotated_cube);
                }
                if(equal)
                    break;
                rotate_y(rotated_cube);
            }
            if(equal)
                break;
            rotate_x(rotated_cube);
        }
        if(!equal)
            printf("FALSE\n");
        equal = 0;
    }
    return 0;
}

