// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/stringlist.h>
#include <gtkmm/private/stringlist_p.h>


/* Copyright (C) 2020 The gtkmm Development Team
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

StringList::StringList(const std::vector<Glib::ustring>& strings)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(stringlist_class_.init()))
{
  gtk_string_list_splice(gobj(), 0, 0,
      Glib::ArrayHandler<Glib::ustring>::vector_to_array(strings).data());
}

} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::StringList> wrap(GtkStringList* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::StringList>( dynamic_cast<Gtk::StringList*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& StringList_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &StringList_Class::class_init_function;

    // Do not derive a GType, or use a derived class:
    gtype_ = gtk_string_list_get_type();

  }

  return *this;
}


void StringList_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* StringList_Class::wrap_new(GObject* object)
{
  return new StringList((GtkStringList*)object);
}


/* The implementation: */

GtkStringList* StringList::gobj_copy()
{
  reference();
  return gobj();
}

StringList::StringList(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

StringList::StringList(GtkStringList* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


StringList::StringList(StringList&& src) noexcept
: Glib::Object(std::move(src))
  , Gio::ListModel(std::move(src))
  , Buildable(std::move(src))
{}

StringList& StringList::operator=(StringList&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  Gio::ListModel::operator=(std::move(src));
  Buildable::operator=(std::move(src));
  return *this;
}


StringList::~StringList() noexcept
{}


StringList::CppClassType StringList::stringlist_class_; // initialize static member

GType StringList::get_type()
{
  return stringlist_class_.init().get_type();
}


GType StringList::get_base_type()
{
  return gtk_string_list_get_type();
}


Glib::RefPtr<StringList> StringList::create(const std::vector<Glib::ustring>& strings)
{
  return Glib::make_refptr_for_instance<StringList>( new StringList(strings) );
}

void StringList::append(const Glib::ustring& string)
{
  gtk_string_list_append(gobj(), string.c_str());
}

void StringList::remove(guint position)
{
  gtk_string_list_remove(gobj(), position);
}

void StringList::splice(guint position, guint n_removals, const std::vector<Glib::ustring>& additions)
{
  gtk_string_list_splice(gobj(), position, n_removals, Glib::ArrayHandler<Glib::ustring>::vector_to_array(additions).data());
}

Glib::ustring StringList::get_string(guint position) const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_string_list_get_string(const_cast<GtkStringList*>(gobj()), position));
}


} // namespace Gtk


