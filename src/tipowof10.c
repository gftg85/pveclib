/*
 Copyright (c) [2017] IBM Corporation.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 tipowof10.c

 Contributors:
      IBM Corporation, Steven Munroe
      Created on: Jan 19, 2016
 */

#include <pveclib/vec_int128_ppc.h>

const vui128_t vtipowof10[] = { (vui128_t) (__int128 ) 1ll, /* 10**0 */
  (vui128_t) (__int128 ) 10ll, /* 10**1 */
  (vui128_t) (__int128 ) 100ll, /* 10**2 */
  (vui128_t) (__int128 ) 1000ll, /* 10**3 */
  (vui128_t) (__int128 ) 10000ll, /* 10**4 */
  (vui128_t) (__int128 ) 100000ll, /* 10**5 */
  (vui128_t) (__int128 ) 1000000ll, /* 10**6 */
  (vui128_t) (__int128 ) 10000000ll, /* 10**7 */
  (vui128_t) (__int128 ) 100000000ll, /* 10**8 */
  (vui128_t) (__int128 ) 1000000000ll, /* 10**9 */
  (vui128_t) (__int128 ) 10000000000ll, /* 10**10 */
  (vui128_t) (__int128 ) 100000000000ll, /* 10**11 */
  (vui128_t) (__int128 ) 1000000000000ll, /* 10**12 */
  (vui128_t) (__int128 ) 10000000000000ll, /* 10**13 */
  (vui128_t) (__int128 ) 100000000000000ll, /* 10**14 */
  (vui128_t) (__int128 ) 1000000000000000ll, /* 10**15 */
  (vui128_t) (__int128 ) 10000000000000000ll, /* 10**16 */
  (vui128_t) (__int128 ) 100000000000000000ll, /* 10**17 */
  (vui128_t) (__int128 ) 1000000000000000000ll, /* 10**18 */
#ifdef PVECLIB_DISABLE_CONSTINT128
// Clang does support constant folding for __int128
// Simply not possible to defind a const larger than __UINT64_MAX__
// For vector initialized can use two long long elements.
  CONST_VINT128_DW128 ( 0x0000000000000000ll,0x8ac7230489e80000ll ), /* 10**19 */
  CONST_VINT128_DW128 ( 0x0000000000000005ll,0x6bc75e2d63100000ll ), /* 10**20 */
  CONST_VINT128_DW128 ( 0x0000000000000036ll,0x35c9adc5dea00000ll ), /* 10**21 */
  CONST_VINT128_DW128 ( 0x000000000000021ell,0x19e0c9bab2400000ll ), /* 10**22 */
  CONST_VINT128_DW128 ( 0x000000000000152dll,0x02c7e14af6800000ll ), /* 10**23 */
  CONST_VINT128_DW128 ( 0x000000000000d3c2ll,0x1bcecceda1000000ll ), /* 10**24 */
  CONST_VINT128_DW128 ( 0x0000000000084595ll,0x161401484a000000ll ), /* 10**25 */
  CONST_VINT128_DW128 ( 0x000000000052b7d2ll,0xdcc80cd2e4000000ll ), /* 10**26 */
  CONST_VINT128_DW128 ( 0x00000000033b2e3cll,0x9fd0803ce8000000ll ), /* 10**27 */
  CONST_VINT128_DW128 ( 0x00000000204fce5ell,0x3e25026110000000ll ), /* 10**28 */
  CONST_VINT128_DW128 ( 0x00000001431e0faell,0x6d7217caa0000000ll ), /* 10**29 */
  CONST_VINT128_DW128 ( 0x0000000c9f2c9cd0ll,0x4674edea40000000ll ), /* 10**30 */
  CONST_VINT128_DW128 ( 0x0000007e37be2022ll,0xc0914b2680000000ll ), /* 10**31 */
  CONST_VINT128_DW128 ( 0x000004ee2d6d415bll,0x85acef8100000000ll ), /* 10**32 */
  CONST_VINT128_DW128 ( 0x0000314dc6448d93ll,0x38c15b0a00000000ll ), /* 10**33 */
  CONST_VINT128_DW128 ( 0x0001ed09bead87c0ll,0x378d8e6400000000ll ), /* 10**34 */
  CONST_VINT128_DW128 ( 0x0013426172c74d82ll,0x2b878fe800000000ll ), /* 10**35 */
  CONST_VINT128_DW128 ( 0x00c097ce7bc90715ll,0xb34b9f1000000000ll ), /* 10**36 */
  CONST_VINT128_DW128 ( 0x0785ee10d5da46d9ll,0x00f436a000000000ll ), /* 10**37 */
  CONST_VINT128_DW128 ( 0x4b3b4ca85a86c47all,0x098a224000000000ll ), /* 10**38 */
#else
  (vui128_t) (__int128 ) 10ll * (__int128 ) 1000000000000000000ll, /* 10**19 */
  (vui128_t) (__int128 ) 100ll * (__int128 ) 1000000000000000000ll, /* 10**20 */
  (vui128_t) (__int128 ) 1000ll * (__int128 ) 1000000000000000000ll, /* 10**21 */
  (vui128_t) (__int128 ) 10000ll * (__int128 ) 1000000000000000000ll, /* 10**22 */
  (vui128_t) (__int128 ) 100000ll * (__int128 ) 1000000000000000000ll, /* 10**23 */
  (vui128_t) (__int128 ) 1000000ll * (__int128 ) 1000000000000000000ll, /* 10**24 */
  (vui128_t) (__int128 ) 10000000ll * (__int128 ) 1000000000000000000ll, /* 10**25 */
  (vui128_t) (__int128 ) 100000000ll * (__int128 ) 1000000000000000000ll, /* 10**26 */
  (vui128_t) (__int128 ) 1000000000ll * (__int128 ) 1000000000000000000ll, /* 10**27 */
  (vui128_t) (__int128 ) 10000000000ll * (__int128 ) 1000000000000000000ll, /* 10**28 */
  (vui128_t) (__int128 ) 100000000000ll * (__int128 ) 1000000000000000000ll, /* 10**29 */
  (vui128_t) (__int128 ) 1000000000000ll * (__int128 ) 1000000000000000000ll, /* 10**30 */
  (vui128_t) (__int128 ) 10000000000000ll * (__int128 ) 1000000000000000000ll, /* 10**31 */
  (vui128_t) (__int128 ) 100000000000000ll * (__int128 ) 1000000000000000000ll, /* 10**32 */
  (vui128_t) (__int128 ) 1000000000000000ll * (__int128 ) 1000000000000000000ll, /* 10**33 */
  (vui128_t) (__int128 ) 10000000000000000ll * (__int128 ) 1000000000000000000ll, /* 10**34 */
  (vui128_t) (__int128 ) 100000000000000000ll * (__int128 ) 1000000000000000000ll, /* 10**35 */
  (vui128_t) (__int128 ) 1000000000000000000ll
      * (__int128 ) 1000000000000000000ll, /* 10**36 */
  (vui128_t) (__int128 ) 10ll * (__int128 ) 1000000000000000000ll
      * (__int128 ) 1000000000000000000ll, /* 10**37 */
  (vui128_t) (__int128 ) 100ll * (__int128 ) 1000000000000000000ll
      * (__int128 ) 1000000000000000000ll, /* 10**38 */
#endif
  (vui128_t) (__int128 ) 0L };/* 10**308 */

