/* extension.c generated by valac 0.56.12, the Vala compiler
 * generated from extension.vala, do not modify */

/* vim:set et sts=4 sw=4:
 *
 * ibus - The Input Bus
 *
 * Copyright(c) 2018 Peng Huang <shawn.p.huang@gmail.com>
 * Copyright(c) 2018-2020 Takao Fujiwara <takao.fujiwara1@gmail.com>
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
#include <ibus.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <glib/gi18n-lib.h>
#include <config.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define TYPE_EXTENSION_GTK (extension_gtk_get_type ())
#define EXTENSION_GTK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_EXTENSION_GTK, ExtensionGtk))
#define EXTENSION_GTK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_EXTENSION_GTK, ExtensionGtkClass))
#define IS_EXTENSION_GTK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_EXTENSION_GTK))
#define IS_EXTENSION_GTK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_EXTENSION_GTK))
#define EXTENSION_GTK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_EXTENSION_GTK, ExtensionGtkClass))

typedef struct _ExtensionGtk ExtensionGtk;
typedef struct _ExtensionGtkClass ExtensionGtkClass;
typedef struct _ExtensionGtkPrivate ExtensionGtkPrivate;

#define TYPE_PANEL_BINDING (panel_binding_get_type ())
#define PANEL_BINDING(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PANEL_BINDING, PanelBinding))
#define PANEL_BINDING_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PANEL_BINDING, PanelBindingClass))
#define IS_PANEL_BINDING(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PANEL_BINDING))
#define IS_PANEL_BINDING_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PANEL_BINDING))
#define PANEL_BINDING_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PANEL_BINDING, PanelBindingClass))

typedef struct _PanelBinding PanelBinding;
typedef struct _PanelBindingClass PanelBindingClass;
enum  {
	EXTENSION_GTK_0_PROPERTY,
	EXTENSION_GTK_NUM_PROPERTIES
};
static GParamSpec* extension_gtk_properties[EXTENSION_GTK_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ExtensionGtk {
	GtkApplication parent_instance;
	ExtensionGtkPrivate * priv;
};

struct _ExtensionGtkClass {
	GtkApplicationClass parent_class;
};

struct _ExtensionGtkPrivate {
	IBusBus* m_bus;
	PanelBinding* m_panel;
};

static gint ExtensionGtk_private_offset;
static gpointer extension_gtk_parent_class = NULL;

VALA_EXTERN GType extension_gtk_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ExtensionGtk, g_object_unref)
VALA_EXTERN GType panel_binding_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PanelBinding, g_object_unref)
VALA_EXTERN ExtensionGtk* extension_gtk_new (gchar** args,
                                 gint args_length1);
VALA_EXTERN ExtensionGtk* extension_gtk_construct (GType object_type,
                                       gchar** args,
                                       gint args_length1);
static void extension_gtk_bus_connected (ExtensionGtk* self,
                                  IBusBus* bus);
static void _extension_gtk_bus_connected_ibus_bus_connected (IBusBus* _sender,
                                                      gpointer self);
static void extension_gtk_bus_disconnected (ExtensionGtk* self,
                                     IBusBus* bus);
static void _extension_gtk_bus_disconnected_ibus_bus_disconnected (IBusBus* _sender,
                                                            gpointer self);
static void extension_gtk_init (ExtensionGtk* self);
static void extension_gtk_bus_name_acquired_cb (ExtensionGtk* self,
                                         GDBusConnection* connection,
                                         const gchar* sender_name,
                                         const gchar* object_path,
                                         const gchar* interface_name,
                                         const gchar* signal_name,
                                         GVariant* parameters);
static void _extension_gtk_bus_name_acquired_cb_gd_bus_signal_callback (GDBusConnection* connection,
                                                                 const gchar* sender_name,
                                                                 const gchar* object_path,
                                                                 const gchar* interface_name,
                                                                 const gchar* signal_name,
                                                                 GVariant* parameters,
                                                                 gpointer self);
static void extension_gtk_bus_name_lost_cb (ExtensionGtk* self,
                                     GDBusConnection* connection,
                                     const gchar* sender_name,
                                     const gchar* object_path,
                                     const gchar* interface_name,
                                     const gchar* signal_name,
                                     GVariant* parameters);
static void _extension_gtk_bus_name_lost_cb_gd_bus_signal_callback (GDBusConnection* connection,
                                                             const gchar* sender_name,
                                                             const gchar* object_path,
                                                             const gchar* interface_name,
                                                             const gchar* signal_name,
                                                             GVariant* parameters,
                                                             gpointer self);
VALA_EXTERN PanelBinding* panel_binding_new (IBusBus* bus,
                                 GtkApplication* application);
VALA_EXTERN PanelBinding* panel_binding_construct (GType object_type,
                                       IBusBus* bus,
                                       GtkApplication* application);
VALA_EXTERN void panel_binding_load_settings (PanelBinding* self);
VALA_EXTERN void panel_binding_disconnect_signals (PanelBinding* self);
static void extension_gtk_real_activate (GApplication* base);
static gint extension_gtk_main (gchar** args,
                         gint args_length1);
static void extension_gtk_finalize (GObject * obj);
static GType extension_gtk_get_type_once (void);

static inline gpointer
extension_gtk_get_instance_private (ExtensionGtk* self)
{
	return G_STRUCT_MEMBER_P (self, ExtensionGtk_private_offset);
}

static void
_extension_gtk_bus_connected_ibus_bus_connected (IBusBus* _sender,
                                                 gpointer self)
{
	extension_gtk_bus_connected ((ExtensionGtk*) self, _sender);
}

static void
_extension_gtk_bus_disconnected_ibus_bus_disconnected (IBusBus* _sender,
                                                       gpointer self)
{
	extension_gtk_bus_disconnected ((ExtensionGtk*) self, _sender);
}

ExtensionGtk*
extension_gtk_construct (GType object_type,
                         gchar** args,
                         gint args_length1)
{
	ExtensionGtk * self = NULL;
	IBusBus* _tmp0_;
	IBusBus* _tmp1_;
	IBusBus* _tmp2_;
	IBusBus* _tmp3_;
	self = (ExtensionGtk*) g_object_new (object_type, "application-id", "org.freedesktop.IBus.Panel.Extension.Gtk3", "flags", G_APPLICATION_FLAGS_NONE, NULL);
	bindtextdomain (GETTEXT_PACKAGE, LOCALEDIR);
	bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
	ibus_init ();
	gtk_init ((gint*) (&args_length1), &args);
	_tmp0_ = ibus_bus_new ();
	g_object_ref_sink (_tmp0_);
	_g_object_unref0 (self->priv->m_bus);
	self->priv->m_bus = _tmp0_;
	_tmp1_ = self->priv->m_bus;
	g_signal_connect_object (_tmp1_, "connected", (GCallback) _extension_gtk_bus_connected_ibus_bus_connected, self, 0);
	_tmp2_ = self->priv->m_bus;
	g_signal_connect_object (_tmp2_, "disconnected", (GCallback) _extension_gtk_bus_disconnected_ibus_bus_disconnected, self, 0);
	_tmp3_ = self->priv->m_bus;
	if (ibus_bus_is_connected (_tmp3_)) {
		extension_gtk_init (self);
	}
	return self;
}

ExtensionGtk*
extension_gtk_new (gchar** args,
                   gint args_length1)
{
	return extension_gtk_construct (TYPE_EXTENSION_GTK, args, args_length1);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static void
_extension_gtk_bus_name_acquired_cb_gd_bus_signal_callback (GDBusConnection* connection,
                                                            const gchar* sender_name,
                                                            const gchar* object_path,
                                                            const gchar* interface_name,
                                                            const gchar* signal_name,
                                                            GVariant* parameters,
                                                            gpointer self)
{
	extension_gtk_bus_name_acquired_cb ((ExtensionGtk*) self, connection, sender_name, object_path, interface_name, signal_name, parameters);
}

static void
_extension_gtk_bus_name_lost_cb_gd_bus_signal_callback (GDBusConnection* connection,
                                                        const gchar* sender_name,
                                                        const gchar* object_path,
                                                        const gchar* interface_name,
                                                        const gchar* signal_name,
                                                        GVariant* parameters,
                                                        gpointer self)
{
	extension_gtk_bus_name_lost_cb ((ExtensionGtk*) self, connection, sender_name, object_path, interface_name, signal_name, parameters);
}

static void
extension_gtk_init (ExtensionGtk* self)
{
	GDBusConnection* connection = NULL;
	IBusBus* _tmp0_;
	GDBusConnection* _tmp1_;
	GDBusConnection* _tmp2_;
	IBusBusNameFlag flags = 0U;
	IBusBus* _tmp3_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->m_bus;
	_tmp1_ = ibus_bus_get_connection (_tmp0_);
	_tmp2_ = _g_object_ref0 (_tmp1_);
	connection = _tmp2_;
	g_dbus_connection_signal_subscribe (connection, "org.freedesktop.DBus", "org.freedesktop.DBus", "NameAcquired", "/org/freedesktop/DBus", IBUS_SERVICE_PANEL_EXTENSION_EMOJI, G_DBUS_SIGNAL_FLAGS_NONE, _extension_gtk_bus_name_acquired_cb_gd_bus_signal_callback, g_object_ref (self), g_object_unref);
	g_dbus_connection_signal_subscribe (connection, "org.freedesktop.DBus", "org.freedesktop.DBus", "NameLost", "/org/freedesktop/DBus", IBUS_SERVICE_PANEL_EXTENSION_EMOJI, G_DBUS_SIGNAL_FLAGS_NONE, _extension_gtk_bus_name_lost_cb_gd_bus_signal_callback, g_object_ref (self), g_object_unref);
	flags = IBUS_BUS_NAME_FLAG_ALLOW_REPLACEMENT | IBUS_BUS_NAME_FLAG_REPLACE_EXISTING;
	_tmp3_ = self->priv->m_bus;
	ibus_bus_request_name (_tmp3_, IBUS_SERVICE_PANEL_EXTENSION_EMOJI, (guint32) flags);
	_g_object_unref0 (connection);
}

static void
extension_gtk_bus_name_acquired_cb (ExtensionGtk* self,
                                    GDBusConnection* connection,
                                    const gchar* sender_name,
                                    const gchar* object_path,
                                    const gchar* interface_name,
                                    const gchar* signal_name,
                                    GVariant* parameters)
{
	IBusBus* _tmp0_;
	PanelBinding* _tmp1_;
	PanelBinding* _tmp2_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (connection != NULL);
	g_return_if_fail (object_path != NULL);
	g_return_if_fail (interface_name != NULL);
	g_return_if_fail (signal_name != NULL);
	g_return_if_fail (parameters != NULL);
	g_debug ("extension.vala:75: signal_name = %s", signal_name);
	_tmp0_ = self->priv->m_bus;
	_tmp1_ = panel_binding_new (_tmp0_, (GtkApplication*) self);
	g_object_ref_sink (_tmp1_);
	_g_object_unref0 (self->priv->m_panel);
	self->priv->m_panel = _tmp1_;
	_tmp2_ = self->priv->m_panel;
	panel_binding_load_settings (_tmp2_);
}

static void
extension_gtk_bus_name_lost_cb (ExtensionGtk* self,
                                GDBusConnection* connection,
                                const gchar* sender_name,
                                const gchar* object_path,
                                const gchar* interface_name,
                                const gchar* signal_name,
                                GVariant* parameters)
{
	PanelBinding* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (connection != NULL);
	g_return_if_fail (object_path != NULL);
	g_return_if_fail (interface_name != NULL);
	g_return_if_fail (signal_name != NULL);
	g_return_if_fail (parameters != NULL);
	g_debug ("extension.vala:92: signal_name = %s", signal_name);
	_tmp0_ = self->priv->m_panel;
	panel_binding_disconnect_signals (_tmp0_);
	_g_object_unref0 (self->priv->m_panel);
	self->priv->m_panel = NULL;
}

static void
extension_gtk_bus_disconnected (ExtensionGtk* self,
                                IBusBus* bus)
{
	g_return_if_fail (self != NULL);
	g_return_if_fail (bus != NULL);
	g_debug ("extension.vala:100: connection is lost.");
	gtk_main_quit ();
}

static void
extension_gtk_bus_connected (ExtensionGtk* self,
                             IBusBus* bus)
{
	g_return_if_fail (self != NULL);
	g_return_if_fail (bus != NULL);
	extension_gtk_init (self);
}

static void
extension_gtk_real_activate (GApplication* base)
{
	ExtensionGtk * self;
	self = (ExtensionGtk*) base;
	gtk_main ();
}

static gint
extension_gtk_main (gchar** args,
                    gint args_length1)
{
	ExtensionGtk* extension = NULL;
	ExtensionGtk* _tmp0_;
	gint status = 0;
	gint result;
	g_unsetenv ("GDK_CORE_DEVICE_EVENTS");
	_tmp0_ = extension_gtk_new (args, args_length1);
	extension = _tmp0_;
	status = g_application_run ((GApplication*) extension, (gint) args_length1, args);
	result = status;
	_g_object_unref0 (extension);
	return result;
}

int
main (int argc,
      char ** argv)
{
	return extension_gtk_main (argv, argc);
}

static void
extension_gtk_class_init (ExtensionGtkClass * klass,
                          gpointer klass_data)
{
	extension_gtk_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ExtensionGtk_private_offset);
	((GApplicationClass *) klass)->activate = (void (*) (GApplication*)) extension_gtk_real_activate;
	G_OBJECT_CLASS (klass)->finalize = extension_gtk_finalize;
}

static void
extension_gtk_instance_init (ExtensionGtk * self,
                             gpointer klass)
{
	self->priv = extension_gtk_get_instance_private (self);
}

static void
extension_gtk_finalize (GObject * obj)
{
	ExtensionGtk * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_EXTENSION_GTK, ExtensionGtk);
	_g_object_unref0 (self->priv->m_bus);
	_g_object_unref0 (self->priv->m_panel);
	G_OBJECT_CLASS (extension_gtk_parent_class)->finalize (obj);
}

static GType
extension_gtk_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ExtensionGtkClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) extension_gtk_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ExtensionGtk), 0, (GInstanceInitFunc) extension_gtk_instance_init, NULL };
	GType extension_gtk_type_id;
	extension_gtk_type_id = g_type_register_static (gtk_application_get_type (), "ExtensionGtk", &g_define_type_info, 0);
	ExtensionGtk_private_offset = g_type_add_instance_private (extension_gtk_type_id, sizeof (ExtensionGtkPrivate));
	return extension_gtk_type_id;
}

GType
extension_gtk_get_type (void)
{
	static volatile gsize extension_gtk_type_id__once = 0;
	if (g_once_init_enter (&extension_gtk_type_id__once)) {
		GType extension_gtk_type_id;
		extension_gtk_type_id = extension_gtk_get_type_once ();
		g_once_init_leave (&extension_gtk_type_id__once, extension_gtk_type_id);
	}
	return extension_gtk_type_id__once;
}

