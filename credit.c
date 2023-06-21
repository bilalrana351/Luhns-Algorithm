#include<stdio.h>
#include"cs50.h"

int main (void)
{
    // Credit card number
    long long int x;
    do
    {
        x = get_long_long("WHat is your credit card number? ");
    } while ( (x>=0 && x < 1000000000000 ) || ( x >= 10000000000000 && x < 100000000000000 ) || ( x<0 ) || ( x>= 10000000000000000 ) );
    //Last 13 numbers
    long long int a = x % 10;
    long long int B = (x - a)/10;
    int b = B % 10;
    long long int C = (B - b)/10;
    long long int c = C % 10;
    long long int D = (C - c)/10;
    int d = D % 10;
    long long int E = (D - d)/10;
    long long int e = E % 10;
    long long int F = (E - e)/10;
    int f = F % 10 ;
    long long int G = (F - f)/10;
    long long int g = G % 10;
    int H = (G - g)/10;
    int h = H % 10;          
    int I = (H - h)/10;
    int i = I % 10;
    int J = (I - i)/10;
    int j = J % 10;
    int K = (J - j)/10;
    int k = K % 10;
    int L = (K - k)/10;
    int l = L % 10;
    int M = (L - l)/10;
    int m = M % 10;
    int N = (M - m)/10;
    int n = N % 10;
    int O = (N - n)/10;
    int o= O % 10;
    int P = (O - o)/10;
    int p = P % 10;
    // for 13 digits
    if (n == 0 && o == 0 && p == 0 )
    {
      if ( m != 4 )
      {
        printf("INVALID ");
      }
      else if ( m == 4 )
      {
       int S;
       S = ( b * 2);     
      if ( (b * 2 ) >= 10)
      {
        int q = (b * 2) % 10;
        int r = (( b * 2 ) - q) / 10;
        S != (b * 2);
        S = q + r;
      }
       int t;
       t = ( d * 2);         
      if ( (d * 2 ) >= 10)
      {
        int q = (d * 2) % 10;
        int r = (( d * 2 ) - q) / 10;
        t != (d * 2);
        t = q + r;
      }
       int u;
       u = ( f * 2);         
      if ( (f * 2 ) >= 10)
      {
        int q = (f * 2) % 10;
        int r = (( f * 2 ) - q) / 10;
        u != (f * 2);
        u = q + r;
      }
       int v;
       v = ( h * 2);         
      if ( (h * 2 ) >= 10)
      {
        int q = (h * 2) % 10;
        int r = (( h * 2 ) - q) / 10;
        v != (h * 2);
        v = q + r;
      }
       int w;
       w = ( j * 2);                           
      if ( (j * 2 ) >= 10)
      {
        int q = (j * 2) % 10;
        int r = (( j * 2 ) - q) / 10;
        w != (j * 2);
        w = q + r;        
      }
       int X;
       X = ( l * 2);         
      if ( (l * 2 ) >= 10)
      {
        int q = ( l * 2) % 10;
        int r = (( l * 2 ) - q) / 10;
        X != (l * 2);
        X = q + r;
      }
  int s = ( ( S + t + u + v + w + X ) + ( a + c + e + g + i + k + m));
        if ( (s % 10) == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n ");
        }
      }   
    }
 // FOR 15 DIGITS   
 else if ( p ==0 )
 {
    if ( N != 34 && N != 37 )
    {
        printf ("INVALID ");
    }
    else if ( N == 34 || N == 37)
    {
     int S;
     S = ( b * 2 ); 
     if ( (b * 2 ) >= 10)
      {
        int q = (b * 2) % 10;
        int r = (( b * 2 ) - q) / 10;
        S != (b * 2);
        S = q + r;
      }
     int t;
     t = ( d * 2 );       
      if ( (d * 2 ) >= 10)
      {
        int q = (d * 2) % 10;
        int r = (( d * 2 ) - q) / 10;
        t != (d * 2);
        t = q + r;        
      }
      int u;
      u = ( f * 2 );      
      if ( (f * 2 ) >= 10)
      {
        int q = (f * 2) % 10;
        int r = (( f * 2 ) - q) / 10;
        u != (f * 2);
        u = q + r;
      }
     int v;
     v = ( h * 2 );       
      if ( (h * 2 ) >= 10)
      {
        int q = (h * 2) % 10;
        int r = (( h * 2 ) - q) / 10;
        v != (h * 2);
        v = q + r;
      }
     int w;
     w = ( j * 2 );                         
      if ( (j * 2 ) >= 10)
      {
        int q = (j * 2) % 10;
        int r = (( j * 2 ) - q) / 10;
        w != (j * 2);
        w = q + r;
      }
     int X;
     X = ( l * 2 ); 
      if ( (l * 2 ) >= 10)
      {
        int q = ( l * 2) % 10;
        int r = (( l * 2 ) - q) / 10;
        X != (l * 2);
        X = q + r;
      }
     int y;
     y = ( n * 2 );       
      if ( (n * 2 ) >= 10)
      {
        int q = (n * 2) % 10;
        int r = ((n * 2 ) - q) / 10;
        y != (b * 2);
        y = q + r;
      }   
  int s = ( ( S + t + u + v + w + X + y  ) + ( a + c + e + g + i + k + m + o));
  if ( (s % 10) == 0)
  {
    printf("AMEX\n ");
  }
  else
  {
    printf("INVALID\n");
  }  
    }
}
// FOR 16 DIGITS
else
{
    if ( O ==  52 || O == 51 || O == 53 || O == 54 || O == 55 || P == 4)
    {
      int S;
      S = b * 2;
      if ( ( b * 2 ) >= 10)
      {
        int q = (b * 2) % 10;
        int r = (( b * 2 ) - q) / 10;
        S != ( b * 2);
        S = q + r;
      }
      int t;
      t = d * 2;      
      if ( (d * 2 ) >= 10)
      {
        int q = (d * 2) % 10;
        int r = (( d * 2 ) - q) / 10;
        t != ( d * 2);
        t = q + r;
      }
      int u;
      u = f * 2;      
      if ( (f * 2 ) >= 10)
      {
        int q = (f * 2) % 10;
        int r = ( ( f * 2 ) - q) / 10;
        u != ( f * 2 );
        u = q + r;
      }  
      int v;
      v = h * 2;        
      if ( (h * 2 ) >= 10)
      {
        int q = (h * 2) % 10;
        int r = ((h * 2 ) - q) / 10;
        v != ( h * 2);
        v = q + r;
      }
      int w;
      w = j * 2;                        
      if ( (j * 2 ) >= 10)
      {
        int q = (j * 2) % 10;
        int r = (( j * 2 ) - q) / 10;
        w != ( j * 2);
        w = q + r;  
      }
      int X;
      X = l * 2;
      if ( (l * 2 ) >= 10)
      {
        int q = (l * 2) % 10;
        int r = ((l * 2 ) - q) / 10;
        X != ( l * 2);        
        X = ( q + r);
      }
      int y;
      y = n * 2;      
      if ( ( n * 2 ) >= 10)
      {
        int q = (n * 2) % 10;
        int r = ((n * 2 ) - q) / 10;
        y != ( n * 2);        
        y = q + r;
      }
      int z;
      z = p * 2;      
      if ( (p * 2 ) >= 10)
      {
        int q = (p * 2) % 10;
        int r = ((p * 2 ) - q) / 10;
        z != ( p * 2);        
        z = q + r;
      }
  int s = ( ( S + t + u + v + w + X + y + z ) + ( a + c + e + g + i + k + m + o));                 
  if ( s % 10 == 0)
  {
    if ( P == 4 )
    {
    printf("VISA\n");
    }
    else if ( O == 51 || O == 52 || O == 53 || O == 54 || O == 55)
    {
     printf("MASTERCARD\n");
    }
   else
    {
        printf("INVALID\n");
    }
  }
  }
}                                     
}    