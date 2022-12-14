/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef ____IBUS_PORTAL_DBUS_H__
#define ____IBUS_PORTAL_DBUS_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.IBus.Portal */

#define IBUS_DBUS_TYPE_PORTAL (ibus_dbus_portal_get_type ())
#define IBUS_DBUS_PORTAL(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), IBUS_DBUS_TYPE_PORTAL, IBusDbusPortal))
#define IBUS_DBUS_IS_PORTAL(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), IBUS_DBUS_TYPE_PORTAL))
#define IBUS_DBUS_PORTAL_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), IBUS_DBUS_TYPE_PORTAL, IBusDbusPortalIface))

struct _IBusDbusPortal;
typedef struct _IBusDbusPortal IBusDbusPortal;
typedef struct _IBusDbusPortalIface IBusDbusPortalIface;

struct _IBusDbusPortalIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_create_input_context) (
    IBusDbusPortal *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_client_name);

};

GType ibus_dbus_portal_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *ibus_dbus_portal_interface_info (void);
guint ibus_dbus_portal_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void ibus_dbus_portal_complete_create_input_context (
    IBusDbusPortal *object,
    GDBusMethodInvocation *invocation,
    const gchar *object_path);



/* D-Bus method calls: */
void ibus_dbus_portal_call_create_input_context (
    IBusDbusPortal *proxy,
    const gchar *arg_client_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_portal_call_create_input_context_finish (
    IBusDbusPortal *proxy,
    gchar **out_object_path,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_portal_call_create_input_context_sync (
    IBusDbusPortal *proxy,
    const gchar *arg_client_name,
    gchar **out_object_path,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define IBUS_DBUS_TYPE_PORTAL_PROXY (ibus_dbus_portal_proxy_get_type ())
#define IBUS_DBUS_PORTAL_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), IBUS_DBUS_TYPE_PORTAL_PROXY, IBusDbusPortalProxy))
#define IBUS_DBUS_PORTAL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), IBUS_DBUS_TYPE_PORTAL_PROXY, IBusDbusPortalProxyClass))
#define IBUS_DBUS_PORTAL_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), IBUS_DBUS_TYPE_PORTAL_PROXY, IBusDbusPortalProxyClass))
#define IBUS_DBUS_IS_PORTAL_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), IBUS_DBUS_TYPE_PORTAL_PROXY))
#define IBUS_DBUS_IS_PORTAL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), IBUS_DBUS_TYPE_PORTAL_PROXY))

typedef struct _IBusDbusPortalProxy IBusDbusPortalProxy;
typedef struct _IBusDbusPortalProxyClass IBusDbusPortalProxyClass;
typedef struct _IBusDbusPortalProxyPrivate IBusDbusPortalProxyPrivate;

struct _IBusDbusPortalProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  IBusDbusPortalProxyPrivate *priv;
};

struct _IBusDbusPortalProxyClass
{
  GDBusProxyClass parent_class;
};

GType ibus_dbus_portal_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (IBusDbusPortalProxy, g_object_unref)
#endif

void ibus_dbus_portal_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
IBusDbusPortal *ibus_dbus_portal_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
IBusDbusPortal *ibus_dbus_portal_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void ibus_dbus_portal_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
IBusDbusPortal *ibus_dbus_portal_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
IBusDbusPortal *ibus_dbus_portal_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define IBUS_DBUS_TYPE_PORTAL_SKELETON (ibus_dbus_portal_skeleton_get_type ())
#define IBUS_DBUS_PORTAL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), IBUS_DBUS_TYPE_PORTAL_SKELETON, IBusDbusPortalSkeleton))
#define IBUS_DBUS_PORTAL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), IBUS_DBUS_TYPE_PORTAL_SKELETON, IBusDbusPortalSkeletonClass))
#define IBUS_DBUS_PORTAL_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), IBUS_DBUS_TYPE_PORTAL_SKELETON, IBusDbusPortalSkeletonClass))
#define IBUS_DBUS_IS_PORTAL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), IBUS_DBUS_TYPE_PORTAL_SKELETON))
#define IBUS_DBUS_IS_PORTAL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), IBUS_DBUS_TYPE_PORTAL_SKELETON))

typedef struct _IBusDbusPortalSkeleton IBusDbusPortalSkeleton;
typedef struct _IBusDbusPortalSkeletonClass IBusDbusPortalSkeletonClass;
typedef struct _IBusDbusPortalSkeletonPrivate IBusDbusPortalSkeletonPrivate;

struct _IBusDbusPortalSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  IBusDbusPortalSkeletonPrivate *priv;
};

struct _IBusDbusPortalSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType ibus_dbus_portal_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (IBusDbusPortalSkeleton, g_object_unref)
#endif

IBusDbusPortal *ibus_dbus_portal_skeleton_new (void);


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.IBus.InputContext */

#define IBUS_DBUS_TYPE_INPUT_CONTEXT (ibus_dbus_input_context_get_type ())
#define IBUS_DBUS_INPUT_CONTEXT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), IBUS_DBUS_TYPE_INPUT_CONTEXT, IBusDbusInputContext))
#define IBUS_DBUS_IS_INPUT_CONTEXT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), IBUS_DBUS_TYPE_INPUT_CONTEXT))
#define IBUS_DBUS_INPUT_CONTEXT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), IBUS_DBUS_TYPE_INPUT_CONTEXT, IBusDbusInputContextIface))

struct _IBusDbusInputContext;
typedef struct _IBusDbusInputContext IBusDbusInputContext;
typedef struct _IBusDbusInputContextIface IBusDbusInputContextIface;

struct _IBusDbusInputContextIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_cancel_hand_writing) (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation,
    guint arg_n_strokes);

  gboolean (*handle_focus_in) (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_focus_out) (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_engine) (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_process_hand_writing_event) (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_coordinates);

  gboolean (*handle_process_key_event) (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation,
    guint arg_keyval,
    guint arg_keycode,
    guint arg_state);

  gboolean (*handle_property_activate) (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name,
    guint arg_state);

  gboolean (*handle_reset) (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_set_capabilities) (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation,
    guint arg_caps);

  gboolean (*handle_set_cursor_location) (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation,
    gint arg_x,
    gint arg_y,
    gint arg_w,
    gint arg_h);

  gboolean (*handle_set_cursor_location_relative) (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation,
    gint arg_x,
    gint arg_y,
    gint arg_w,
    gint arg_h);

  gboolean (*handle_set_engine) (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

  gboolean (*handle_set_surrounding_text) (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_text,
    guint arg_cursor_pos,
    guint arg_anchor_pos);

  GVariant * (*get_client_commit_preedit) (IBusDbusInputContext *object);

  GVariant * (*get_content_type) (IBusDbusInputContext *object);

  void (*commit_text) (
    IBusDbusInputContext *object,
    GVariant *arg_text);

  void (*cursor_down_lookup_table) (
    IBusDbusInputContext *object);

  void (*cursor_up_lookup_table) (
    IBusDbusInputContext *object);

  void (*forward_key_event) (
    IBusDbusInputContext *object,
    guint arg_keyval,
    guint arg_keycode,
    guint arg_state);

  void (*hide_auxiliary_text) (
    IBusDbusInputContext *object);

  void (*hide_lookup_table) (
    IBusDbusInputContext *object);

  void (*hide_preedit_text) (
    IBusDbusInputContext *object);

  void (*page_down_lookup_table) (
    IBusDbusInputContext *object);

  void (*page_up_lookup_table) (
    IBusDbusInputContext *object);

  void (*register_properties) (
    IBusDbusInputContext *object,
    GVariant *arg_props);

  void (*show_auxiliary_text) (
    IBusDbusInputContext *object);

  void (*show_lookup_table) (
    IBusDbusInputContext *object);

  void (*show_preedit_text) (
    IBusDbusInputContext *object);

  void (*update_auxiliary_text) (
    IBusDbusInputContext *object,
    GVariant *arg_text,
    gboolean arg_visible);

  void (*update_lookup_table) (
    IBusDbusInputContext *object,
    GVariant *arg_table,
    gboolean arg_visible);

  void (*update_preedit_text) (
    IBusDbusInputContext *object,
    GVariant *arg_text,
    guint arg_cursor_pos,
    gboolean arg_visible);

  void (*update_preedit_text_with_mode) (
    IBusDbusInputContext *object,
    GVariant *arg_text,
    guint arg_cursor_pos,
    gboolean arg_visible,
    guint arg_mode);

  void (*update_property) (
    IBusDbusInputContext *object,
    GVariant *arg_prop);

};

