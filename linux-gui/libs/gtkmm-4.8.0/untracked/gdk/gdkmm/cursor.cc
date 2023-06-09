// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/cursor.h>
#include <gdkmm/private/cursor_p.h>


/*
 * Copyright 1998-2002 The gtkmm Development Team
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gdk/gdk.h>

namespace Gdk
{

} //namespace Gdk

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::Cursor> wrap(GdkCursor* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gdk::Cursor>( dynamic_cast<Gdk::Cursor*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& Cursor_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Do not derive a GType, or use a derived class:
    gtype_ = gdk_cursor_get_type();

  }

  return *this;
}


Glib::ObjectBase* Cursor_Class::wrap_new(GObject* object)
{
  return new Cursor((GdkCursor*)object);
}


/* The implementation: */

GdkCursor* Cursor::gobj_copy()
{
  reference();
  return gobj();
}

Cursor::Cursor(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Cursor::Cursor(GdkCursor* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Cursor::Cursor(Cursor&& src) noexcept
: Glib::Object(std::move(src))
{}

Cursor& Cursor::operator=(Cursor&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


Cursor::~Cursor() noexcept
{}


Cursor::CppClassType Cursor::cursor_class_; // initialize static member

GType Cursor::get_type()
{
  return cursor_class_.init().get_type();
}


GType Cursor::get_base_type()
{
  return gdk_cursor_get_type();
}


Glib::RefPtr<Cursor> Cursor::create(const Glib::RefPtr<const Texture>& texture, int hotspot_x, int hotspot_y, const Glib::RefPtr<Cursor>& fallback)
{
  return Glib::wrap(gdk_cursor_new_from_texture(const_cast<GdkTexture*>(Glib::unwrap(texture)), hotspot_x, hotspot_y, Glib::unwrap(fallback)));
}

Glib::RefPtr<Cursor> Cursor::create(const Glib::ustring& name, const Glib::RefPtr<Cursor>& fallback)
{
  return Glib::wrap(gdk_cursor_new_from_name(name.c_str(), Glib::unwrap(fallback)));
}

Glib::RefPtr<Cursor> Cursor::get_fallback()
{
  auto retvalue = Glib::wrap(gdk_cursor_get_fallback(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Cursor> Cursor::get_fallback() const
{
  return const_cast<Cursor*>(this)->get_fallback();
}

Glib::ustring Cursor::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gdk_cursor_get_name(const_cast<GdkCursor*>(gobj())));
}

Glib::RefPtr<Texture> Cursor::get_texture()
{
  auto retvalue = Glib::wrap(gdk_cursor_get_texture(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Texture> Cursor::get_texture() const
{
  return const_cast<Cursor*>(this)->get_texture();
}

int Cursor::get_hotspot_x() const
{
  return gdk_cursor_get_hotspot_x(const_cast<GdkCursor*>(gobj()));
}

int Cursor::get_hotspot_y() const
{
  return gdk_cursor_get_hotspot_y(const_cast<GdkCursor*>(gobj()));
}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Cursor>>::value,
  "Type Glib::RefPtr<Cursor> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Cursor> > Cursor::property_fallback() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Cursor> >(this, "fallback");
}

Glib::PropertyProxy_ReadOnly< int > Cursor::property_hotspot_x() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "hotspot-x");
}

Glib::PropertyProxy_ReadOnly< int > Cursor::property_hotspot_y() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "hotspot-y");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Cursor::property_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "name");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Texture>>::value,
  "Type Glib::RefPtr<Texture> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Texture> > Cursor::property_texture() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Texture> >(this, "texture");
}


} // namespace Gdk


