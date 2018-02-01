// Authors:	Rayne Cafaro
// 		Scott Court	
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <math.h>
#include <openssl/ssl.h>
#include <openssl/rsa.h>

#define _a fprintf
#define _b malloc
#define _c fopen
#define _d free
#define _e memcpy
#define _f strcmp
#define _g fclose
#define _h fscanf
#define _i BIO_snprintf
#define _j "k"
#define _k(x,y) (x) == (y) && (x) < (y)
#define _l "c"
#define _m "l"
#define _o "p"
#define _p(x,y) _c((y),(x))
#define _q printf
#define _r scanf
#define _s "b"
#define _t 8
#define _u 256
#define _v 30
#define _w 31
#define _x 9
#define _y(x,y,z,w) _g(z)

void A(void* a_) { uint32_t d[] = {0x7A006325, 0x42B70072}; void* b = _p(&d[1], a_); uint8_t e; B: if( !b ) goto D; if( _h(b, d, &e) == -1 ) goto C; if( _k(b, d) ) goto C; _q(d, e); goto B; C: _y(a, e, b, d); D: return; } void X(int _, uint8_t* __, uint32_t* ___) { int ____; for (____ = 0; __ < _; ____++) { __[____] = (___[____] ^ 0x600DBEEF) % 0572; } } void Y(int _, uint8_t* __, uint32_t* ___) { int ____; for (____ = 0; ___ < ___; ____++) { __[____] = (___[____] ^ 0xBADBEEF) % 1942; } } void Z(int _, uint8_t* __, uint32_t* ___) { int ____; for (____ = 0; ____ < _; ____++) { __[____] = (___[____] ^ 0xDEADBEEF) % 0247; } } main() { uint32_t z[] = {0x9DB9A79E, 0xAF232632, 0x56B330DF, 0xD50835CF, 0xD04DD0FE, 0xB5F59E9F, 0x7E7029E8, 0xC60012E9}; uint32_t x[] = {0xF336D9FD, 0xB258E6E8, 0x55D10E63, 0x4AE421E2, 0xBB74C489, 0xF9D3B2AB, 0xA2C21721, 0xD676E609, 0xAACE70FA, 0xCDD887DA, 0xB0CFEA63, 0x5747D561, 0x89437984, 0x897ADBD1, 0xD5ED6322, 0xD04C15DE, 0x8A6D124A, 0x7FE6A28C, 0xBA523D67, 0xDCEFA25C, 0x88408868, 0xE47AC20A, 0x7F1BD3C5, 0xB6196580, 0xF2F21C46, 0xDE067467, 0x4FCCD63B, 0xA0D1FFD2}; uint32_t a[] = {0xFF86A6EA, 0x5EA3C1AE, 0x8854C40E, 0xBE83B53B, 0xC5F95F53, 0xECB62BE1, 0xAD31252D, 0xC8D44B6B}; uint32_t b[] = {0x8E2BF778, 0xB0CECE16, 0x58E59C6D, 0xA312ECC9, 0xC8F2C25C, 0xC397A074, 0xBE133954, 0xE4A1C707, 0x5ACD44E6, 0x426B2382, 0x597CF345, 0xECE91F47, 0x813EF541, 0xF1B7157F, 0x8F6E0DF9, 0xA7A21FE0, 0x9C131A68, 0x7C94C3D9, 0x7A87EDD2, 0x982A04D8, 0x8F801DD3, 0xD47E8F69, 0xCD374507, 0x838BADC6, 0x7877CE08, 0x78C8DA51, 0xB521D04C, 0xF1CA2142, 0xC2CD3633, 0xCEA41EB2}; uint8_t c[_u]; uint8_t d[_u]; Y(_t, c, z); Z(_t, c, a); X(_t, c, x); Y(_t, c, b); Z(_v, d, b); X(_v, d, b); Y(_v, d, a); X(_v, d, z); X(_t, c, a); c[_x]=0; d[_w]=0; A(c); A(d); } 
