/*
    This file is part of darktable,
    Copyright (C) 2026 darktable developers.

    darktable is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    darktable is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with darktable.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Shared headers that are also used by the processing engine refer to
// toolkit objects only through pointers stored in GUI-owned fields. In
// engine-only builds the toolkit is not available, so these types are
// declared as incomplete structs: they can be carried around but never
// dereferenced or passed to toolkit functions.

#ifndef DARKTABLE_ENGINE_ONLY

#include <gtk/gtk.h>

#else

#include <cairo.h>

typedef struct _GtkWidget GtkWidget;
typedef struct _GtkBox GtkBox;
typedef struct _GtkComboBox GtkComboBox;
typedef struct _GtkFileChooser GtkFileChooser;
typedef struct _GtkTreeView GtkTreeView;
typedef struct _GtkTreeModel GtkTreeModel;
typedef struct _GtkListStore GtkListStore;
typedef struct _GtkWindow GtkWindow;
typedef struct _GtkLabel GtkLabel;
typedef struct _GtkGrid GtkGrid;
typedef struct _GtkEntry GtkEntry;
typedef struct _GtkNotebook GtkNotebook;
typedef struct _GtkMenu GtkMenu;
typedef struct _GtkMenuShell GtkMenuShell;
typedef struct _GtkCheckButton GtkCheckButton;
typedef struct _GtkDrawingArea GtkDrawingArea;
typedef struct _GtkAccelGroup GtkAccelGroup;
typedef struct _GtkCssProvider GtkCssProvider;
typedef struct _GtkStyleContext GtkStyleContext;
typedef struct _GtkToggleButton GtkToggleButton;
typedef struct _GtkScrolledWindow GtkScrolledWindow;
typedef struct _GtkSizeGroup GtkSizeGroup;
typedef struct _GdkWindow GdkWindow;
typedef struct _GdkPixbuf GdkPixbuf;
typedef struct _GdkCursor GdkCursor;
typedef struct _GdkDevice GdkDevice;
typedef union _GdkEvent GdkEvent;
typedef struct _GdkEventButton GdkEventButton;
typedef struct _GdkEventScroll GdkEventScroll;
typedef struct _GdkEventMotion GdkEventMotion;
typedef struct _GdkEventKey GdkEventKey;
typedef struct _GdkEventCrossing GdkEventCrossing;
typedef struct _GdkEventConfigure GdkEventConfigure;
typedef struct _PangoLayout PangoLayout;
typedef struct _PangoFontDescription PangoFontDescription;

#endif
