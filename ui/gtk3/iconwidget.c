/* iconwidget.c generated by valac 0.52.4, the Vala compiler
 * generated from iconwidget.vala, do not modify */

/* vim:set et sts=4 sw=4:
 *
 * ibus - The Input Bus
 *
 * Copyright(c) 2011-2014 Peng Huang <shawn.p.huang@gmail.com>
 * Copyright(c) 2018 Takao Fujiwara <takao.fujiwara1@gmail.com>
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

#include <glib-object.h>
#include <gdk/gdk.h>
#include <gtk/gtk.h>
#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <float.h>
#include <math.h>

#define TYPE_THEMED_RGBA (themed_rgba_get_type ())
#define THEMED_RGBA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_THEMED_RGBA, ThemedRGBA))
#define THEMED_RGBA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_THEMED_RGBA, ThemedRGBAClass))
#define IS_THEMED_RGBA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_THEMED_RGBA))
#define IS_THEMED_RGBA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_THEMED_RGBA))
#define THEMED_RGBA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_THEMED_RGBA, ThemedRGBAClass))

typedef struct _ThemedRGBA ThemedRGBA;
typedef struct _ThemedRGBAClass ThemedRGBAClass;
typedef struct _ThemedRGBAPrivate ThemedRGBAPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _gtk_widget_path_unref0(var) ((var == NULL) ? NULL : (var = (gtk_widget_path_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _ParamSpecThemedRGBA ParamSpecThemedRGBA;

#define TYPE_ICON_WIDGET (icon_widget_get_type ())
#define ICON_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_ICON_WIDGET, IconWidget))
#define ICON_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_ICON_WIDGET, IconWidgetClass))
#define IS_ICON_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_ICON_WIDGET))
#define IS_ICON_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_ICON_WIDGET))
#define ICON_WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_ICON_WIDGET, IconWidgetClass))

typedef struct _IconWidget IconWidget;
typedef struct _IconWidgetClass IconWidgetClass;
typedef struct _IconWidgetPrivate IconWidgetPrivate;
enum  {
	ICON_WIDGET_0_PROPERTY,
	ICON_WIDGET_NUM_PROPERTIES
};
static GParamSpec* icon_widget_properties[ICON_WIDGET_NUM_PROPERTIES];

struct _ThemedRGBA {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ThemedRGBAPrivate * priv;
};

struct _ThemedRGBAClass {
	GTypeClass parent_class;
	void (*finalize) (ThemedRGBA *self);
};

struct _ThemedRGBAPrivate {
	GdkRGBA* _normal_fg;
	GdkRGBA* _normal_bg;
	GdkRGBA* _selected_fg;
	GdkRGBA* _selected_bg;
	GtkStyleContext* m_style_context;
};

struct _ParamSpecThemedRGBA {
	GParamSpec parent_instance;
};

struct _IconWidget {
	GtkImage parent_instance;
	IconWidgetPrivate * priv;
};

struct _IconWidgetClass {
	GtkImageClass parent_class;
};

static gint ThemedRGBA_private_offset;
static gpointer themed_rgba_parent_class = NULL;
static gpointer icon_widget_parent_class = NULL;

gpointer themed_rgba_ref (gpointer instance);
void themed_rgba_unref (gpointer instance);
GParamSpec* param_spec_themed_rgba (const gchar* name,
                                    const gchar* nick,
                                    const gchar* blurb,
                                    GType object_type,
                                    GParamFlags flags);
void value_set_themed_rgba (GValue* value,
                            gpointer v_object);
void value_take_themed_rgba (GValue* value,
                             gpointer v_object);
gpointer value_get_themed_rgba (const GValue* value);
GType themed_rgba_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ThemedRGBA, themed_rgba_unref)
static void themed_rgba_reset_rgba (ThemedRGBA* self);
ThemedRGBA* themed_rgba_new (GtkWidget* widget);
ThemedRGBA* themed_rgba_construct (GType object_type,
                                   GtkWidget* widget);
void themed_rgba_set_normal_fg (ThemedRGBA* self,
                                GdkRGBA* value);
void themed_rgba_set_normal_bg (ThemedRGBA* self,
                                GdkRGBA* value);
void themed_rgba_set_selected_fg (ThemedRGBA* self,
                                  GdkRGBA* value);
void themed_rgba_set_selected_bg (ThemedRGBA* self,
                                  GdkRGBA* value);
static void themed_rgba_get_rgba (ThemedRGBA* self);
static void __lambda4_ (ThemedRGBA* self);
static void ___lambda4__gtk_style_context_changed (GtkStyleContext* _sender,
                                            gpointer self);
GdkRGBA* themed_rgba_get_normal_fg (ThemedRGBA* self);
GdkRGBA* themed_rgba_get_normal_bg (ThemedRGBA* self);
GdkRGBA* themed_rgba_get_selected_fg (ThemedRGBA* self);
GdkRGBA* themed_rgba_get_selected_bg (ThemedRGBA* self);
static void themed_rgba_finalize (ThemedRGBA * obj);
static GType themed_rgba_get_type_once (void);
GType icon_widget_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (IconWidget, g_object_unref)
IconWidget* icon_widget_new (const gchar* icon_name_or_path,
                             GtkIconSize size);
IconWidget* icon_widget_construct (GType object_type,
                                   const gchar* icon_name_or_path,
                                   GtkIconSize size);
static GType icon_widget_get_type_once (void);

static inline gpointer
themed_rgba_get_instance_private (ThemedRGBA* self)
{
	return G_STRUCT_MEMBER_P (self, ThemedRGBA_private_offset);
}

static void
__lambda4_ (ThemedRGBA* self)
{
	themed_rgba_get_rgba (self);
}

static void
___lambda4__gtk_style_context_changed (GtkStyleContext* _sender,
                                       gpointer self)
{
	__lambda4_ ((ThemedRGBA*) self);
}

ThemedRGBA*
themed_rgba_construct (GType object_type,
                       GtkWidget* widget)
{
	ThemedRGBA* self = NULL;
	GtkWidgetPath* widget_path = NULL;
	GtkWidgetPath* _tmp0_;
	GtkStyleContext* _tmp1_;
	GtkStyleContext* _tmp2_;
	GtkStyleContext* _tmp3_;
	GtkStyleContext* _tmp4_;
	GtkStyleContext* _tmp5_;
	GtkStyleContext* _tmp6_;
	g_return_val_if_fail (widget != NULL, NULL);
	self = (ThemedRGBA*) g_type_create_instance (object_type);
	themed_rgba_set_normal_fg (self, NULL);
	themed_rgba_set_normal_bg (self, NULL);
	themed_rgba_set_selected_fg (self, NULL);
	themed_rgba_set_selected_bg (self, NULL);
	_tmp0_ = gtk_widget_path_new ();
	widget_path = _tmp0_;
	gtk_widget_path_append_type (widget_path, gtk_text_view_get_type ());
	_tmp1_ = gtk_style_context_new ();
	_g_object_unref0 (self->priv->m_style_context);
	self->priv->m_style_context = _tmp1_;
	_tmp2_ = self->priv->m_style_context;
	gtk_style_context_set_path (_tmp2_, widget_path);
	_tmp3_ = self->priv->m_style_context;
	gtk_style_context_add_class (_tmp3_, GTK_STYLE_CLASS_VIEW);
	_tmp4_ = self->priv->m_style_context;
	_tmp5_ = gtk_widget_get_style_context (widget);
	gtk_style_context_set_parent (_tmp4_, _tmp5_);
	themed_rgba_get_rgba (self);
	_tmp6_ = self->priv->m_style_context;
	g_signal_connect (_tmp6_, "changed", (GCallback) ___lambda4__gtk_style_context_changed, self);
	_gtk_widget_path_unref0 (widget_path);
	return self;
}

ThemedRGBA*
themed_rgba_new (GtkWidget* widget)
{
	return themed_rgba_construct (TYPE_THEMED_RGBA, widget);
}

static void
themed_rgba_reset_rgba (ThemedRGBA* self)
{
	GdkRGBA* _tmp0_;
	GdkRGBA* _tmp2_;
	GdkRGBA* _tmp4_;
	GdkRGBA* _tmp6_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_normal_fg;
	if (_tmp0_ != NULL) {
		GdkRGBA* _tmp1_;
		_tmp1_ = self->priv->_normal_fg;
		gdk_rgba_free (_tmp1_);
		themed_rgba_set_normal_fg (self, NULL);
	}
	_tmp2_ = self->priv->_normal_bg;
	if (_tmp2_ != NULL) {
		GdkRGBA* _tmp3_;
		_tmp3_ = self->priv->_normal_bg;
		gdk_rgba_free (_tmp3_);
		themed_rgba_set_normal_bg (self, NULL);
	}
	_tmp4_ = self->priv->_selected_fg;
	if (_tmp4_ != NULL) {
		GdkRGBA* _tmp5_;
		_tmp5_ = self->priv->_selected_fg;
		gdk_rgba_free (_tmp5_);
		themed_rgba_set_selected_fg (self, NULL);
	}
	_tmp6_ = self->priv->_selected_bg;
	if (_tmp6_ != NULL) {
		GdkRGBA* _tmp7_;
		_tmp7_ = self->priv->_selected_bg;
		gdk_rgba_free (_tmp7_);
		themed_rgba_set_selected_bg (self, NULL);
	}
}

static void
themed_rgba_get_rgba (ThemedRGBA* self)
{
	GdkRGBA* normal_fg = NULL;
	GdkRGBA* normal_bg = NULL;
	GdkRGBA* selected_fg = NULL;
	GdkRGBA* selected_bg = NULL;
	GtkStyleContext* _tmp0_;
	GdkRGBA* _tmp1_ = NULL;
	GtkStyleContext* _tmp2_;
	GdkRGBA* _tmp3_ = NULL;
	gchar* bg_prop = NULL;
	gchar* _tmp4_;
	GtkStyleContext* _tmp5_;
	const gchar* _tmp6_;
	GdkRGBA* _tmp7_ = NULL;
	GtkStyleContext* _tmp8_;
	const gchar* _tmp9_;
	GdkRGBA* _tmp10_ = NULL;
	gboolean _tmp11_ = FALSE;
	gboolean _tmp12_ = FALSE;
	gboolean _tmp13_ = FALSE;
	GdkRGBA* _tmp14_;
	GdkRGBA* _tmp15_;
	GdkRGBA* _tmp29_;
	GdkRGBA* _tmp30_;
	GdkRGBA* _tmp31_;
	GdkRGBA* _tmp32_;
	g_return_if_fail (self != NULL);
	themed_rgba_reset_rgba (self);
	normal_fg = NULL;
	normal_bg = NULL;
	selected_fg = NULL;
	selected_bg = NULL;
	_tmp0_ = self->priv->m_style_context;
	gtk_style_context_get (_tmp0_, GTK_STATE_FLAG_NORMAL, "color", &_tmp1_, NULL);
	normal_fg = _tmp1_;
	_tmp2_ = self->priv->m_style_context;
	gtk_style_context_get (_tmp2_, GTK_STATE_FLAG_SELECTED, "color", &_tmp3_, NULL);
	selected_fg = _tmp3_;
	_tmp4_ = g_strdup ("background-color");
	bg_prop = _tmp4_;
	_tmp5_ = self->priv->m_style_context;
	_tmp6_ = bg_prop;
	gtk_style_context_get (_tmp5_, GTK_STATE_FLAG_NORMAL, _tmp6_, &_tmp7_, NULL);
	normal_bg = _tmp7_;
	_tmp8_ = self->priv->m_style_context;
	_tmp9_ = bg_prop;
	gtk_style_context_get (_tmp8_, GTK_STATE_FLAG_SELECTED, _tmp9_, &_tmp10_, NULL);
	selected_bg = _tmp10_;
	_tmp14_ = normal_bg;
	_tmp15_ = selected_bg;
	if ((*_tmp14_).red == (*_tmp15_).red) {
		GdkRGBA* _tmp16_;
		GdkRGBA* _tmp17_;
		_tmp16_ = normal_bg;
		_tmp17_ = selected_bg;
		_tmp13_ = (*_tmp16_).green == (*_tmp17_).green;
	} else {
		_tmp13_ = FALSE;
	}
	if (_tmp13_) {
		GdkRGBA* _tmp18_;
		GdkRGBA* _tmp19_;
		_tmp18_ = normal_bg;
		_tmp19_ = selected_bg;
		_tmp12_ = (*_tmp18_).blue == (*_tmp19_).blue;
	} else {
		_tmp12_ = FALSE;
	}
	if (_tmp12_) {
		GdkRGBA* _tmp20_;
		GdkRGBA* _tmp21_;
		_tmp20_ = normal_bg;
		_tmp21_ = selected_bg;
		_tmp11_ = (*_tmp20_).alpha == (*_tmp21_).alpha;
	} else {
		_tmp11_ = FALSE;
	}
	if (_tmp11_) {
		gchar* _tmp22_;
		GtkStyleContext* _tmp23_;
		const gchar* _tmp24_;
		GdkRGBA* _tmp25_ = NULL;
		GtkStyleContext* _tmp26_;
		const gchar* _tmp27_;
		GdkRGBA* _tmp28_ = NULL;
		gdk_rgba_free (normal_bg);
		normal_bg = NULL;
		gdk_rgba_free (normal_bg);
		normal_bg = NULL;
		_tmp22_ = g_strdup ("-gtk-secondary-caret-color");
		_g_free0 (bg_prop);
		bg_prop = _tmp22_;
		_tmp23_ = self->priv->m_style_context;
		_tmp24_ = bg_prop;
		gtk_style_context_get (_tmp23_, GTK_STATE_FLAG_NORMAL, _tmp24_, &_tmp25_, NULL);
		normal_bg = _tmp25_;
		_tmp26_ = self->priv->m_style_context;
		_tmp27_ = bg_prop;
		gtk_style_context_get (_tmp26_, GTK_STATE_FLAG_SELECTED, _tmp27_, &_tmp28_, NULL);
		selected_bg = _tmp28_;
	}
	_tmp29_ = normal_fg;
	themed_rgba_set_normal_fg (self, _tmp29_);
	_tmp30_ = normal_bg;
	themed_rgba_set_normal_bg (self, _tmp30_);
	_tmp31_ = selected_fg;
	themed_rgba_set_selected_fg (self, _tmp31_);
	_tmp32_ = selected_bg;
	themed_rgba_set_selected_bg (self, _tmp32_);
	_g_free0 (bg_prop);
}

GdkRGBA*
themed_rgba_get_normal_fg (ThemedRGBA* self)
{
	GdkRGBA* result;
	GdkRGBA* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_normal_fg;
	result = _tmp0_;
	return result;
}

void
themed_rgba_set_normal_fg (ThemedRGBA* self,
                           GdkRGBA* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_normal_fg = value;
}

GdkRGBA*
themed_rgba_get_normal_bg (ThemedRGBA* self)
{
	GdkRGBA* result;
	GdkRGBA* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_normal_bg;
	result = _tmp0_;
	return result;
}

void
themed_rgba_set_normal_bg (ThemedRGBA* self,
                           GdkRGBA* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_normal_bg = value;
}

GdkRGBA*
themed_rgba_get_selected_fg (ThemedRGBA* self)
{
	GdkRGBA* result;
	GdkRGBA* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_selected_fg;
	result = _tmp0_;
	return result;
}

void
themed_rgba_set_selected_fg (ThemedRGBA* self,
                             GdkRGBA* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_selected_fg = value;
}

GdkRGBA*
themed_rgba_get_selected_bg (ThemedRGBA* self)
{
	GdkRGBA* result;
	GdkRGBA* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_selected_bg;
	result = _tmp0_;
	return result;
}

void
themed_rgba_set_selected_bg (ThemedRGBA* self,
                             GdkRGBA* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_selected_bg = value;
}

static void
value_themed_rgba_init (GValue* value)
{
	value->data[0].v_pointer = NULL;
}

static void
value_themed_rgba_free_value (GValue* value)
{
	if (value->data[0].v_pointer) {
		themed_rgba_unref (value->data[0].v_pointer);
	}
}

static void
value_themed_rgba_copy_value (const GValue* src_value,
                              GValue* dest_value)
{
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = themed_rgba_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}

static gpointer
value_themed_rgba_peek_pointer (const GValue* value)
{
	return value->data[0].v_pointer;
}

static gchar*
value_themed_rgba_collect_value (GValue* value,
                                 guint n_collect_values,
                                 GTypeCValue* collect_values,
                                 guint collect_flags)
{
	if (collect_values[0].v_pointer) {
		ThemedRGBA * object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = themed_rgba_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}

static gchar*
value_themed_rgba_lcopy_value (const GValue* value,
                               guint n_collect_values,
                               GTypeCValue* collect_values,
                               guint collect_flags)
{
	ThemedRGBA ** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = themed_rgba_ref (value->data[0].v_pointer);
	}
	return NULL;
}

GParamSpec*
param_spec_themed_rgba (const gchar* name,
                        const gchar* nick,
                        const gchar* blurb,
                        GType object_type,
                        GParamFlags flags)
{
	ParamSpecThemedRGBA* spec;
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_THEMED_RGBA), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}

gpointer
value_get_themed_rgba (const GValue* value)
{
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_THEMED_RGBA), NULL);
	return value->data[0].v_pointer;
}

void
value_set_themed_rgba (GValue* value,
                       gpointer v_object)
{
	ThemedRGBA * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_THEMED_RGBA));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_THEMED_RGBA));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		themed_rgba_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		themed_rgba_unref (old);
	}
}

void
value_take_themed_rgba (GValue* value,
                        gpointer v_object)
{
	ThemedRGBA * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_THEMED_RGBA));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_THEMED_RGBA));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		themed_rgba_unref (old);
	}
}

static void
themed_rgba_class_init (ThemedRGBAClass * klass,
                        gpointer klass_data)
{
	themed_rgba_parent_class = g_type_class_peek_parent (klass);
	((ThemedRGBAClass *) klass)->finalize = themed_rgba_finalize;
	g_type_class_adjust_private_offset (klass, &ThemedRGBA_private_offset);
}

static void
themed_rgba_instance_init (ThemedRGBA * self,
                           gpointer klass)
{
	self->priv = themed_rgba_get_instance_private (self);
	self->ref_count = 1;
}

static void
themed_rgba_finalize (ThemedRGBA * obj)
{
	ThemedRGBA * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_THEMED_RGBA, ThemedRGBA);
	g_signal_handlers_destroy (self);
	themed_rgba_reset_rgba (self);
	_g_object_unref0 (self->priv->m_style_context);
}

static GType
themed_rgba_get_type_once (void)
{
	static const GTypeValueTable g_define_type_value_table = { value_themed_rgba_init, value_themed_rgba_free_value, value_themed_rgba_copy_value, value_themed_rgba_peek_pointer, "p", value_themed_rgba_collect_value, "p", value_themed_rgba_lcopy_value };
	static const GTypeInfo g_define_type_info = { sizeof (ThemedRGBAClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) themed_rgba_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ThemedRGBA), 0, (GInstanceInitFunc) themed_rgba_instance_init, &g_define_type_value_table };
	static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
	GType themed_rgba_type_id;
	themed_rgba_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ThemedRGBA", &g_define_type_info, &g_define_type_fundamental_info, 0);
	ThemedRGBA_private_offset = g_type_add_instance_private (themed_rgba_type_id, sizeof (ThemedRGBAPrivate));
	return themed_rgba_type_id;
}

GType
themed_rgba_get_type (void)
{
	static volatile gsize themed_rgba_type_id__volatile = 0;
	if (g_once_init_enter (&themed_rgba_type_id__volatile)) {
		GType themed_rgba_type_id;
		themed_rgba_type_id = themed_rgba_get_type_once ();
		g_once_init_leave (&themed_rgba_type_id__volatile, themed_rgba_type_id);
	}
	return themed_rgba_type_id__volatile;
}

gpointer
themed_rgba_ref (gpointer instance)
{
	ThemedRGBA * self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}

void
themed_rgba_unref (gpointer instance)
{
	ThemedRGBA * self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		THEMED_RGBA_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}

/**
     * IconWidget:
     * @icon_name_or_path: Can be a name or path but not stock id
     *     because gtk_icon_theme_load_icon() cannot fallback the
     *     stock id to a real file name against
     *     gtk_image_new_from_stock().
     * @size: #Gtk.IconSize
     */
