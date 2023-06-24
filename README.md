# bmsrdecode

## DESCRIPTION

This is a little tool to decode the BMSR register of an Ethernet PHY as described in IEEE 802.3 Chapter 22.2.4. For some basic information about this topic please see also [this article](2016-03-16-diagnose-fuer-die-phy.md) I wrote long ago for my blog in german language.

**Note:** This repository is in archived state and it is not planned to update it in the near future.

## COMPILE

The source uses some of the C99 features so you can compile it with gcc using the std=c99 option.

## USAGE

Under UNIX like systems just pass the register value as the first (and only) parameter:

```shell
./bmsrdecode 0x3d13
```

## LICENCE

This project is released under The MIT License (MIT).
