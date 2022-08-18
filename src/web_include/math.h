#pragma once

double acos(double __x);
double asin(double __x);
double atan(double __x);
double atan2(double __y, double __x);
double cos(double __x);
double sin(double __x);
double tan(double __x);
double cosh(double __x);
double sinh(double __x);
double tanh(double __x);
double acosh(double __x);
double asinh(double __x);
double atanh(double __x);
double exp(double __x);
double frexp(double __x, int* __exponent);
double ldexp(double __x, int __exponent);
double log(double __x);
double log10(double __x);
double modf(double __x, double* __iptr);
double expm1(double __x);
double log1p(double __x);
double logb(double __x);
double exp2(double __x);
double log2(double __x);
double pow(double __x, double __y);
double sqrt(double __x);
double hypot(double __x, double __y);
double cbrt(double __x);
double ceil(double __x);
double fabs(double __x);
double floor(double __x);
double fmod(double __x, double __y);
int isinf(double __value);
int finite(double __value);
double drem(double __x, double __y);
double significand(double __x);
double copysign(double __x, double __y);
double nan(const char* __tagb);
int isnan(double __value);
double j0(double);
double j1(double);
double jn(int, double);
double y0(double);
double y1(double);
double yn(int, double);
double erf(double);
double erfc(double);
double lgamma(double);
double tgamma(double);
double gamma(double);
double lgamma_r(double, int* __signgamp);
double rint(double __x);
double nextafter(double __x, double __y);
double nexttoward(double __x, long double __y);
double remainder(double __x, double __y);
double scalbn(double __x, int __n);
int ilogb(double __x);
double scalbln(double __x, long int __n);
double nearbyint(double __x);
double round(double __x);
double trunc(double __x);
double remquo(double __x, double __y, int* __quo);
long int lrint(double __x);
long long int llround(double __x);
double fdim(double __x, double __y);
double fmax(double __x, double __y);
double fmin(double __x, double __y);
double fma(double __x, double __y, double __z);
double scalb(double __x, double __n);
float acosf(float __x);
float asinf(float __x);
float atanf(float __x);
float atan2f(float __y, float __x);
float cosf(float __x);
float sinf(float __x);
float tanf(float __x);
float coshf(float __x);
float sinhf(float __x);
float tanhf(float __x);
float acoshf(float __x);
float asinhf(float __x);
float atanhf(float __x);
float expf(float __x);
float frexpf(float __x, int* __exponent);
float ldexpf(float __x, int __exponent);
float logf(float __x);
float log10f(float __x); float __log10f(float __x);
float modff(float __x, float* __iptr);
float expm1f(float __x);
float log1pf(float __x);
float logbf(float __x);
float exp2f(float __x);
float log2f(float __x);
float powf(float __x, float __y);
float sqrtf(float __x);
float hypotf(float __x, float __y);
float cbrtf(float __x);
float ceilf(float __x);
float fabsf(float __x);
float floorf(float __x);
float fmodf(float __x, float __y); 
int isinff(float __value);
int finitef(float __value);
float dremf(float __x, float __y);
float significandf(float __x); 
float copysignf(float __x, float __y); 
float nanf(const char* __tagb); 
int isnanf(float __value);
float j0f(float); 
float j1f(float); 
float jnf(int, float); 
float y0f(float); 
float y1f(float); 
float ynf(int, float); 
float erff(float); 
float erfcf(float);
float lgammaf(float);
float tgammaf(float);
float gammaf(float); 
float lgammaf_r(float, int* __signgamp); 
float rintf(float __x); 
float nextafterf(float __x, float __y); 
float nexttowardf(float __x, long double __y); 
float remainderf(float __x, float __y); 
float scalbnf(float __x, int __n); 
int ilogbf(float __x); 
float scalblnf(float __x, long int __n); 
float nearbyintf(float __x); 
float roundf(float __x); 
float truncf(float __x); 
float remquof(float __x, float __y, int* __quo); 
long int lrintf(float __x); 
long long int llroundf(float __x); 
float fdimf(float __x, float __y);
float fmaxf(float __x, float __y); 
float fminf(float __x, float __y);
float fmaf(float __x, float __y, float __z); 
float scalbf(float __x, float __n); 
long double acosl(long double __x); 
long double asinl(long double __x); 
long double atanl(long double __x); 
long double atan2l(long double __y, long double __x); 
long double cosl(long double __x); 
long double sinl(long double __x); 
long double tanl(long double __x); 
long double coshl(long double __x);
long double sinhl(long double __x);
long double tanhl(long double __x);
long double acoshl(long double __x); 
long double asinhl(long double __x); 
long double atanhl(long double __x); 
long double expl(long double __x); 
long double frexpl(long double __x, int* __exponent); 
long double ldexpl(long double __x, int __exponent); 
long double logl(long double __x); 
long double log10l(long double __x); 
long double modfl(long double __x, long double* __iptr); 
long double expm1l(long double __x); 
long double log1pl(long double __x); 
long double logbl(long double __x); 
long double exp2l(long double __x); 
long double log2l(long double __x); 
long double powl(long double __x, long double __y); 
long double sqrtl(long double __x); 
long double hypotl(long double __x, long double __y); 
long double cbrtl(long double __x); 
long double ceill(long double __x); 
long double fabsl(long double __x); 
long double floorl(long double __x);
long double fmodl(long double __x, long double __y); 
int isinfl(long double __value);
int finitel(long double __value);
long double dreml(long double __x, long double __y); 
long double significandl(long double __x); 
long double copysignl(long double __x, long double __y); 
long double nanl(const char* __tagb); 
int isnanl(long double __value);
long double j0l(long double); 
long double j1l(long double); 
long double jnl(int, long double);
long double y0l(long double); 
long double y1l(long double); 
long double ynl(int, long double);
long double erfl(long double); 
long double erfcl(long double);
long double lgammal(long double); 
long double tgammal(long double); 
long double gammal(long double); 
long double lgammal_r(long double, int* __signgamp); 
long double rintl(long double __x); 
long double nextafterl(long double __x, long double __y); 
long double nexttowardl(long double __x, long double __y);
long double remainderl(long double __x, long double __y); 
long double scalbnl(long double __x, int __n); 
int ilogbl(long double __x); 
long double scalblnl(long double __x, long int __n); 
long double nearbyintl(long double __x);
long double roundl(long double __x);
long double truncl(long double __x);
long double remquol(long double __x, long double __y, int* __quo);
long int lrintl(long double __x);
long long int llroundl(long double __x);
long double fdiml(long double __x, long double __y);
long double fmaxl(long double __x, long double __y);
long double fminl(long double __x, long double __y);
long double fmal(long double __x, long double __y, long double __z);
long double scalbl(long double __x, long double __n);
