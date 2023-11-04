#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int lis( int* a, int N ) {
  int *best, i, j, max = INT_MIN;

  best = (int*) malloc ( sizeof( int ) * N );
  for ( i = 0; i < N; i++ ) best[i] = 1;
    for ( i = 1; i < N; i++ )

      for ( j = 0; j < i; j++ )
      {

          if ( a[i] > a[j] && best[i] < best[j] + 1 )
          {
            best[i] = best[j] + 1;
            if(max < best[i])
                  max = best[i];
           }         
       }

    free( best );


   return max;
}

int main(){


  int b[] = { 9,2,5,3,7,11,8,10,13,6 };
  int n=sizeof(b)/sizeof(int);
  
  printf("Length of LIS: %d\n", lis( b, n ) );
}