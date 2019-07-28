void mx_printchar(char c);
void mx_printstr(const char *c);

static void borderw(int width) {
    mx_printchar('<');
        for(int k = 0; k < width; k++) {
            if( k == 0 || k == width - 1) {
                mx_printchar('=');
            }
            else
                mx_printchar('-');
        }
        mx_printchar('>');
        mx_printchar('\n');
}

static void borderl(int iter) {
    if(iter % 2 == 0)
                mx_printchar('*');
            else
                mx_printchar('+');
}

void race00(int map_length, int map_width, int one_y, int one_x) {
    if((map_length > one_y && map_length > 0) && 
        (map_width > one_x && map_width > 0) &&
        (one_y >= 0 && one_x >= 0)) {
        borderw(map_width);
        for(int i = 0; i < map_length; i++) {
            borderl(i);
            for(int j = 0; j < map_width; j++) {
                if(i == one_y && j == one_x)
                    mx_printchar('1');
                else
                    mx_printchar('0');
            }
            borderl(i);
            mx_printchar('\n');
        }
        borderw(map_width);
    }
}