GType ibus_dbus_input_context_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *ibus_dbus_input_context_interface_info (void);
guint ibus_dbus_input_context_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void ibus_dbus_input_context_complete_process_key_event (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation,
    gboolean handled);

void ibus_dbus_input_context_complete_set_cursor_location (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

void ibus_dbus_input_context_complete_set_cursor_location_relative (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

void ibus_dbus_input_context_complete_process_hand_writing_event (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

void ibus_dbus_input_context_complete_cancel_hand_writing (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

void ibus_dbus_input_context_complete_focus_in (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

void ibus_dbus_input_context_complete_focus_out (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

void ibus_dbus_input_context_complete_reset (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

void ibus_dbus_input_context_complete_set_capabilities (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

void ibus_dbus_input_context_complete_property_activate (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

void ibus_dbus_input_context_complete_set_engine (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);

void ibus_dbus_input_context_complete_get_engine (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation,
    GVariant *desc);

void ibus_dbus_input_context_complete_set_surrounding_text (
    IBusDbusInputContext *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void ibus_dbus_input_context_emit_commit_text (
    IBusDbusInputContext *object,
    GVariant *arg_text);

void ibus_dbus_input_context_emit_forward_key_event (
    IBusDbusInputContext *object,
    guint arg_keyval,
    guint arg_keycode,
    guint arg_state);

void ibus_dbus_input_context_emit_update_preedit_text (
    IBusDbusInputContext *object,
    GVariant *arg_text,
    guint arg_cursor_pos,
    gboolean arg_visible);

void ibus_dbus_input_context_emit_update_preedit_text_with_mode (
    IBusDbusInputContext *object,
    GVariant *arg_text,
    guint arg_cursor_pos,
    gboolean arg_visible,
    guint arg_mode);

void ibus_dbus_input_context_emit_show_preedit_text (
    IBusDbusInputContext *object);

void ibus_dbus_input_context_emit_hide_preedit_text (
    IBusDbusInputContext *object);

void ibus_dbus_input_context_emit_update_auxiliary_text (
    IBusDbusInputContext *object,
    GVariant *arg_text,
    gboolean arg_visible);

void ibus_dbus_input_context_emit_show_auxiliary_text (
    IBusDbusInputContext *object);

void ibus_dbus_input_context_emit_hide_auxiliary_text (
    IBusDbusInputContext *object);

void ibus_dbus_input_context_emit_update_lookup_table (
    IBusDbusInputContext *object,
    GVariant *arg_table,
    gboolean arg_visible);

void ibus_dbus_input_context_emit_show_lookup_table (
    IBusDbusInputContext *object);

void ibus_dbus_input_context_emit_hide_lookup_table (
    IBusDbusInputContext *object);

void ibus_dbus_input_context_emit_page_up_lookup_table (
    IBusDbusInputContext *object);

void ibus_dbus_input_context_emit_page_down_lookup_table (
    IBusDbusInputContext *object);

void ibus_dbus_input_context_emit_cursor_up_lookup_table (
    IBusDbusInputContext *object);

void ibus_dbus_input_context_emit_cursor_down_lookup_table (
    IBusDbusInputContext *object);

void ibus_dbus_input_context_emit_register_properties (
    IBusDbusInputContext *object,
    GVariant *arg_props);

void ibus_dbus_input_context_emit_update_property (
    IBusDbusInputContext *object,
    GVariant *arg_prop);



/* D-Bus method calls: */
void ibus_dbus_input_context_call_process_key_event (
    IBusDbusInputContext *proxy,
    guint arg_keyval,
    guint arg_keycode,
    guint arg_state,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_input_context_call_process_key_event_finish (
    IBusDbusInputContext *proxy,
    gboolean *out_handled,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_input_context_call_process_key_event_sync (
    IBusDbusInputContext *proxy,
    guint arg_keyval,
    guint arg_keycode,
    guint arg_state,
    gboolean *out_handled,
    GCancellable *cancellable,
    GError **error);

void ibus_dbus_input_context_call_set_cursor_location (
    IBusDbusInputContext *proxy,
    gint arg_x,
    gint arg_y,
    gint arg_w,
    gint arg_h,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_input_context_call_set_cursor_location_finish (
    IBusDbusInputContext *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_input_context_call_set_cursor_location_sync (
    IBusDbusInputContext *proxy,
    gint arg_x,
    gint arg_y,
    gint arg_w,
    gint arg_h,
    GCancellable *cancellable,
    GError **error);

void ibus_dbus_input_context_call_set_cursor_location_relative (
    IBusDbusInputContext *proxy,
    gint arg_x,
    gint arg_y,
    gint arg_w,
    gint arg_h,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_input_context_call_set_cursor_location_relative_finish (
    IBusDbusInputContext *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_input_context_call_set_cursor_location_relative_sync (
    IBusDbusInputContext *proxy,
    gint arg_x,
    gint arg_y,
    gint arg_w,
    gint arg_h,
    GCancellable *cancellable,
    GError **error);

void ibus_dbus_input_context_call_process_hand_writing_event (
    IBusDbusInputContext *proxy,
    GVariant *arg_coordinates,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_input_context_call_process_hand_writing_event_finish (
    IBusDbusInputContext *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_input_context_call_process_hand_writing_event_sync (
    IBusDbusInputContext *proxy,
    GVariant *arg_coordinates,
    GCancellable *cancellable,
    GError **error);

void ibus_dbus_input_context_call_cancel_hand_writing (
    IBusDbusInputContext *proxy,
    guint arg_n_strokes,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_input_context_call_cancel_hand_writing_finish (
    IBusDbusInputContext *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_input_context_call_cancel_hand_writing_sync (
    IBusDbusInputContext *proxy,
    guint arg_n_strokes,
    GCancellable *cancellable,
    GError **error);

void ibus_dbus_input_context_call_focus_in (
    IBusDbusInputContext *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_input_context_call_focus_in_finish (
    IBusDbusInputContext *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_input_context_call_focus_in_sync (
    IBusDbusInputContext *proxy,
    GCancellable *cancellable,
    GError **error);

void ibus_dbus_input_context_call_focus_out (
    IBusDbusInputContext *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_input_context_call_focus_out_finish (
    IBusDbusInputContext *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_input_context_call_focus_out_sync (
    IBusDbusInputContext *proxy,
    GCancellable *cancellable,
    GError **error);

void ibus_dbus_input_context_call_reset (
    IBusDbusInputContext *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_input_context_call_reset_finish (
    IBusDbusInputContext *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_input_context_call_reset_sync (
    IBusDbusInputContext *proxy,
    GCancellable *cancellable,
    GError **error);

void ibus_dbus_input_context_call_set_capabilities (
    IBusDbusInputContext *proxy,
    guint arg_caps,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_input_context_call_set_capabilities_finish (
    IBusDbusInputContext *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_input_context_call_set_capabilities_sync (
    IBusDbusInputContext *proxy,
    guint arg_caps,
    GCancellable *cancellable,
    GError **error);

void ibus_dbus_input_context_call_property_activate (
    IBusDbusInputContext *proxy,
    const gchar *arg_name,
    guint arg_state,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_input_context_call_property_activate_finish (
    IBusDbusInputContext *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_input_context_call_property_activate_sync (
    IBusDbusInputContext *proxy,
    const gchar *arg_name,
    guint arg_state,
    GCancellable *cancellable,
    GError **error);

void ibus_dbus_input_context_call_set_engine (
    IBusDbusInputContext *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_input_context_call_set_engine_finish (
    IBusDbusInputContext *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_input_context_call_set_engine_sync (
    IBusDbusInputContext *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GError **error);

void ibus_dbus_input_context_call_get_engine (
    IBusDbusInputContext *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_input_context_call_get_engine_finish (
    IBusDbusInputContext *proxy,
    GVariant **out_desc,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_input_context_call_get_engine_sync (
    IBusDbusInputContext *proxy,
    GVariant **out_desc,
    GCancellable *cancellable,
    GError **error);

void ibus_dbus_input_context_call_set_surrounding_text (
    IBusDbusInputContext *proxy,
    GVariant *arg_text,
    guint arg_cursor_pos,
    guint arg_anchor_pos,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_input_context_call_set_surrounding_text_finish (
    IBusDbusInputContext *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_input_context_call_set_surrounding_text_sync (
    IBusDbusInputContext *proxy,
    GVariant *arg_text,
    guint arg_cursor_pos,
    guint arg_anchor_pos,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
GVariant *ibus_dbus_input_context_get_content_type (IBusDbusInputContext *object);
GVariant *ibus_dbus_input_context_dup_content_type (IBusDbusInputContext *object);
void ibus_dbus_input_context_set_content_type (IBusDbusInputContext *object, GVariant *value);

GVariant *ibus_dbus_input_context_get_client_commit_preedit (IBusDbusInputContext *object);
GVariant *ibus_dbus_input_context_dup_client_commit_preedit (IBusDbusInputContext *object);
void ibus_dbus_input_context_set_client_commit_preedit (IBusDbusInputContext *object, GVariant *value);


/* ---- */

#define IBUS_DBUS_TYPE_INPUT_CONTEXT_PROXY (ibus_dbus_input_context_proxy_get_type ())
#define IBUS_DBUS_INPUT_CONTEXT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), IBUS_DBUS_TYPE_INPUT_CONTEXT_PROXY, IBusDbusInputContextProxy))
#define IBUS_DBUS_INPUT_CONTEXT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), IBUS_DBUS_TYPE_INPUT_CONTEXT_PROXY, IBusDbusInputContextProxyClass))
#define IBUS_DBUS_INPUT_CONTEXT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), IBUS_DBUS_TYPE_INPUT_CONTEXT_PROXY, IBusDbusInputContextProxyClass))
#define IBUS_DBUS_IS_INPUT_CONTEXT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), IBUS_DBUS_TYPE_INPUT_CONTEXT_PROXY))
#define IBUS_DBUS_IS_INPUT_CONTEXT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), IBUS_DBUS_TYPE_INPUT_CONTEXT_PROXY))

typedef struct _IBusDbusInputContextProxy IBusDbusInputContextProxy;
typedef struct _IBusDbusInputContextProxyClass IBusDbusInputContextProxyClass;
typedef struct _IBusDbusInputContextProxyPrivate IBusDbusInputContextProxyPrivate;

struct _IBusDbusInputContextProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  IBusDbusInputContextProxyPrivate *priv;
};

struct _IBusDbusInputContextProxyClass
{
  GDBusProxyClass parent_class;
};

GType ibus_dbus_input_context_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (IBusDbusInputContextProxy, g_object_unref)
#endif

void ibus_dbus_input_context_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
IBusDbusInputContext *ibus_dbus_input_context_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
IBusDbusInputContext *ibus_dbus_input_context_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void ibus_dbus_input_context_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
IBusDbusInputContext *ibus_dbus_input_context_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
IBusDbusInputContext *ibus_dbus_input_context_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define IBUS_DBUS_TYPE_INPUT_CONTEXT_SKELETON (ibus_dbus_input_context_skeleton_get_type ())
#define IBUS_DBUS_INPUT_CONTEXT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), IBUS_DBUS_TYPE_INPUT_CONTEXT_SKELETON, IBusDbusInputContextSkeleton))
#define IBUS_DBUS_INPUT_CONTEXT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), IBUS_DBUS_TYPE_INPUT_CONTEXT_SKELETON, IBusDbusInputContextSkeletonClass))
#define IBUS_DBUS_INPUT_CONTEXT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), IBUS_DBUS_TYPE_INPUT_CONTEXT_SKELETON, IBusDbusInputContextSkeletonClass))
#define IBUS_DBUS_IS_INPUT_CONTEXT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), IBUS_DBUS_TYPE_INPUT_CONTEXT_SKELETON))
#define IBUS_DBUS_IS_INPUT_CONTEXT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), IBUS_DBUS_TYPE_INPUT_CONTEXT_SKELETON))

typedef struct _IBusDbusInputContextSkeleton IBusDbusInputContextSkeleton;
typedef struct _IBusDbusInputContextSkeletonClass IBusDbusInputContextSkeletonClass;
typedef struct _IBusDbusInputContextSkeletonPrivate IBusDbusInputContextSkeletonPrivate;

struct _IBusDbusInputContextSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  IBusDbusInputContextSkeletonPrivate *priv;
};

struct _IBusDbusInputContextSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType ibus_dbus_input_context_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (IBusDbusInputContextSkeleton, g_object_unref)
#endif

IBusDbusInputContext *ibus_dbus_input_context_skeleton_new (void);


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.IBus.Service */

#define IBUS_DBUS_TYPE_SERVICE (ibus_dbus_service_get_type ())
#define IBUS_DBUS_SERVICE(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), IBUS_DBUS_TYPE_SERVICE, IBusDbusService))
#define IBUS_DBUS_IS_SERVICE(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), IBUS_DBUS_TYPE_SERVICE))
#define IBUS_DBUS_SERVICE_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), IBUS_DBUS_TYPE_SERVICE, IBusDbusServiceIface))

struct _IBusDbusService;
typedef struct _IBusDbusService IBusDbusService;
typedef struct _IBusDbusServiceIface IBusDbusServiceIface;

struct _IBusDbusServiceIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_destroy) (
    IBusDbusService *object,
    GDBusMethodInvocation *invocation);

};

GType ibus_dbus_service_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *ibus_dbus_service_interface_info (void);
guint ibus_dbus_service_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void ibus_dbus_service_complete_destroy (
    IBusDbusService *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void ibus_dbus_service_call_destroy (
    IBusDbusService *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ibus_dbus_service_call_destroy_finish (
    IBusDbusService *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ibus_dbus_service_call_destroy_sync (
    IBusDbusService *proxy,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define IBUS_DBUS_TYPE_SERVICE_PROXY (ibus_dbus_service_proxy_get_type ())
#define IBUS_DBUS_SERVICE_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), IBUS_DBUS_TYPE_SERVICE_PROXY, IBusDbusServiceProxy))
#define IBUS_DBUS_SERVICE_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), IBUS_DBUS_TYPE_SERVICE_PROXY, IBusDbusServiceProxyClass))
#define IBUS_DBUS_SERVICE_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), IBUS_DBUS_TYPE_SERVICE_PROXY, IBusDbusServiceProxyClass))
#define IBUS_DBUS_IS_SERVICE_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), IBUS_DBUS_TYPE_SERVICE_PROXY))
#define IBUS_DBUS_IS_SERVICE_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), IBUS_DBUS_TYPE_SERVICE_PROXY))

typedef struct _IBusDbusServiceProxy IBusDbusServiceProxy;
typedef struct _IBusDbusServiceProxyClass IBusDbusServiceProxyClass;
typedef struct _IBusDbusServiceProxyPrivate IBusDbusServiceProxyPrivate;

struct _IBusDbusServiceProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  IBusDbusServiceProxyPrivate *priv;
};

struct _IBusDbusServiceProxyClass
{
  GDBusProxyClass parent_class;
};

GType ibus_dbus_service_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (IBusDbusServiceProxy, g_object_unref)
#endif

void ibus_dbus_service_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
IBusDbusService *ibus_dbus_service_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
IBusDbusService *ibus_dbus_service_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void ibus_dbus_service_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
IBusDbusService *ibus_dbus_service_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
IBusDbusService *ibus_dbus_service_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define IBUS_DBUS_TYPE_SERVICE_SKELETON (ibus_dbus_service_skeleton_get_type ())
#define IBUS_DBUS_SERVICE_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), IBUS_DBUS_TYPE_SERVICE_SKELETON, IBusDbusServiceSkeleton))
#define IBUS_DBUS_SERVICE_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), IBUS_DBUS_TYPE_SERVICE_SKELETON, IBusDbusServiceSkeletonClass))
#define IBUS_DBUS_SERVICE_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), IBUS_DBUS_TYPE_SERVICE_SKELETON, IBusDbusServiceSkeletonClass))
#define IBUS_DBUS_IS_SERVICE_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), IBUS_DBUS_TYPE_SERVICE_SKELETON))
#define IBUS_DBUS_IS_SERVICE_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), IBUS_DBUS_TYPE_SERVICE_SKELETON))

typedef struct _IBusDbusServiceSkeleton IBusDbusServiceSkeleton;
typedef struct _IBusDbusServiceSkeletonClass IBusDbusServiceSkeletonClass;
typedef struct _IBusDbusServiceSkeletonPrivate IBusDbusServiceSkeletonPrivate;

struct _IBusDbusServiceSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  IBusDbusServiceSkeletonPrivate *priv;
};

struct _IBusDbusServiceSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType ibus_dbus_service_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (IBusDbusServiceSkeleton, g_object_unref)
#endif

IBusDbusService *ibus_dbus_service_skeleton_new (void);


G_END_DECLS

#endif /* ____IBUS_PORTAL_DBUS_H__ */
