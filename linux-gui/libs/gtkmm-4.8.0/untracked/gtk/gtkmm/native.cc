// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/native.h>
#include <gtkmm/private/native_p.h>


/* Copyright (C) 2019 The gtkmm Development Team
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
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>
#include <gdkmm/surface.h>
#include <gtkmm/widget.h>

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::Native> wrap(GtkNative* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::Native>( dynamic_cast<Gtk::Native*> (Glib::wrap_auto_interface<Gtk::Native> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Interface_Class& Native_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Native_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gtk_native_get_type();
  }

  return *this;
}

void Native_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);


}


Glib::ObjectBase* Native_Class::wrap_new(GObject* object)
{
  return new Native((GtkNative*)(object));
}


/* The implementation: */

Native::Native()
:
  Glib::Interface(native_class_.init())
{}

Native::Native(GtkNative* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Native::Native(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Native::Native(Native&& src) noexcept
: Glib::Interface(std::move(src))
{}

Native& Native::operator=(Native&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

Native::~Native() noexcept
{}

// static
void Native::add_interface(GType gtype_implementer)
{
  native_class_.init().add_interface(gtype_implementer);
}

Native::CppClassType Native::native_class_; // initialize static member

GType Native::get_type()
{
  return native_class_.init().get_type();
}


GType Native::get_base_type()
{
  return gtk_native_get_type();
}


void Native::realize()
{
  gtk_native_realize(gobj());
}

void Native::unrealize()
{
  gtk_native_unrealize(gobj());
}

Native* Native::get_for_surface(const Glib::RefPtr<const Gdk::Surface>& surface)
{
  return dynamic_cast<Native*>(Glib::wrap_auto((GObject*)(gtk_native_get_for_surface(const_cast<GdkSurface*>(Glib::unwrap<Gdk::Surface>(surface)))), false));
}

Glib::RefPtr<Gdk::Surface> Native::get_surface()
{
  auto retvalue = Glib::wrap(gtk_native_get_surface(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Surface> Native::get_surface() const
{
  return const_cast<Native*>(this)->get_surface();
}

void Native::get_surface_transform(double& x, double& y)
{
  gtk_native_get_surface_transform(gobj(), &(x), &(y));
}


} // namespace Gtk

