// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/directorylist.h>
#include <gtkmm/private/directorylist_p.h>


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

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::DirectoryList> wrap(GtkDirectoryList* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::DirectoryList>( dynamic_cast<Gtk::DirectoryList*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& DirectoryList_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &DirectoryList_Class::class_init_function;

    // Do not derive a GType, or use a derived class:
    gtype_ = gtk_directory_list_get_type();

  }

  return *this;
}


void DirectoryList_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* DirectoryList_Class::wrap_new(GObject* object)
{
  return new DirectoryList((GtkDirectoryList*)object);
}


/* The implementation: */

GtkDirectoryList* DirectoryList::gobj_copy()
{
  reference();
  return gobj();
}

DirectoryList::DirectoryList(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

DirectoryList::DirectoryList(GtkDirectoryList* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


DirectoryList::DirectoryList(DirectoryList&& src) noexcept
: Glib::Object(std::move(src))
  , Gio::ListModel(std::move(src))
{}

DirectoryList& DirectoryList::operator=(DirectoryList&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  Gio::ListModel::operator=(std::move(src));
  return *this;
}


DirectoryList::~DirectoryList() noexcept
{}


DirectoryList::CppClassType DirectoryList::directorylist_class_; // initialize static member

GType DirectoryList::get_type()
{
  return directorylist_class_.init().get_type();
}


GType DirectoryList::get_base_type()
{
  return gtk_directory_list_get_type();
}


DirectoryList::DirectoryList(const std::string& attributes, const Glib::RefPtr<Gio::File>& file)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(directorylist_class_.init(), "attributes", attributes.c_str(), "file", const_cast<GFile*>(Glib::unwrap<Gio::File>(file)), nullptr))
{
  

}

Glib::RefPtr<DirectoryList> DirectoryList::create(const std::string& attributes, const Glib::RefPtr<Gio::File>& file)
{
  return Glib::make_refptr_for_instance<DirectoryList>( new DirectoryList(attributes, file) );
}

void DirectoryList::set_file(const Glib::RefPtr<Gio::File>& file)
{
  gtk_directory_list_set_file(gobj(), const_cast<GFile*>(Glib::unwrap<Gio::File>(file)));
}

Glib::RefPtr<Gio::File> DirectoryList::get_file()
{
  auto retvalue = Glib::wrap(gtk_directory_list_get_file(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gio::File> DirectoryList::get_file() const
{
  return const_cast<DirectoryList*>(this)->get_file();
}

void DirectoryList::set_attributes(const std::string& attributes)
{
  gtk_directory_list_set_attributes(gobj(), attributes.c_str());
}

std::string DirectoryList::get_attributes() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(gtk_directory_list_get_attributes(const_cast<GtkDirectoryList*>(gobj())));
}

void DirectoryList::set_io_priority(int io_priority)
{
  gtk_directory_list_set_io_priority(gobj(), io_priority);
}

int DirectoryList::get_io_priority() const
{
  return gtk_directory_list_get_io_priority(const_cast<GtkDirectoryList*>(gobj()));
}

bool DirectoryList::is_loading() const
{
  return gtk_directory_list_is_loading(const_cast<GtkDirectoryList*>(gobj()));
}

Glib::Error DirectoryList::get_error() const
{
  return Glib::Error(const_cast<GError*>(gtk_directory_list_get_error(const_cast<GtkDirectoryList*>(gobj()))), true);
}

void DirectoryList::set_monitored(bool monitored)
{
  gtk_directory_list_set_monitored(gobj(), static_cast<int>(monitored));
}

bool DirectoryList::get_monitored() const
{
  return gtk_directory_list_get_monitored(const_cast<GtkDirectoryList*>(gobj()));
}


Glib::PropertyProxy< std::string > DirectoryList::property_attributes() 
{
  return Glib::PropertyProxy< std::string >(this, "attributes");
}

Glib::PropertyProxy_ReadOnly< std::string > DirectoryList::property_attributes() const
{
  return Glib::PropertyProxy_ReadOnly< std::string >(this, "attributes");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::Error>::value,
  "Type Glib::Error cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::Error > DirectoryList::property_error() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::Error >(this, "error");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Gio::File>>::value,
  "Type Glib::RefPtr<Gio::File> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<Gio::File> > DirectoryList::property_file() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::File> >(this, "file");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::File> > DirectoryList::property_file() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::File> >(this, "file");
}

Glib::PropertyProxy< int > DirectoryList::property_io_priority() 
{
  return Glib::PropertyProxy< int >(this, "io-priority");
}

Glib::PropertyProxy_ReadOnly< int > DirectoryList::property_io_priority() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "io-priority");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<GType>::value,
  "Type GType cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< GType > DirectoryList::property_item_type() const
{
  return Glib::PropertyProxy_ReadOnly< GType >(this, "item-type");
}

Glib::PropertyProxy_ReadOnly< bool > DirectoryList::property_loading() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "loading");
}

Glib::PropertyProxy< bool > DirectoryList::property_monitored() 
{
  return Glib::PropertyProxy< bool >(this, "monitored");
}

Glib::PropertyProxy_ReadOnly< bool > DirectoryList::property_monitored() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "monitored");
}

Glib::PropertyProxy_ReadOnly< unsigned int > DirectoryList::property_n_items() const
{
  return Glib::PropertyProxy_ReadOnly< unsigned int >(this, "n-items");
}


} // namespace Gtk