extern const unsigned __int128 __attribute__ ((alias ("vtipowof10"))) *tipowof10;

const vui128_t vtifrexpof10[] =
{ (vui128_t) (__int128 ) 4503599627370496ll, /* 10**0 */
  (vui128_t) (__int128 ) 5629499534213120ll, /* 10**1 */
  (vui128_t) (__int128 ) 7036874417766400ll, /* 10**2 */
  (vui128_t) (__int128 ) 8796093022208000ll, /* 10**3 */
  (vui128_t) (__int128 ) 5497558138880000ll, /* 10**4 */
  (vui128_t) (__int128 ) 6871947673600000ll, /* 10**5 */
  (vui128_t) (__int128 ) 8589934592000000ll, /* 10**6 */
  (vui128_t) (__int128 ) 5368709120000000ll, /* 10**7 */
  (vui128_t) (__int128 ) 6710886400000000ll, /* 10**8 */
  (vui128_t) (__int128 ) 8388608000000000ll, /* 10**9 */
  (vui128_t) (__int128 ) 5242880000000000ll, /* 10**10 */
  (vui128_t) (__int128 ) 6553600000000000ll, /* 10**11 */
  (vui128_t) (__int128 ) 8192000000000000ll, /* 10**12 */
  (vui128_t) (__int128 ) 5120000000000000ll, /* 10**13 */
  (vui128_t) (__int128 ) 6400000000000000ll, /* 10**14 */
  (vui128_t) (__int128 ) 8000000000000000ll, /* 10**15 */
  (vui128_t) (__int128 ) 5000000000000000ll, /* 10**16 */
  (vui128_t) (__int128 ) 6250000000000000ll, /* 10**17 */
  (vui128_t) (__int128 ) 7812500000000000ll, /* 10**18 */
  (vui128_t) (__int128 ) 4882812500000000ll, /* 10**19 */
  (vui128_t) (__int128 ) 6103515625000000ll, /* 10**20 */
  (vui128_t) (__int128 ) 7629394531250000ll, /* 10**21 */
  (vui128_t) (__int128 ) 4768371582031250ll, /* 10**22 */

#ifdef PVECLIB_DISABLE_CONSTINT128
// Clang does not support constant folding for __int128
// Simply not possible to defind a const larger than __UINT64_MAX__
// For vector initialized can use two long long elements.
  CONST_VINT128_DW128 ( 0x000002a5a058fc29ll,0x5ed0000000000000ll ), /* 10**23 */
  CONST_VINT128_DW128 ( 0x00000d3c21bceccell,0xda10000000000000ll ), /* 10**24 */
  CONST_VINT128_DW128 ( 0x00000422ca8b0a00ll,0xa425000000000000ll ), /* 10**25 */
  CONST_VINT128_DW128 ( 0x0000052b7d2dcc80ll,0xcd2e400000000000ll ), /* 10**26 */
  CONST_VINT128_DW128 ( 0x000019d971e4fe84ll,0x01e7400000000000ll ), /* 10**27 */
  CONST_VINT128_DW128 ( 0x00000813f3978f89ll,0x4098440000000000ll ), /* 10**28 */
  CONST_VINT128_DW128 ( 0x0000050c783eb9b5ll,0xc85f2a8000000000ll ), /* 10**29 */
  CONST_VINT128_DW128 ( 0x00000c9f2c9cd046ll,0x74edea4000000000ll ), /* 10**30 */
  CONST_VINT128_DW128 ( 0x000007e37be2022cll,0x0914b26800000000ll ), /* 10**31 */
  CONST_VINT128_DW128 ( 0x000004ee2d6d415bll,0x85acef8100000000ll ), /* 10**32 */
  CONST_VINT128_DW128 ( 0x00000629b8c891b2ll,0x67182b6140000000ll ), /* 10**33 */
  CONST_VINT128_DW128 ( 0x000007b426fab61fll,0x00de363990000000ll ), /* 10**34 */
  CONST_VINT128_DW128 ( 0x000009a130b963a6ll,0xc115c3c7f4000000ll ), /* 10**35 */
  CONST_VINT128_DW128 ( 0x00000604be73de48ll,0x38ad9a5cf8800000ll ), /* 10**36 */
  CONST_VINT128_DW128 ( 0x00000785ee10d5dall,0x46d900f436a00000ll ), /* 10**37 */
  CONST_VINT128_DW128 ( 0x000012ced32a16a1ll,0xb11e826288900000ll ), /* 10**38 */
#else
  (vui128_t) (__int128 ) 53687091200000ll * (__int128 ) 1000000000000000000ll, /* 10**23 */
  (vui128_t) (__int128 ) 268435456000000ll * (__int128 ) 1000000000000000000ll, /* 10**24 */
  (vui128_t) (__int128 ) 83886080000000ll * (__int128 ) 1000000000000000000ll, /* 10**25 */
  (vui128_t) (__int128 ) 104857600000000ll * (__int128 ) 1000000000000000000ll, /* 10**26 */
  (vui128_t) (__int128 ) 524288000000000ll * (__int128 ) 1000000000000000000ll, /* 10**27 */
  (vui128_t) (__int128 ) 163840000000000ll * (__int128 ) 1000000000000000000ll, /* 10**28 */
  (vui128_t) (__int128 ) 102400000000000ll * (__int128 ) 1000000000000000000ll, /* 10**29 */
  (vui128_t) (__int128 ) 256000000000000ll * (__int128 ) 1000000000000000000ll, /* 10**30 */
  (vui128_t) (__int128 ) 160000000000000ll * (__int128 ) 1000000000000000000ll, /* 10**31 */
  (vui128_t) (__int128 ) 100000000000000ll * (__int128 ) 1000000000000000000ll, /* 10**32 */
  (vui128_t) (__int128 ) 125000000000000ll * (__int128 ) 1000000000000000000ll, /* 10**33 */
  (vui128_t) (__int128 ) 156250000000000ll * (__int128 ) 1000000000000000000ll, /* 10**34 */
  (vui128_t) (__int128 ) 195312500000000ll * (__int128 ) 1000000000000000000ll, /* 10**35 */
  (vui128_t) (__int128 ) 122070312500000ll * (__int128 ) 1000000000000000000ll, /* 10**36 */
  (vui128_t) (__int128 ) 152587890625000ll * (__int128 ) 1000000000000000000ll, /* 10**37 */
  (vui128_t) (__int128 ) 381469726562500ll * (__int128 ) 1000000000000000000ll, /* 10**38 */
#endif
  (vui128_t) (__int128 ) 0L };/* 10**308 */