static gchar
string_get (const gchar* self,
            glong index)
{
	gchar _tmp0_;
	gchar result = '\0';
	g_return_val_if_fail (self != NULL, '\0');
	_tmp0_ = ((gchar*) self)[index];
	result = _tmp0_;
	return result;
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

IconWidget*
icon_widget_construct (GType object_type,
                       const gchar* icon_name_or_path,
                       GtkIconSize size)
{
	IconWidget * self = NULL;
	GdkPixbuf* pixbuf = NULL;
	gint fixed_width = 0;
	gint fixed_height = 0;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	GdkPixbuf* _tmp17_;
	gfloat width = 0.0F;
	GdkPixbuf* _tmp18_;
	gfloat height = 0.0F;
	GdkPixbuf* _tmp19_;
	gfloat _tmp20_ = 0.0F;
	gfloat scale = 0.0F;
	GdkPixbuf* _tmp21_;
	GdkPixbuf* _tmp22_;
	GdkPixbuf* _tmp23_;
	GError* _inner_error0_ = NULL;
	g_return_val_if_fail (icon_name_or_path != NULL, NULL);
	self = (IconWidget*) g_object_new (object_type, NULL);
	pixbuf = NULL;
	gtk_icon_size_lookup (size, &_tmp0_, &_tmp1_);
	fixed_width = _tmp0_;
	fixed_height = _tmp1_;
	{
		if (string_get (icon_name_or_path, (glong) 0) == '/') {
			GdkPixbuf* _tmp2_ = NULL;
			GdkPixbuf* _tmp3_;
			GdkPixbuf* _tmp4_;
			_tmp3_ = gdk_pixbuf_new_from_file (icon_name_or_path, &_inner_error0_);
			_tmp2_ = _tmp3_;
			if (G_UNLIKELY (_inner_error0_ != NULL)) {
				goto __catch0_g_error;
			}
			_tmp4_ = _tmp2_;
			_tmp2_ = NULL;
			_g_object_unref0 (pixbuf);
			pixbuf = _tmp4_;
			_g_object_unref0 (_tmp2_);
		} else {
			GtkIconTheme* theme = NULL;
			GtkIconTheme* _tmp5_;
			GtkIconTheme* _tmp6_;
			GdkPixbuf* _tmp7_ = NULL;
			GtkIconTheme* _tmp8_;
			GdkPixbuf* _tmp9_;
			GdkPixbuf* _tmp10_;
			_tmp5_ = gtk_icon_theme_get_default ();
			_tmp6_ = _g_object_ref0 (_tmp5_);
			theme = _tmp6_;
			_tmp8_ = theme;
			_tmp9_ = gtk_icon_theme_load_icon (_tmp8_, icon_name_or_path, fixed_width, 0, &_inner_error0_);
			_tmp7_ = _tmp9_;
			if (G_UNLIKELY (_inner_error0_ != NULL)) {
				_g_object_unref0 (theme);
				goto __catch0_g_error;
			}
			_tmp10_ = _tmp7_;
			_tmp7_ = NULL;
			_g_object_unref0 (pixbuf);
			pixbuf = _tmp10_;
			_g_object_unref0 (_tmp7_);
			_g_object_unref0 (theme);
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
		g_clear_error (&_inner_error0_);
		{
			GtkIconTheme* theme = NULL;
			GtkIconTheme* _tmp11_;
			GtkIconTheme* _tmp12_;
			GdkPixbuf* _tmp13_ = NULL;
			GtkIconTheme* _tmp14_;
			GdkPixbuf* _tmp15_;
			GdkPixbuf* _tmp16_;
			_tmp11_ = gtk_icon_theme_get_default ();
			_tmp12_ = _g_object_ref0 (_tmp11_);
			theme = _tmp12_;
			_tmp14_ = theme;
			_tmp15_ = gtk_icon_theme_load_icon (_tmp14_, "ibus-engine", fixed_width, 0, &_inner_error0_);
			_tmp13_ = _tmp15_;
			if (G_UNLIKELY (_inner_error0_ != NULL)) {
				_g_object_unref0 (theme);
				goto __catch1_g_error;
			}
			_tmp16_ = _tmp13_;
			_tmp13_ = NULL;
			_g_object_unref0 (pixbuf);
			pixbuf = _tmp16_;
			_g_object_unref0 (_tmp13_);
			_g_object_unref0 (theme);
		}
		goto __finally1;
		__catch1_g_error:
		{
			g_clear_error (&_inner_error0_);
			gtk_image_set_from_icon_name ((GtkImage*) self, "image-missing", (GtkIconSize) size);
			_g_object_unref0 (pixbuf);
			return self;
		}
		__finally1:
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			_g_object_unref0 (pixbuf);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
			g_clear_error (&_inner_error0_);
			return NULL;
		}
	}
	__finally0:
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		_g_object_unref0 (pixbuf);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
		g_clear_error (&_inner_error0_);
		return NULL;
	}
	_tmp17_ = pixbuf;
	if (_tmp17_ == NULL) {
		_g_object_unref0 (pixbuf);
		return self;
	}
	_tmp18_ = pixbuf;
	width = (gfloat) gdk_pixbuf_get_width (_tmp18_);
	_tmp19_ = pixbuf;
	height = (gfloat) gdk_pixbuf_get_height (_tmp19_);
	if (width > height) {
		_tmp20_ = width;
	} else {
		_tmp20_ = height;
	}
	scale = fixed_width / _tmp20_;
	width *= scale;
	height *= scale;
	_tmp21_ = pixbuf;
	_tmp22_ = gdk_pixbuf_scale_simple (_tmp21_, (gint) width, (gint) height, GDK_INTERP_BILINEAR);
	_g_object_unref0 (pixbuf);
	pixbuf = _tmp22_;
	_tmp23_ = pixbuf;
	gtk_image_set_from_pixbuf ((GtkImage*) self, _tmp23_);
	gtk_widget_show ((GtkWidget*) self);
	_g_object_unref0 (pixbuf);
	return self;
}

IconWidget*
icon_widget_new (const gchar* icon_name_or_path,
                 GtkIconSize size)
{
	return icon_widget_construct (TYPE_ICON_WIDGET, icon_name_or_path, size);
}

static void
icon_widget_class_init (IconWidgetClass * klass,
                        gpointer klass_data)
{
	icon_widget_parent_class = g_type_class_peek_parent (klass);
}

static void
icon_widget_instance_init (IconWidget * self,
                           gpointer klass)
{
}

static GType
icon_widget_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (IconWidgetClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) icon_widget_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (IconWidget), 0, (GInstanceInitFunc) icon_widget_instance_init, NULL };
	GType icon_widget_type_id;
	icon_widget_type_id = g_type_register_static (gtk_image_get_type (), "IconWidget", &g_define_type_info, 0);
	return icon_widget_type_id;
}

GType
icon_widget_get_type (void)
{
	static volatile gsize icon_widget_type_id__volatile = 0;
	if (g_once_init_enter (&icon_widget_type_id__volatile)) {
		GType icon_widget_type_id;
		icon_widget_type_id = icon_widget_get_type_once ();
		g_once_init_leave (&icon_widget_type_id__volatile, icon_widget_type_id);
	}
	return icon_widget_type_id__volatile;
}
