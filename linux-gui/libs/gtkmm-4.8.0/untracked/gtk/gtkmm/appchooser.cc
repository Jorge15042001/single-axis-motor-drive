// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/appchooser.h>
#include <gtkmm/private/appchooser_p.h>


/* Copyright 2011 The gtkmm Development Team
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

#include <gtk/gtk.h>

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::AppChooser> wrap(GtkAppChooser* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::AppChooser>( dynamic_cast<Gtk::AppChooser*> (Glib::wrap_auto_interface<Gtk::AppChooser> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Interface_Class& AppChooser_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &AppChooser_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gtk_app_chooser_get_type();
  }

  return *this;
}

void AppChooser_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);


}


Glib::ObjectBase* AppChooser_Class::wrap_new(GObject* object)
{
  return new AppChooser((GtkAppChooser*)(object));
}


/* The implementation: */

AppChooser::AppChooser()
:
  Glib::Interface(appchooser_class_.init())
{}

AppChooser::AppChooser(GtkAppChooser* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

AppChooser::AppChooser(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

AppChooser::AppChooser(AppChooser&& src) noexcept
: Glib::Interface(std::move(src))
{}

AppChooser& AppChooser::operator=(AppChooser&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

AppChooser::~AppChooser() noexcept
{}

// static
void AppChooser::add_interface(GType gtype_implementer)
{
  appchooser_class_.init().add_interface(gtype_implementer);
}

AppChooser::CppClassType AppChooser::appchooser_class_; // initialize static member

GType AppChooser::get_type()
{
  return appchooser_class_.init().get_type();
}


GType AppChooser::get_base_type()
{
  return gtk_app_chooser_get_type();
}


Glib::RefPtr<Gio::AppInfo> AppChooser::get_app_info()
{
  auto retvalue = Glib::wrap(gtk_app_chooser_get_app_info(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gio::AppInfo> AppChooser::get_app_info() const
{
  return const_cast<AppChooser*>(this)->get_app_info();
}

Glib::ustring AppChooser::get_content_type() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_app_chooser_get_content_type(const_cast<GtkAppChooser*>(gobj())));
}

void AppChooser::refresh()
{
  gtk_app_chooser_refresh(gobj());
}


Glib::PropertyProxy_ReadOnly< Glib::ustring > AppChooser::property_content_type() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "content-type");
}


} // namespace Gtk


