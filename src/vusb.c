/*
 * Copyright (C) 2015-2018 UAB Vilniaus Blokas
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license. Implementation for microcontrollers without built-in
 * USB support depends on V-USB library by Objective Development,
 * https://www.obdev.at/vusb/ licensed under GPLv2 license.
 *
 * See the LICENSE file for details.
 */

#ifndef USBCON
#include <avr/io.h>
#	include "../vusb/usbdrv/usbdrv.c"
#	include "../vusb/usbdrv/oddebug.c"
#endif