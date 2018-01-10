# bmsrdecode [![Build Status](https://travis-ci.org/DSiekmeier/bmsrdecode.svg?branch=master)](https://travis-ci.org/DSiekmeier/bmsrdecode)

## AUTHOR
Dennis Siekmeier (contact@dsiekmeier.de)  
Visit me on www.dsiekmeier.de

## DESCRIPTION
A little tool to decode the BMSR register of an Ethernet PHY as described in
IEEE 802.3 Chapter 22.2.4. For some basic information about this topic visit:

http://dsiekmeier.de/2016/076/diagnose-fuer-die-phy.html

## COMPILE
The source uses some of the C99 features so you can compile it with gcc using
the std=c99 option.

## USAGE
Pass the register value as the first (and only) parameter. E.g.:

    ./bmsrdecode 0x3d13

under UNIX like systems

## LICENCE
This project is released under The MIT License (MIT).