extern const unsigned __int128 __attribute__ ((alias ("vtifrexpof10"))) *tifrexpof10;

const long tiexpof10[] = {
    -52L, /* 10**0 */
    -49L, /* 10**1 */
    -46L, /* 10**2 */
    -43L, /* 10**3 */
    -39L, /* 10**4 */
    -36L, /* 10**5 */
    -33L, /* 10**6 */
    -29L, /* 10**7 */
    -26L, /* 10**8 */
    -23L, /* 10**9 */
    -19L, /* 10**10 */
    -16L, /* 10**11 */
    -13L, /* 10**12 */
    -9L, /* 10**13 */
    -6L, /* 10**14 */
    -3L, /* 10**15 */
    1L, /* 10**16 */
    4L, /* 10**17 */
    7L, /* 10**18 */
    11L, /* 10**19 */
    14L, /* 10**20 */
    17L, /* 10**21 */
    21L, /* 10**22 */
    -29L, /* 10**23 */
    -28L, /* 10**24 */
    -23L, /* 10**25 */
    -20L, /* 10**26 */
    -19L, /* 10**27 */
    -14L, /* 10**28 */
    -10L, /* 10**29 */
    -8L, /* 10**30 */
    -4L, /* 10**31 */
    0L, /* 10**32 */
    3L, /* 10**33 */
    6L, /* 10**34 */
    9L, /* 10**35 */
    13L, /* 10**36 */
    16L, /* 10**37 */
    18L, /* 10**38 */
    0L };/* 10**308 */
