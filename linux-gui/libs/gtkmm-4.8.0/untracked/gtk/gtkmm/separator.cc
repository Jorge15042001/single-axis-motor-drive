// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/separator.h>
#include <gtkmm/private/separator_p.h>


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

#include <gtk/gtk.h>

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Separator* wrap(GtkSeparator* object, bool take_copy)
{
  return dynamic_cast<Gtk::Separator *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Separator_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Separator_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_separator_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Orientable::add_interface(get_type());

  }

  return *this;
}


void Separator_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Separator_Class::wrap_new(GObject* o)
{
  return manage(new Separator((GtkSeparator*)(o)));

}


/* The implementation: */

Separator::Separator(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

Separator::Separator(GtkSeparator* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


Separator::Separator(Separator&& src) noexcept
: Gtk::Widget(std::move(src))
  , Orientable(std::move(src))
{}

Separator& Separator::operator=(Separator&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  Orientable::operator=(std::move(src));
  return *this;
}

Separator::~Separator() noexcept
{
  destroy_();
}

Separator::CppClassType Separator::separator_class_; // initialize static member

GType Separator::get_type()
{
  return separator_class_.init().get_type();
}


GType Separator::get_base_type()
{
  return gtk_separator_get_type();
}


Separator::Separator(Orientation orientation)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(separator_class_.init(), "orientation", static_cast<GtkOrientation>(orientation), nullptr))
{
  

}


} // namespace Gtk


