
/* Generated data (by glib-mkenums) */

/*
 * Copyright © 2010 Gerd Kohlberger <gerdko gmail com>
 *
 * This file is part of Mousetweaks.
 *
 * Mousetweaks is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Mousetweaks is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gsettings-desktop-schemas/gdesktop-enums.h>

#include "mt-enum-types.h"

#include "mt-common.h"

GType
g_desktop_mouse_dwell_mode_get_type (void)
{
    static volatile gsize g_define_type_id__volatile = 0;
    if (g_once_init_enter (&g_define_type_id__volatile))
    {
        static const GEnumValue values[] =
        {
            { G_DESKTOP_MOUSE_DWELL_MODE_WINDOW, "G_DESKTOP_MOUSE_DWELL_MODE_WINDOW", "window" },
            { G_DESKTOP_MOUSE_DWELL_MODE_GESTURE, "G_DESKTOP_MOUSE_DWELL_MODE_GESTURE", "gesture" },
            { 0, NULL, NULL }
        };
        GType g_define_type_id = g_enum_register_static (g_intern_static_string ("GDesktopMouseDwellMode"), values);
        g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }
    return g_define_type_id__volatile;
}

GType
g_desktop_mouse_dwell_direction_get_type (void)
{
    static volatile gsize g_define_type_id__volatile = 0;
    if (g_once_init_enter (&g_define_type_id__volatile))
    {
        static const GEnumValue values[] =
        {
            { G_DESKTOP_MOUSE_DWELL_DIRECTION_LEFT, "G_DESKTOP_MOUSE_DWELL_DIRECTION_LEFT", "left" },
            { G_DESKTOP_MOUSE_DWELL_DIRECTION_RIGHT, "G_DESKTOP_MOUSE_DWELL_DIRECTION_RIGHT", "right" },
            { G_DESKTOP_MOUSE_DWELL_DIRECTION_UP, "G_DESKTOP_MOUSE_DWELL_DIRECTION_UP", "up" },
            { G_DESKTOP_MOUSE_DWELL_DIRECTION_DOWN, "G_DESKTOP_MOUSE_DWELL_DIRECTION_DOWN", "down" },
            { 0, NULL, NULL }
        };
        GType g_define_type_id = g_enum_register_static (g_intern_static_string ("GDesktopMouseDwellDirection"), values);
        g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }
    return g_define_type_id__volatile;
}

GType
mt_dwell_click_type_get_type (void)
{
    static volatile gsize g_define_type_id__volatile = 0;
    if (g_once_init_enter (&g_define_type_id__volatile))
    {
        static const GEnumValue values[] =
        {
            { MT_DWELL_CLICK_TYPE_RIGHT, "MT_DWELL_CLICK_TYPE_RIGHT", "right" },
            { MT_DWELL_CLICK_TYPE_DRAG, "MT_DWELL_CLICK_TYPE_DRAG", "drag" },
            { MT_DWELL_CLICK_TYPE_DOUBLE, "MT_DWELL_CLICK_TYPE_DOUBLE", "double" },
            { MT_DWELL_CLICK_TYPE_SINGLE, "MT_DWELL_CLICK_TYPE_SINGLE", "single" },
            { MT_DWELL_CLICK_TYPE_MIDDLE, "MT_DWELL_CLICK_TYPE_MIDDLE", "middle" },
            { 0, NULL, NULL }
        };
        GType g_define_type_id = g_enum_register_static (g_intern_static_string ("MtDwellClickType"), values);
        g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }
    return g_define_type_id__volatile;
}

GType
mt_click_type_window_style_get_type (void)
{
    static volatile gsize g_define_type_id__volatile = 0;
    if (g_once_init_enter (&g_define_type_id__volatile))
    {
        static const GEnumValue values[] =
        {
            { MT_CLICK_TYPE_WINDOW_STYLE_TEXT, "MT_CLICK_TYPE_WINDOW_STYLE_TEXT", "text" },
            { MT_CLICK_TYPE_WINDOW_STYLE_ICON, "MT_CLICK_TYPE_WINDOW_STYLE_ICON", "icon" },
            { MT_CLICK_TYPE_WINDOW_STYLE_BOTH, "MT_CLICK_TYPE_WINDOW_STYLE_BOTH", "both" },
            { 0, NULL, NULL }
        };
        GType g_define_type_id = g_enum_register_static (g_intern_static_string ("MtClickTypeWindowStyle"), values);
        g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }
    return g_define_type_id__volatile;
}

GType
mt_click_type_window_orientation_get_type (void)
{
    static volatile gsize g_define_type_id__volatile = 0;
    if (g_once_init_enter (&g_define_type_id__volatile))
    {
        static const GEnumValue values[] =
        {
            { MT_CLICK_TYPE_WINDOW_ORIENTATION_HORIZONTAL, "MT_CLICK_TYPE_WINDOW_ORIENTATION_HORIZONTAL", "horizontal" },
            { MT_CLICK_TYPE_WINDOW_ORIENTATION_VERTICAL, "MT_CLICK_TYPE_WINDOW_ORIENTATION_VERTICAL", "vertical" },
            { 0, NULL, NULL }
        };
        GType g_define_type_id = g_enum_register_static (g_intern_static_string ("MtClickTypeWindowOrientation"), values);
        g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }
    return g_define_type_id__volatile;
}


/* Generated data ends here */

