/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*
 * libqmi-glib -- GLib/GIO based library to control QMI devices
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2012 Aleksander Morgado <aleksander@lanedo.com>
 */

/* NOTE: this is a private non-installable header */

#ifndef _LIBQMI_GLIB_QMI_UTILS_H_
#define _LIBQMI_GLIB_QMI_UTILS_H_

#include <glib.h>

G_BEGIN_DECLS

gchar *qmi_utils_str_hex (gconstpointer mem,
                          gsize size,
                          gchar delimiter);

/* Reading/Writing integer variables */

void qmi_utils_read_guint8_from_buffer  (guint8  **buffer,
                                         guint16  *buffer_size,
                                         guint8   *out);
void qmi_utils_read_gint8_from_buffer   (guint8  **buffer,
                                         guint16  *buffer_size,
                                         gint8    *out);

void qmi_utils_read_guint16_from_buffer (guint8  **buffer,
                                         guint16  *buffer_size,
                                         guint16  *out);
void qmi_utils_read_gint16_from_buffer  (guint8  **buffer,
                                         guint16  *buffer_size,
                                         gint16   *out);

void qmi_utils_read_guint32_from_buffer (guint8  **buffer,
                                         guint16  *buffer_size,
                                         guint32  *out);
void qmi_utils_read_gint32_from_buffer  (guint8  **buffer,
                                         guint16  *buffer_size,
                                         gint32   *out);

void qmi_utils_write_guint8_to_buffer (guint8  **buffer,
                                       guint16  *buffer_size,
                                       guint8   *in);
void qmi_utils_write_gint8_to_buffer  (guint8  **buffer,
                                       guint16  *buffer_size,
                                       gint8    *in);

void qmi_utils_write_guint16_to_buffer (guint8  **buffer,
                                        guint16  *buffer_size,
                                        guint16  *in);
void qmi_utils_write_gint16_to_buffer  (guint8  **buffer,
                                        guint16  *buffer_size,
                                        gint16   *in);

void qmi_utils_write_guint32_to_buffer (guint8  **buffer,
                                        guint16  *buffer_size,
                                        guint32  *in);
void qmi_utils_write_gint32_to_buffer  (guint8  **buffer,
                                        guint16  *buffer_size,
                                        gint32   *in);

/* Reading/Writing string variables */

void qmi_utils_read_string_from_buffer (guint8   **buffer,
                                        guint16   *buffer_size,
                                        gboolean   length_prefix,
                                        gchar    **out);

void qmi_utils_write_string_to_buffer (guint8   **buffer,
                                       guint16   *buffer_size,
                                       gboolean   length_prefix,
                                       gchar    **in);

G_END_DECLS

#endif /* _LIBQMI_GLIB_QMI_UTILS_H_ */
