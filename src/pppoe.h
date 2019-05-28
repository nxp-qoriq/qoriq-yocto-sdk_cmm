/*
*   Copyright (c) 2016 Freescale Semiconductor, Inc. All rights reserved.
*   Copyright 2016 NXP
*
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <https://www.gnu.org/licenses/>.
*
*/


#ifndef __PPPOE_H__
#define __PPPOE_H__

#include "itf.h"

#define PPPOE_PATH "/proc/net/pppoe"

	int __cmmGetPPPoESession(FILE *fp, struct interface* ifp);

	int cmmFePPPoEUpdate(FCI_CLIENT *fci_handler, int action, struct interface *itf);
	int cmmPPPoELocalShow(struct cli_def * cli, char *command, char *argv[], int argc);
	int cmmPPPoEQueryProcess(char ** keywords, int tabStart, daemon_handle_t daemon_handle);

#endif

