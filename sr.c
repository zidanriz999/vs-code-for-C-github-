void main () {
    int i, j, x = 5, y = 6;  
    for (i = 1; i <= 5; i++) {  
        printf ("%d\n", x++);  
        if (x >= 8) break;  
    }  
    for (i = 1; i <= 5; i++) {  
        if (y >= 10) break;  
        printf("%d\n", ++y);  
    }  
}
