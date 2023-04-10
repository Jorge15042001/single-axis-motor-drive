// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/windowgroup.h>
#include <gtkmm/private/windowgroup_p.h>


/*
 * Copyright 1998-2015 The gtkmm Development Team
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

#include <gtkmm/window.h>
#include <glibmm/vectorutils.h>

#include <gtk/gtk.h>

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::WindowGroup> wrap(GtkWindowGroup* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::WindowGroup>( dynamic_cast<Gtk::WindowGroup*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& WindowGroup_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &WindowGroup_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_window_group_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void WindowGroup_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* WindowGroup_Class::wrap_new(GObject* object)
{
  return new WindowGroup((GtkWindowGroup*)object);
}


/* The implementation: */

GtkWindowGroup* WindowGroup::gobj_copy()
{
  reference();
  return gobj();
}

WindowGroup::WindowGroup(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

WindowGroup::WindowGroup(GtkWindowGroup* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


WindowGroup::WindowGroup(WindowGroup&& src) noexcept
: Glib::Object(std::move(src))
{}

WindowGroup& WindowGroup::operator=(WindowGroup&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


WindowGroup::~WindowGroup() noexcept
{}


WindowGroup::CppClassType WindowGroup::windowgroup_class_; // initialize static member

GType WindowGroup::get_type()
{
  return windowgroup_class_.init().get_type();
}


GType WindowGroup::get_base_type()
{
  return gtk_window_group_get_type();
}


WindowGroup::WindowGroup()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(windowgroup_class_.init()))
{
  

}

Glib::RefPtr<WindowGroup> WindowGroup::create()
{
  return Glib::make_refptr_for_instance<WindowGroup>( new WindowGroup() );
}

void WindowGroup::add_window(Window& window)
{
  gtk_window_group_add_window(gobj(), (window).gobj());
}

void WindowGroup::remove_window(Window& window)
{
  gtk_window_group_remove_window(gobj(), (window).gobj());
}

std::vector<Window*> WindowGroup::list_windows()
{
  return Glib::ListHandler<Window*>::list_to_vector(gtk_window_group_list_windows(gobj()), Glib::OWNERSHIP_SHALLOW);
}

std::vector<const Window*> WindowGroup::list_windows() const
{
  return Glib::ListHandler<const Window*>::list_to_vector(gtk_window_group_list_windows(const_cast<GtkWindowGroup*>(gobj())), Glib::OWNERSHIP_SHALLOW);
}


} // namespace Gtk


