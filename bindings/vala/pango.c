/* pango.c generated by valac 0.56.12, the Vala compiler
 * generated from pango.vala, do not modify */

/* vim:set et sts=4 sw=4:
 *
 * ibus - The Input Bus
 *
 * Copyright(c) 2011 Peng Huang <shawn.p.huang@gmail.com>
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
#include <pango/pango.h>
#include <glib.h>
#include <stdlib.h>
#include <string.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _pango_attribute_destroy0(var) ((var == NULL) ? NULL : (var = (pango_attribute_destroy (var), NULL)))

VALA_EXTERN PangoAttrList* get_pango_attr_list_from_ibus_text (IBusText* text);

static gint
string_index_of_nth_char (const gchar* self,
                          glong c)
{
	gchar* _tmp0_;
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = g_utf8_offset_to_pointer (self, c);
	result = (gint) (_tmp0_ - ((gchar*) self));
	return result;
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

PangoAttrList*
get_pango_attr_list_from_ibus_text (IBusText* text)
{
	PangoAttrList* pango_attrs = NULL;
	PangoAttrList* _tmp0_;
	IBusAttrList* attrs = NULL;
	IBusAttrList* _tmp1_;
	IBusAttrList* _tmp2_;
	const gchar* str = NULL;
	const gchar* _tmp3_;
	glong nchars = 0L;
	const gchar* _tmp4_;
	glong* offsets = NULL;
	glong* _tmp5_;
	gint offsets_length1;
	gint _offsets_size_;
	IBusAttribute* attr = NULL;
	gint i = 0;
	PangoAttrList* result;
	g_return_val_if_fail (text != NULL, NULL);
	_tmp0_ = pango_attr_list_new ();
	pango_attrs = _tmp0_;
	_tmp1_ = ibus_text_get_attributes (text);
	attrs = _tmp1_;
	_tmp2_ = attrs;
	if (_tmp2_ == NULL) {
		result = pango_attrs;
		return result;
	}
	_tmp3_ = ibus_text_get_text (text);
	str = _tmp3_;
	_tmp4_ = str;
	nchars = (glong) g_utf8_strlen (_tmp4_, (gssize) -1);
	_tmp5_ = g_new0 (glong, nchars + 1);
	offsets = _tmp5_;
	offsets_length1 = nchars + 1;
	_offsets_size_ = offsets_length1;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp6_ = FALSE;
			_tmp6_ = TRUE;
			while (TRUE) {
				glong* _tmp8_;
				gint _tmp8__length1;
				const gchar* _tmp9_;
				if (!_tmp6_) {
					gint _tmp7_;
					_tmp7_ = i;
					i = _tmp7_ + 1;
				}
				_tmp6_ = FALSE;
				if (!(((glong) i) <= nchars)) {
					break;
				}
				_tmp8_ = offsets;
				_tmp8__length1 = offsets_length1;
				_tmp9_ = str;
				_tmp8_[i] = (glong) string_index_of_nth_char (_tmp9_, (glong) i);
			}
		}
	}
	i = 0;
	while (TRUE) {
		IBusAttrList* _tmp10_;
		gint _tmp11_;
		IBusAttribute* _tmp12_;
		IBusAttribute* _tmp13_;
		IBusAttribute* _tmp14_;
		glong start_index = 0L;
		IBusAttribute* _tmp15_;
		glong _tmp16_ = 0L;
		glong end_index = 0L;
		IBusAttribute* _tmp21_;
		glong _tmp22_ = 0L;
		PangoAttribute* pango_attr = NULL;
		IBusAttribute* _tmp27_;
		PangoAttribute* _tmp38_;
		PangoAttribute* _tmp39_;
		PangoAttrList* _tmp40_;
		PangoAttribute* _tmp41_;
		_tmp10_ = attrs;
		_tmp11_ = i;
		i = _tmp11_ + 1;
		_tmp12_ = ibus_attr_list_get (_tmp10_, (guint) _tmp11_);
		_tmp13_ = _g_object_ref0 (_tmp12_);
		_g_object_unref0 (attr);
		attr = _tmp13_;
		_tmp14_ = attr;
		if (_tmp14_ == NULL) {
			break;
		}
		_tmp15_ = attr;
		start_index = (glong) _tmp15_->start_index;
		if (start_index <= ((glong) 0)) {
			start_index = (glong) 0;
		}
		if (start_index <= nchars) {
			glong* _tmp17_;
			gint _tmp17__length1;
			glong _tmp18_;
			_tmp17_ = offsets;
			_tmp17__length1 = offsets_length1;
			_tmp18_ = _tmp17_[start_index];
			_tmp16_ = _tmp18_;
		} else {
			glong* _tmp19_;
			gint _tmp19__length1;
			glong _tmp20_;
			_tmp19_ = offsets;
			_tmp19__length1 = offsets_length1;
			_tmp20_ = _tmp19_[-1];
			_tmp16_ = _tmp20_;
		}
		start_index = _tmp16_;
		_tmp21_ = attr;
		end_index = (glong) _tmp21_->end_index;
		if (end_index <= ((glong) 0)) {
			end_index = (glong) 0;
		}
		if (end_index <= nchars) {
			glong* _tmp23_;
			gint _tmp23__length1;
			glong _tmp24_;
			_tmp23_ = offsets;
			_tmp23__length1 = offsets_length1;
			_tmp24_ = _tmp23_[end_index];
			_tmp22_ = _tmp24_;
		} else {
			glong* _tmp25_;
			gint _tmp25__length1;
			glong _tmp26_;
			_tmp25_ = offsets;
			_tmp25__length1 = offsets_length1;
			_tmp26_ = _tmp25_[-1];
			_tmp22_ = _tmp26_;
		}
		end_index = _tmp22_;
		pango_attr = NULL;
		_tmp27_ = attr;
		switch (_tmp27_->type) {
			case IBUS_ATTR_TYPE_FOREGROUND:
			{
				{
					guint16 r = 0U;
					IBusAttribute* _tmp28_;
					guint16 g = 0U;
					IBusAttribute* _tmp29_;
					guint16 b = 0U;
					IBusAttribute* _tmp30_;
					PangoAttribute* _tmp31_;
					_tmp28_ = attr;
					r = (guint16) ((_tmp28_->value & 0x00ff0000) >> 8);
					_tmp29_ = attr;
					g = (guint16) (_tmp29_->value & 0x0000ff00);
					_tmp30_ = attr;
					b = (guint16) ((_tmp30_->value & 0x000000ff) << 8);
					_tmp31_ = pango_attr_foreground_new (r, g, b);
					_pango_attribute_destroy0 (pango_attr);
					pango_attr = _tmp31_;
					break;
				}
			}
			case IBUS_ATTR_TYPE_BACKGROUND:
			{
				{
					guint16 r = 0U;
					IBusAttribute* _tmp32_;
					guint16 g = 0U;
					IBusAttribute* _tmp33_;
					guint16 b = 0U;
					IBusAttribute* _tmp34_;
					PangoAttribute* _tmp35_;
					_tmp32_ = attr;
					r = (guint16) ((_tmp32_->value & 0x00ff0000) >> 8);
					_tmp33_ = attr;
					g = (guint16) (_tmp33_->value & 0x0000ff00);
					_tmp34_ = attr;
					b = (guint16) ((_tmp34_->value & 0x000000ff) << 8);
					_tmp35_ = pango_attr_background_new (r, g, b);
					_pango_attribute_destroy0 (pango_attr);
					pango_attr = _tmp35_;
					break;
				}
			}
			case IBUS_ATTR_TYPE_UNDERLINE:
			{
				{
					IBusAttribute* _tmp36_;
					PangoAttribute* _tmp37_;
					_tmp36_ = attr;
					_tmp37_ = pango_attr_underline_new ((PangoUnderline) _tmp36_->value);
					_pango_attribute_destroy0 (pango_attr);
					pango_attr = _tmp37_;
					break;
				}
			}
			default:
			{
				_pango_attribute_destroy0 (pango_attr);
				continue;
			}
		}
		_tmp38_ = pango_attr;
		_tmp38_->start_index = (guint) start_index;
		_tmp39_ = pango_attr;
		_tmp39_->end_index = (guint) end_index;
		_tmp40_ = pango_attrs;
		_tmp41_ = pango_attr;
		pango_attr = NULL;
		pango_attr_list_insert (_tmp40_, _tmp41_);
		_pango_attribute_destroy0 (pango_attr);
	}
	result = pango_attrs;
	_g_object_unref0 (attr);
	offsets = (g_free (offsets), NULL);
	return result;
}

