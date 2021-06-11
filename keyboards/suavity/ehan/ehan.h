#pragma once

#include "quantum.h"
#define ___ KC_NO

#define LAYOUT_ansi_broken( \
    K00, K01, K02, K03, K04, K05,        K06, K07, K08, K09, K0A, K0B, K0C,         K0D, K0E, K0F, \
    K10, K11, K12, K13, K14, K15,        K16, K17, K18, K19, K1A, K1B, K1C,         K1D, K1E, K1F, \
    K20, K21, K22, K23, K24, K25,        K26, K27, K28, K29, K2A, K2B, K2C,         K2D, K2E, K2F, \
    K30, K31, K32, K33, K34, K35,        K36, K37, K38, K39, K3A, K3B, K3C,                        \
    K40,      K42, K43, K44, K45,        K46, K47, K48, K49, K4A, K4B, K4C,              K4E,      \
    K50,           K53, K54, K55,        K56,      K58, K59,           K5C,         K5D, K5E, K5F  \
) { \
    {    K00, K01, K02, K03, K04, K05,       K06, K07, K08, K09, K0A, K0B, K0C,     K0D, K0E, K0F,    }, \
    {    K10, K11, K12, K13, K14, K15,       K16, K17, K18, K19, K1A, K1B, K1C,     K1D, K1E, K1F,    }, \
    {    K20, K21, K22, K23, K24, K25,       K26, K27, K28, K29, K2A, K2B, K2C,     K2D, K2E, K2F,    }, \
    {    K30, K31, K32, K33, K34, K35,       K36, K37, K38, K39, K3A, K3B, K3C,     ___, ___, ___,    }, \
    {    K40, ___, K42, K43, K44, K45,       K46, K47, K48, K49, K4A, K4B, K4C,          K4E,         }, \
    {    K50, ___, ___, K53, K54, K55,       K56, ___, K58, K59, ___, ___, K5C,     K5D, K5E, K5F     }  \
}
