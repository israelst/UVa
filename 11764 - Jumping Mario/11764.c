#include <stdio.h>

main() {
    int cases;
    int qty_walls;
    int i, j;
    int low, high;
    int wall, prev_wall;

    scanf("%d", &cases);
    for(i=1; i<cases+1; i++) {
        low = 0;
        high = 0;
        scanf("%d", &qty_walls);
        scanf("%d", &prev_wall);
        for(j=0; j<qty_walls-1; j++) {
            scanf("%d", &wall);
            if(wall < prev_wall){
                low += 1;
            }else if(wall > prev_wall){
                high += 1;
            }
            prev_wall = wall;
        }
        printf("Case %d: %d %d\n", i, high, low);
    }
    return 0;
}

