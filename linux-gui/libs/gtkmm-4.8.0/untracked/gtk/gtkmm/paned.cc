// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/paned.h>
#include <gtkmm/private/paned_p.h>


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

namespace Gtk
{
} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Paned* wrap(GtkPaned* object, bool take_copy)
{
  return dynamic_cast<Gtk::Paned *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Paned_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Paned_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_paned_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Orientable::add_interface(get_type());

  }

  return *this;
}


void Paned_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Paned_Class::wrap_new(GObject* o)
{
  return manage(new Paned((GtkPaned*)(o)));

}


/* The implementation: */

Paned::Paned(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

Paned::Paned(GtkPaned* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


Paned::Paned(Paned&& src) noexcept
: Gtk::Widget(std::move(src))
  , Orientable(std::move(src))
{}

Paned& Paned::operator=(Paned&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  Orientable::operator=(std::move(src));
  return *this;
}

Paned::~Paned() noexcept
{
  destroy_();
}

Paned::CppClassType Paned::paned_class_; // initialize static member

GType Paned::get_type()
{
  return paned_class_.init().get_type();
}


GType Paned::get_base_type()
{
  return gtk_paned_get_type();
}


Paned::Paned(Orientation orientation)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(paned_class_.init(), "orientation", static_cast<GtkOrientation>(orientation), nullptr))
{
  

}

void Paned::set_start_child(Widget& child)
{
  gtk_paned_set_start_child(gobj(), (child).gobj());
}

Widget* Paned::get_start_child()
{
  return Glib::wrap(gtk_paned_get_start_child(gobj()));
}

const Widget* Paned::get_start_child() const
{
  return const_cast<Paned*>(this)->get_start_child();
}

void Paned::set_resize_start_child(bool resize)
{
  gtk_paned_set_resize_start_child(gobj(), static_cast<int>(resize));
}

bool Paned::get_resize_start_child() const
{
  return gtk_paned_get_resize_start_child(const_cast<GtkPaned*>(gobj()));
}

void Paned::set_shrink_start_child(bool resize)
{
  gtk_paned_set_shrink_start_child(gobj(), static_cast<int>(resize));
}

bool Paned::get_shrink_start_child() const
{
  return gtk_paned_get_shrink_start_child(const_cast<GtkPaned*>(gobj()));
}

void Paned::set_end_child(Widget& child)
{
  gtk_paned_set_end_child(gobj(), (child).gobj());
}

Widget* Paned::get_end_child()
{
  return Glib::wrap(gtk_paned_get_end_child(gobj()));
}

const Widget* Paned::get_end_child() const
{
  return const_cast<Paned*>(this)->get_end_child();
}

void Paned::set_resize_end_child(bool resize)
{
  gtk_paned_set_resize_end_child(gobj(), static_cast<int>(resize));
}

bool Paned::get_resize_end_child() const
{
  return gtk_paned_get_resize_end_child(const_cast<GtkPaned*>(gobj()));
}

void Paned::set_shrink_end_child(bool resize)
{
  gtk_paned_set_shrink_end_child(gobj(), static_cast<int>(resize));
}

bool Paned::get_shrink_end_child() const
{
  return gtk_paned_get_shrink_end_child(const_cast<GtkPaned*>(gobj()));
}

int Paned::get_position() const
{
  return gtk_paned_get_position(const_cast<GtkPaned*>(gobj()));
}

void Paned::set_position(int position)
{
  gtk_paned_set_position(gobj(), position);
}

void Paned::set_wide_handle(bool wide)
{
  gtk_paned_set_wide_handle(gobj(), static_cast<int>(wide));
}

bool Paned::get_wide_handle() const
{
  return gtk_paned_get_wide_handle(const_cast<GtkPaned*>(gobj()));
}


Glib::PropertyProxy< int > Paned::property_position() 
{
  return Glib::PropertyProxy< int >(this, "position");
}

Glib::PropertyProxy_ReadOnly< int > Paned::property_position() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "position");
}

Glib::PropertyProxy< bool > Paned::property_position_set() 
{
  return Glib::PropertyProxy< bool >(this, "position-set");
}

Glib::PropertyProxy_ReadOnly< bool > Paned::property_position_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "position-set");
}

Glib::PropertyProxy_ReadOnly< int > Paned::property_min_position() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "min-position");
}

Glib::PropertyProxy_ReadOnly< int > Paned::property_max_position() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "max-position");
}

Glib::PropertyProxy< bool > Paned::property_wide_handle() 
{
  return Glib::PropertyProxy< bool >(this, "wide-handle");
}

Glib::PropertyProxy_ReadOnly< bool > Paned::property_wide_handle() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "wide-handle");
}

Glib::PropertyProxy< bool > Paned::property_resize_start_child() 
{
  return Glib::PropertyProxy< bool >(this, "resize-start-child");
}

Glib::PropertyProxy_ReadOnly< bool > Paned::property_resize_start_child() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "resize-start-child");
}

Glib::PropertyProxy< bool > Paned::property_resize_end_child() 
{
  return Glib::PropertyProxy< bool >(this, "resize-end-child");
}

Glib::PropertyProxy_ReadOnly< bool > Paned::property_resize_end_child() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "resize-end-child");
}

Glib::PropertyProxy< bool > Paned::property_shrink_start_child() 
{
  return Glib::PropertyProxy< bool >(this, "shrink-start-child");
}

Glib::PropertyProxy_ReadOnly< bool > Paned::property_shrink_start_child() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "shrink-start-child");
}

Glib::PropertyProxy< bool > Paned::property_shrink_end_child() 
{
  return Glib::PropertyProxy< bool >(this, "shrink-end-child");
}

Glib::PropertyProxy_ReadOnly< bool > Paned::property_shrink_end_child() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "shrink-end-child");
}

Glib::PropertyProxy< Widget* > Paned::property_start_child() 
{
  return Glib::PropertyProxy< Widget* >(this, "start-child");
}

Glib::PropertyProxy_ReadOnly< Widget* > Paned::property_start_child() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "start-child");
}

Glib::PropertyProxy< Widget* > Paned::property_end_child() 
{
  return Glib::PropertyProxy< Widget* >(this, "end-child");
}

Glib::PropertyProxy_ReadOnly< Widget* > Paned::property_end_child() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "end-child");
}


} // namespace Gtk

