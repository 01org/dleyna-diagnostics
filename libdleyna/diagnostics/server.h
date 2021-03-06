/*
 * dLeyna
 *
 * Copyright (C) 2012-2017 Intel Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU Lesser General Public License,
 * version 2.1, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Regis Merlino <regis.merlino@intel.com>
 *
 */

#ifndef DLD_SERVER_H__
#define DLD_SERVER_H__

#include <libdleyna/core/connector.h>
#include <libdleyna/core/task-processor.h>

#define DLD_DIAGNOSTICS_SINK "dleyna-diagnostics"

typedef struct dld_device_t_ dld_device_t;
typedef struct dld_upnp_t_ dld_upnp_t;

dld_upnp_t *dld_diagnostics_service_get_upnp(void);

dleyna_task_processor_t *dld_diagnostics_service_get_task_processor(void);

const dleyna_connector_t *dld_diagnostics_get_connector(void);

const gchar *dld_diagnostics_get_interface_name(guint index);

#endif /* DLD_SERVER_H__ */
