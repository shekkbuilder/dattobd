/*
    Copyright (C) 2018 Datto Inc.

    This file is part of dattobd.

    This program is free software; you can redistribute it and/or modify it
    under the terms of the GNU General Public License version 2 as published
    by the Free Software Foundation.
*/

#include "../../includes.h"

static inline void dummy(void){
	struct file *f = NULL;
	void *buf = NULL;
	loff_t *pos = NULL;

	(void)kernel_read(f, buf, 0, pos);
}
