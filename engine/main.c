/* main.c generated by valac 0.56.12, the Vala compiler
 * generated from main.vala, do not modify */

/* vim:set et sts=4 sw=4:
 *
 * ibus - The Input Bus
 *
 * Copyright (c) 2011-2013 Peng Huang <shawn.p.huang@gmail.com>
 * Copyright (c) 2015 Takao Fujiwara <takao.fujiwara1@gmail.com>
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

#include <ibus.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <locale.h>
#include <gio/gio.h>
#include <glib/gstdio.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define TYPE_DUMMY_ENGINE (dummy_engine_get_type ())
#define DUMMY_ENGINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DUMMY_ENGINE, DummyEngine))
#define DUMMY_ENGINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DUMMY_ENGINE, DummyEngineClass))
#define IS_DUMMY_ENGINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DUMMY_ENGINE))
#define IS_DUMMY_ENGINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DUMMY_ENGINE))
#define DUMMY_ENGINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DUMMY_ENGINE, DummyEngineClass))

typedef struct _DummyEngine DummyEngine;
typedef struct _DummyEngineClass DummyEngineClass;
typedef struct _DummyEnginePrivate DummyEnginePrivate;
enum  {
	DUMMY_ENGINE_0_PROPERTY,
	DUMMY_ENGINE_NUM_PROPERTIES
};
static GParamSpec* dummy_engine_properties[DUMMY_ENGINE_NUM_PROPERTIES];
typedef struct _Block1Data Block1Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block2Data Block2Data;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _DummyEngine {
	IBusEngineSimple parent_instance;
	DummyEnginePrivate * priv;
};

struct _DummyEngineClass {
	IBusEngineSimpleClass parent_class;
};

struct _Block1Data {
	int _ref_count_;
	IBusBus* bus;
	gint id;
};

struct _Block2Data {
	int _ref_count_;
	Block1Data * _data1_;
	IBusEngine* engine;
};

static gpointer dummy_engine_parent_class = NULL;

VALA_EXTERN GType dummy_engine_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DummyEngine, g_object_unref)
VALA_EXTERN DummyEngine* dummy_engine_new (void);
VALA_EXTERN DummyEngine* dummy_engine_construct (GType object_type);
static GType dummy_engine_get_type_once (void);
static gint _vala_main (gchar** args,
                 gint args_length1);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void __lambda4_ (IBusBus* bus);
static void ___lambda4__ibus_bus_disconnected (IBusBus* _sender,
                                        gpointer self);
static IBusEngine* __lambda5_ (Block1Data* _data1_,
                        IBusFactory* factory,
                        const gchar* name);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (void * _userdata_);
static gboolean __lambda6_ (Block2Data* _data2_);
static gboolean ___lambda6__gsource_func (gpointer self);
static IBusEngine* ___lambda5__ibus_factory_create_engine (IBusFactory* _sender,
                                                    const gchar* engine_name,
                                                    gpointer self);

DummyEngine*
dummy_engine_construct (GType object_type)
{
	DummyEngine * self = NULL;
	self = (DummyEngine*) g_object_new (object_type, NULL);
	return self;
}

DummyEngine*
dummy_engine_new (void)
{
	return dummy_engine_construct (TYPE_DUMMY_ENGINE);
}

static void
dummy_engine_class_init (DummyEngineClass * klass,
                         gpointer klass_data)
{
	dummy_engine_parent_class = g_type_class_peek_parent (klass);
}

static void
dummy_engine_instance_init (DummyEngine * self,
                            gpointer klass)
{
}

static GType
dummy_engine_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (DummyEngineClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) dummy_engine_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DummyEngine), 0, (GInstanceInitFunc) dummy_engine_instance_init, NULL };
	GType dummy_engine_type_id;
	dummy_engine_type_id = g_type_register_static (ibus_engine_simple_get_type (), "DummyEngine", &g_define_type_info, 0);
	return dummy_engine_type_id;
}

GType
dummy_engine_get_type (void)
{
	static volatile gsize dummy_engine_type_id__once = 0;
	if (g_once_init_enter (&dummy_engine_type_id__once)) {
		GType dummy_engine_type_id;
		dummy_engine_type_id = dummy_engine_get_type_once ();
		g_once_init_leave (&dummy_engine_type_id__once, dummy_engine_type_id);
	}
	return dummy_engine_type_id__once;
}

static Block1Data*
block1_data_ref (Block1Data* _data1_)
{
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}

static void
block1_data_unref (void * _userdata_)
{
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		_g_object_unref0 (_data1_->bus);
		g_slice_free (Block1Data, _data1_);
	}
}

static void
__lambda4_ (IBusBus* bus)
{
	g_return_if_fail (bus != NULL);
	g_debug ("main.vala:40: bus disconnected");
	ibus_quit ();
}

static void
___lambda4__ibus_bus_disconnected (IBusBus* _sender,
                                   gpointer self)
{
	__lambda4_ (_sender);
}

static Block2Data*
block2_data_ref (Block2Data* _data2_)
{
	g_atomic_int_inc (&_data2_->_ref_count_);
	return _data2_;
}

static void
block2_data_unref (void * _userdata_)
{
	Block2Data* _data2_;
	_data2_ = (Block2Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
		_g_object_unref0 (_data2_->engine);
		block1_data_unref (_data2_->_data1_);
		_data2_->_data1_ = NULL;
		g_slice_free (Block2Data, _data2_);
	}
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static gboolean
__lambda6_ (Block2Data* _data2_)
{
	Block1Data* _data1_;
	IBusEngineSimple* simple = NULL;
	IBusEngine* _tmp0_;
	IBusEngineSimple* _tmp1_;
	IBusEngineSimple* _tmp2_;
	gchar* user_file = NULL;
	gchar* home = NULL;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	const gchar* _tmp5_;
	const gchar* _tmp11_;
	gchar* _tmp12_;
	const gchar* _tmp13_;
	gboolean result;
	_data1_ = _data2_->_data1_;
	_tmp0_ = _data2_->engine;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, ibus_engine_simple_get_type (), IBusEngineSimple));
	simple = _tmp1_;
	_tmp2_ = simple;
	ibus_engine_simple_add_table_by_locale (_tmp2_, NULL);
	user_file = NULL;
	_tmp3_ = g_get_home_dir ();
	_tmp4_ = g_strdup (_tmp3_);
	home = _tmp4_;
	_tmp5_ = home;
	if (_tmp5_ != NULL) {
		const gchar* _tmp6_;
		gchar* _tmp7_;
		const gchar* _tmp8_;
		_tmp6_ = home;
		_tmp7_ = g_strconcat (_tmp6_, "/.XCompose", NULL);
		_g_free0 (user_file);
		user_file = _tmp7_;
		_tmp8_ = user_file;
		if (g_file_test (_tmp8_, G_FILE_TEST_EXISTS)) {
			IBusEngineSimple* _tmp9_;
			const gchar* _tmp10_;
			_tmp9_ = simple;
			_tmp10_ = user_file;
			ibus_engine_simple_add_compose_file (_tmp9_, _tmp10_);
		}
	}
	_tmp11_ = g_getenv ("XCOMPOSEFILE");
	_tmp12_ = g_strdup (_tmp11_);
	_g_free0 (user_file);
	user_file = _tmp12_;
	_tmp13_ = user_file;
	if (_tmp13_ != NULL) {
		const gchar* _tmp14_;
		_tmp14_ = user_file;
		if (g_file_test (_tmp14_, G_FILE_TEST_EXISTS)) {
			IBusEngineSimple* _tmp15_;
			const gchar* _tmp16_;
			_tmp15_ = simple;
			_tmp16_ = user_file;
			ibus_engine_simple_add_compose_file (_tmp15_, _tmp16_);
		}
	}
	result = FALSE;
	_g_free0 (home);
	_g_free0 (user_file);
	_g_object_unref0 (simple);
	return result;
}

static gboolean
___lambda6__gsource_func (gpointer self)
{
	gboolean result;
	result = __lambda6_ (self);
	return result;
}

static IBusEngine*
__lambda5_ (Block1Data* _data1_,
            IBusFactory* factory,
            const gchar* name)
{
	Block2Data* _data2_;
	static const char path[] = "/org/freedesktop/IBus/engine/simple/%d";
	const gchar* _tmp0_;
	gint _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	IBusBus* _tmp4_;
	GDBusConnection* _tmp5_;
	IBusEngine* _tmp6_;
	IBusEngine* _tmp7_;
	IBusEngine* _tmp8_;
	IBusEngine* _tmp9_;
	IBusEngine* result;
	g_return_val_if_fail (factory != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_data2_ = g_slice_new0 (Block2Data);
	_data2_->_ref_count_ = 1;
	_data2_->_data1_ = block1_data_ref (_data1_);
	if (!g_str_has_prefix (name, "xkb:")) {
		result = NULL;
		block2_data_unref (_data2_);
		_data2_ = NULL;
		return result;
	}
	_tmp0_ = name;
	_data1_->id = _data1_->id + 1;
	_tmp1_ = _data1_->id;
	_tmp2_ = g_strdup_printf (path, _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = _data1_->bus;
	_tmp5_ = ibus_bus_get_connection (_tmp4_);
	_tmp6_ = ibus_engine_new_with_type (ibus_engine_simple_get_type (), _tmp0_, _tmp3_, _tmp5_);
	g_object_ref_sink (_tmp6_);
	_tmp7_ = _tmp6_;
	_g_free0 (_tmp3_);
	_data2_->engine = _tmp7_;
	g_idle_add_full (G_PRIORITY_DEFAULT_IDLE, ___lambda6__gsource_func, block2_data_ref (_data2_), block2_data_unref);
	_tmp8_ = _data2_->engine;
	_tmp9_ = _g_object_ref0 (_tmp8_);
	result = _tmp9_;
	block2_data_unref (_data2_);
	_data2_ = NULL;
	return result;
}

static IBusEngine*
___lambda5__ibus_factory_create_engine (IBusFactory* _sender,
                                        const gchar* engine_name,
                                        gpointer self)
{
	IBusEngine* result;
	result = __lambda5_ (self, _sender, engine_name);
	return result;
}

static gint
_vala_main (gchar** args,
            gint args_length1)
{
	Block1Data* _data1_;
	IBusBus* _tmp0_;
	IBusBus* _tmp1_;
	IBusBus* _tmp2_;
	IBusFactory* factory = NULL;
	IBusBus* _tmp3_;
	GDBusConnection* _tmp4_;
	IBusFactory* _tmp5_;
	IBusFactory* _tmp6_;
	guint flags = 0U;
	guint retval = 0U;
	IBusBus* _tmp7_;
	gint result;
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	setlocale (LC_ALL, "");
	ibus_init ();
	_tmp0_ = ibus_bus_new ();
	g_object_ref_sink (_tmp0_);
	_data1_->bus = _tmp0_;
	_tmp1_ = _data1_->bus;
	if (!ibus_bus_is_connected (_tmp1_)) {
		g_warning ("main.vala:35: ibus-daemon does not exist.");
		result = 1;
		block1_data_unref (_data1_);
		_data1_ = NULL;
		return result;
	}
	_tmp2_ = _data1_->bus;
	g_signal_connect (_tmp2_, "disconnected", (GCallback) ___lambda4__ibus_bus_disconnected, NULL);
	_tmp3_ = _data1_->bus;
	_tmp4_ = ibus_bus_get_connection (_tmp3_);
	_tmp5_ = ibus_factory_new (_tmp4_);
	g_object_ref_sink (_tmp5_);
	factory = _tmp5_;
	_data1_->id = 0;
	_tmp6_ = factory;
	g_signal_connect_data (_tmp6_, "create-engine", (GCallback) ___lambda5__ibus_factory_create_engine, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	flags = (guint) (IBUS_BUS_NAME_FLAG_REPLACE_EXISTING | IBUS_BUS_NAME_FLAG_ALLOW_REPLACEMENT);
	_tmp7_ = _data1_->bus;
	retval = (guint) ibus_bus_request_name (_tmp7_, "org.freedesktop.IBus.Simple", (guint32) flags);
	if (retval == ((guint) 0)) {
		g_warning ("main.vala:100: Registry bus name org.freedesktop.IBus.Simple failed!");
		result = 1;
		_g_object_unref0 (factory);
		block1_data_unref (_data1_);
		_data1_ = NULL;
		return result;
	}
	ibus_main ();
	result = 0;
	_g_object_unref0 (factory);
	block1_data_unref (_data1_);
	_data1_ = NULL;
	return result;
}

int
main (int argc,
      char ** argv)
{
	return _vala_main (argv, argc);
}

