/**
 *  \file   bmsrdecode.h
 *  \brief  Cleartext description of register bits.
 *
 *  \author Dennis Siekmeier (contact@dsiekmeier.de)
 *  \date   19/07/2016
 */

#ifndef _BMSRDECODE_BC9CA7B2F58C
#define _BMSRDECODE_BC9CA7B2F58C

#define REGISTER_WIDTH  (16)

char const * const bmsrNames[REGISTER_WIDTH] = {
    "Extended Capability",
    "Jabber Detect",
    "Link Status",
    "Auto-Negotiation Ability",
    "Remote Fault",
    "Auto-Negotiation Complete",
    "MF Preamble Suppression",
    "Unidirectional ability",
    "Extended Status",
    "100BASE-T2 Half Duplex",
    "100BASE-T2 Full Duplex",
    "10 Mb/s Half Duplex",
    "10 Mb/s Full Duplex",
    "100BASE-X Half Duplex",
    "100BASE-X Full Duplex",
    "100BASE-T4"
};

#endif /*_BMSRDECODE_BC9CA7B2F58C */
