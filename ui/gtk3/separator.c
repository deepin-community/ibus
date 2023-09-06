/* separator.c generated by valac 0.56.12, the Vala compiler
 * generated from separator.vala, do not modify */

/* vim:set et sts=4 sw=4:
 *
 * ibus - The Input Bus
 *
 * Copyright(c) 2011-2014 Peng Huang <shawn.p.huang@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301
 * USA
 */

#include <gtk/gtk.h>
#include <glib-object.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define TYPE_HSEPARATOR (hseparator_get_type ())
#define HSEPARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_HSEPARATOR, HSeparator))
#define HSEPARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_HSEPARATOR, HSeparatorClass))
#define IS_HSEPARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_HSEPARATOR))
#define IS_HSEPARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_HSEPARATOR))
#define HSEPARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_HSEPARATOR, HSeparatorClass))

typedef struct _HSeparator HSeparator;
typedef struct _HSeparatorClass HSeparatorClass;
typedef struct _HSeparatorPrivate HSeparatorPrivate;
enum  {
	HSEPARATOR_0_PROPERTY,
	HSEPARATOR_NUM_PROPERTIES
};
static GParamSpec* hseparator_properties[HSEPARATOR_NUM_PROPERTIES];

#define TYPE_VSEPARATOR (vseparator_get_type ())
#define VSEPARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VSEPARATOR, VSeparator))
#define VSEPARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VSEPARATOR, VSeparatorClass))
#define IS_VSEPARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VSEPARATOR))
#define IS_VSEPARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VSEPARATOR))
#define VSEPARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VSEPARATOR, VSeparatorClass))

typedef struct _VSeparator VSeparator;
typedef struct _VSeparatorClass VSeparatorClass;
typedef struct _VSeparatorPrivate VSeparatorPrivate;
enum  {
	VSEPARATOR_0_PROPERTY,
	VSEPARATOR_NUM_PROPERTIES
};
static GParamSpec* vseparator_properties[VSEPARATOR_NUM_PROPERTIES];

struct _HSeparator {
	GtkSeparator parent_instance;
	HSeparatorPrivate * priv;
};

struct _HSeparatorClass {
	GtkSeparatorClass parent_class;
};

struct _VSeparator {
	GtkSeparator parent_instance;
	VSeparatorPrivate * priv;
};

struct _VSeparatorClass {
	GtkSeparatorClass parent_class;
};

static gpointer hseparator_parent_class = NULL;
static gpointer vseparator_parent_class = NULL;

VALA_EXTERN GType hseparator_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (HSeparator, g_object_unref)
VALA_EXTERN HSeparator* hseparator_new (void);
VALA_EXTERN HSeparator* hseparator_construct (GType object_type);
static GType hseparator_get_type_once (void);
VALA_EXTERN GType vseparator_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (VSeparator, g_object_unref)
VALA_EXTERN VSeparator* vseparator_new (void);
VALA_EXTERN VSeparator* vseparator_construct (GType object_type);
static GType vseparator_get_type_once (void);

HSeparator*
hseparator_construct (GType object_type)
{
	HSeparator * self = NULL;
	self = (HSeparator*) g_object_new (object_type, "orientation", GTK_ORIENTATION_HORIZONTAL, "margin", 2, NULL);
	return self;
}

HSeparator*
hseparator_new (void)
{
	return hseparator_construct (TYPE_HSEPARATOR);
}

static void
hseparator_class_init (HSeparatorClass * klass,
                       gpointer klass_data)
{
	hseparator_parent_class = g_type_class_peek_parent (klass);
}

static void
hseparator_instance_init (HSeparator * self,
                          gpointer klass)
{
}

static GType
hseparator_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (HSeparatorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) hseparator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (HSeparator), 0, (GInstanceInitFunc) hseparator_instance_init, NULL };
	GType hseparator_type_id;
	hseparator_type_id = g_type_register_static (gtk_separator_get_type (), "HSeparator", &g_define_type_info, 0);
	return hseparator_type_id;
}

GType
hseparator_get_type (void)
{
	static volatile gsize hseparator_type_id__once = 0;
	if (g_once_init_enter (&hseparator_type_id__once)) {
		GType hseparator_type_id;
		hseparator_type_id = hseparator_get_type_once ();
		g_once_init_leave (&hseparator_type_id__once, hseparator_type_id);
	}
	return hseparator_type_id__once;
}

VSeparator*
vseparator_construct (GType object_type)
{
	VSeparator * self = NULL;
	self = (VSeparator*) g_object_new (object_type, "orientation", GTK_ORIENTATION_VERTICAL, "margin", 2, NULL);
	return self;
}

VSeparator*
vseparator_new (void)
{
	return vseparator_construct (TYPE_VSEPARATOR);
}

static void
vseparator_class_init (VSeparatorClass * klass,
                       gpointer klass_data)
{
	vseparator_parent_class = g_type_class_peek_parent (klass);
}

static void
vseparator_instance_init (VSeparator * self,
                          gpointer klass)
{
}

static GType
vseparator_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (VSeparatorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vseparator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (VSeparator), 0, (GInstanceInitFunc) vseparator_instance_init, NULL };
	GType vseparator_type_id;
	vseparator_type_id = g_type_register_static (gtk_separator_get_type (), "VSeparator", &g_define_type_info, 0);
	return vseparator_type_id;
}

GType
vseparator_get_type (void)
{
	static volatile gsize vseparator_type_id__once = 0;
	if (g_once_init_enter (&vseparator_type_id__once)) {
		GType vseparator_type_id;
		vseparator_type_id = vseparator_get_type_once ();
		g_once_init_leave (&vseparator_type_id__once, vseparator_type_id);
	}
	return vseparator_type_id__once;
}

