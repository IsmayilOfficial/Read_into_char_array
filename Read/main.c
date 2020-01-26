#include <stdio.h>
 
int main()
{
    int c, i, j, row, col, nl, cr;
     
    row = col = nl = cr = 0;
     
    FILE *fp = fopen("file.txt", "r");
 
    // Figure out how many rows and columns the text file has
    while ((c = getc(fp)) != EOF)
    {
        if (c == '\n')
            nl++;
        if (c == '\r')
            cr++;
         
        col++;
         
        if (c == '\n')
            row++;
         
        putchar(c);
    }
 
    col = (col - (nl + cr));
    col = (int) (col/row);

 
     
    // read letters into array
 
    char arr[row][col];
 
    if ( fp )
    {
        for ( ;; )
            {
            c = getc(fp);
                if ( c == EOF )
                {
                        break;
                }
                if ( c != '\n' && c != '\r' )
                {
                        arr[i][j] = c;
                        if ( ++j >= col )
                        {
                            j = 0;
                            if ( ++i >= row )
                            {
                                break;
                            }
                        }
                }
            }
        fclose(fp);
    }
            
 
}
