/**
 * \file    bmsrdecode.c
 * \brief   Decoding PHY status register as described in IEEE 802.3
 *
 * \author  Dennis Siekmeier (contact@dsiekmeier.de)
 * \version 1.2
 * \date    19/07/2016
 *
 * \copyright This project is released under The MIT License (MIT).
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "bmsrdecode.h"

int main( int argc, char* argv[] ) {

    char* const prgName = argv[0];

    printf( "BMSR decoder v1.2 (www.DSiekmeier.de)\n\n" );

    // Check if argument was given during program call
    if( argc != 2 ) {
        printf( "usage: %s <register value>\n", prgName );
        printf( "       eg: %s 0x38dd\n", prgName );
        return EXIT_FAILURE;
    }

    // Convert the argument to an integer type
    char* const regValue = argv[1];
    uint16_t convRegValue = strtoul( regValue, NULL, 16 );
    
    printf( "%4s | %30s | %s\n", "BIT", "FUNCTION", "ENABLED" );
    printf( "------------------------------------------------\n" );
    for( uint8_t bit=0U; bit<REGISTER_WIDTH; ++bit ) {
        printf( "%4u | %30s | %s\n", bit,
            bmsrNames[bit],
            (convRegValue & 1U) ? "X" : "" );
        convRegValue >>= 1U;
    }

    return EXIT_SUCCESS;
}

