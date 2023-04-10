// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/listboxrow.h>
#include <gtkmm/private/listboxrow_p.h>


/* Copyright (C) 2013 The gtkmm Development Team
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

namespace Gtk
{

void ListBoxRow::unset_header()
{
  gtk_list_box_row_set_header(gobj(), nullptr);
}

void ListBoxRow::unset_child()
{
  gtk_list_box_row_set_child(gobj(), nullptr);
}

} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::ListBoxRow* wrap(GtkListBoxRow* object, bool take_copy)
{
  return dynamic_cast<Gtk::ListBoxRow *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ListBoxRow_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ListBoxRow_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_list_box_row_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Actionable::add_interface(get_type());

  }

  return *this;
}


void ListBoxRow_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ListBoxRow_Class::wrap_new(GObject* o)
{
  return manage(new ListBoxRow((GtkListBoxRow*)(o)));

}


/* The implementation: */

ListBoxRow::ListBoxRow(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

ListBoxRow::ListBoxRow(GtkListBoxRow* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


ListBoxRow::ListBoxRow(ListBoxRow&& src) noexcept
: Gtk::Widget(std::move(src))
  , Actionable(std::move(src))
{}

ListBoxRow& ListBoxRow::operator=(ListBoxRow&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  Actionable::operator=(std::move(src));
  return *this;
}

ListBoxRow::~ListBoxRow() noexcept
{
  destroy_();
}

ListBoxRow::CppClassType ListBoxRow::listboxrow_class_; // initialize static member

GType ListBoxRow::get_type()
{
  return listboxrow_class_.init().get_type();
}


GType ListBoxRow::get_base_type()
{
  return gtk_list_box_row_get_type();
}


ListBoxRow::ListBoxRow()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(listboxrow_class_.init()))
{
  

}

void ListBoxRow::set_child(Widget& child)
{
  gtk_list_box_row_set_child(gobj(), (child).gobj());
}

Widget* ListBoxRow::get_child()
{
  return Glib::wrap(gtk_list_box_row_get_child(gobj()));
}

const Widget* ListBoxRow::get_child() const
{
  return const_cast<ListBoxRow*>(this)->get_child();
}

void ListBoxRow::set_header(Widget& header)
{
  gtk_list_box_row_set_header(gobj(), (header).gobj());
}

Widget* ListBoxRow::get_header()
{
  return Glib::wrap(gtk_list_box_row_get_header(gobj()));
}

const Widget* ListBoxRow::get_header() const
{
  return const_cast<ListBoxRow*>(this)->get_header();
}

int ListBoxRow::get_index() const
{
  return gtk_list_box_row_get_index(const_cast<GtkListBoxRow*>(gobj()));
}

void ListBoxRow::changed()
{
  gtk_list_box_row_changed(gobj());
}

bool ListBoxRow::is_selected() const
{
  return gtk_list_box_row_is_selected(const_cast<GtkListBoxRow*>(gobj()));
}

void ListBoxRow::set_selectable(bool selectable)
{
  gtk_list_box_row_set_selectable(gobj(), static_cast<int>(selectable));
}

bool ListBoxRow::get_selectable() const
{
  return gtk_list_box_row_get_selectable(const_cast<GtkListBoxRow*>(gobj()));
}

void ListBoxRow::set_activatable(bool activatable)
{
  gtk_list_box_row_set_activatable(gobj(), static_cast<int>(activatable));
}

bool ListBoxRow::get_activatable() const
{
  return gtk_list_box_row_get_activatable(const_cast<GtkListBoxRow*>(gobj()));
}


Glib::PropertyProxy< bool > ListBoxRow::property_selectable() 
{
  return Glib::PropertyProxy< bool >(this, "selectable");
}

Glib::PropertyProxy_ReadOnly< bool > ListBoxRow::property_selectable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "selectable");
}

Glib::PropertyProxy< bool > ListBoxRow::property_activatable() 
{
  return Glib::PropertyProxy< bool >(this, "activatable");
}

Glib::PropertyProxy_ReadOnly< bool > ListBoxRow::property_activatable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "activatable");
}

Glib::PropertyProxy< Widget* > ListBoxRow::property_child() 
{
  return Glib::PropertyProxy< Widget* >(this, "child");
}

Glib::PropertyProxy_ReadOnly< Widget* > ListBoxRow::property_child() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "child");
}


} // namespace Gtk


