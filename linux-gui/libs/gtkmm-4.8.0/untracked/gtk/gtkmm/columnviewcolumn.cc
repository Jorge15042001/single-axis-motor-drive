// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/columnviewcolumn.h>
#include <gtkmm/private/columnviewcolumn_p.h>


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
#include <gtkmm/columnview.h>

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::ColumnViewColumn> wrap(GtkColumnViewColumn* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::ColumnViewColumn>( dynamic_cast<Gtk::ColumnViewColumn*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ColumnViewColumn_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ColumnViewColumn_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_column_view_column_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void ColumnViewColumn_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ColumnViewColumn_Class::wrap_new(GObject* object)
{
  return new ColumnViewColumn((GtkColumnViewColumn*)object);
}


/* The implementation: */

GtkColumnViewColumn* ColumnViewColumn::gobj_copy()
{
  reference();
  return gobj();
}

ColumnViewColumn::ColumnViewColumn(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

ColumnViewColumn::ColumnViewColumn(GtkColumnViewColumn* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


ColumnViewColumn::ColumnViewColumn(ColumnViewColumn&& src) noexcept
: Glib::Object(std::move(src))
{}

ColumnViewColumn& ColumnViewColumn::operator=(ColumnViewColumn&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


ColumnViewColumn::~ColumnViewColumn() noexcept
{}


ColumnViewColumn::CppClassType ColumnViewColumn::columnviewcolumn_class_; // initialize static member

GType ColumnViewColumn::get_type()
{
  return columnviewcolumn_class_.init().get_type();
}


GType ColumnViewColumn::get_base_type()
{
  return gtk_column_view_column_get_type();
}


ColumnViewColumn::ColumnViewColumn(const Glib::ustring& title, const Glib::RefPtr<ListItemFactory>& factory)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(columnviewcolumn_class_.init(), "title", title.c_str(), "factory", Glib::unwrap(factory), nullptr))
{
  

}

Glib::RefPtr<ColumnViewColumn> ColumnViewColumn::create(const Glib::ustring& title, const Glib::RefPtr<ListItemFactory>& factory)
{
  return Glib::make_refptr_for_instance<ColumnViewColumn>( new ColumnViewColumn(title, factory) );
}

ColumnView* ColumnViewColumn::get_column_view()
{
  return Glib::wrap(gtk_column_view_column_get_column_view(gobj()));
}

const ColumnView* ColumnViewColumn::get_column_view() const
{
  return const_cast<ColumnViewColumn*>(this)->get_column_view();
}

void ColumnViewColumn::set_factory(const Glib::RefPtr<ListItemFactory>& factory)
{
  gtk_column_view_column_set_factory(gobj(), Glib::unwrap(factory));
}

Glib::RefPtr<ListItemFactory> ColumnViewColumn::get_factory()
{
  auto retvalue = Glib::wrap(gtk_column_view_column_get_factory(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const ListItemFactory> ColumnViewColumn::get_factory() const
{
  return const_cast<ColumnViewColumn*>(this)->get_factory();
}

void ColumnViewColumn::set_title(const Glib::ustring& title)
{
  gtk_column_view_column_set_title(gobj(), title.c_str());
}

Glib::ustring ColumnViewColumn::get_title() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_column_view_column_get_title(const_cast<GtkColumnViewColumn*>(gobj())));
}

void ColumnViewColumn::set_sorter(const Glib::RefPtr<Sorter>& sorter)
{
  gtk_column_view_column_set_sorter(gobj(), Glib::unwrap(sorter));
}

Glib::RefPtr<Sorter> ColumnViewColumn::get_sorter()
{
  auto retvalue = Glib::wrap(gtk_column_view_column_get_sorter(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Sorter> ColumnViewColumn::get_sorter() const
{
  return const_cast<ColumnViewColumn*>(this)->get_sorter();
}

void ColumnViewColumn::set_visible(bool visible)
{
  gtk_column_view_column_set_visible(gobj(), static_cast<int>(visible));
}

bool ColumnViewColumn::get_visible() const
{
  return gtk_column_view_column_get_visible(const_cast<GtkColumnViewColumn*>(gobj()));
}

void ColumnViewColumn::set_header_menu(const Glib::RefPtr<Gio::MenuModel>& model)
{
  gtk_column_view_column_set_header_menu(gobj(), Glib::unwrap(model));
}

Glib::RefPtr<Gio::MenuModel> ColumnViewColumn::get_header_menu()
{
  auto retvalue = Glib::wrap(gtk_column_view_column_get_header_menu(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gio::MenuModel> ColumnViewColumn::get_header_menu() const
{
  return const_cast<ColumnViewColumn*>(this)->get_header_menu();
}

void ColumnViewColumn::set_fixed_width(int fixed_width)
{
  gtk_column_view_column_set_fixed_width(gobj(), fixed_width);
}

int ColumnViewColumn::get_fixed_width() const
{
  return gtk_column_view_column_get_fixed_width(const_cast<GtkColumnViewColumn*>(gobj()));
}

void ColumnViewColumn::set_resizable(bool resizable)
{
  gtk_column_view_column_set_resizable(gobj(), static_cast<int>(resizable));
}

bool ColumnViewColumn::get_resizable() const
{
  return gtk_column_view_column_get_resizable(const_cast<GtkColumnViewColumn*>(gobj()));
}

void ColumnViewColumn::set_expand(bool expand)
{
  gtk_column_view_column_set_expand(gobj(), static_cast<int>(expand));
}

bool ColumnViewColumn::get_expand() const
{
  return gtk_column_view_column_get_expand(const_cast<GtkColumnViewColumn*>(gobj()));
}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<ColumnView*>::value,
  "Type ColumnView* cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< ColumnView* > ColumnViewColumn::property_column_view() const
{
  return Glib::PropertyProxy_ReadOnly< ColumnView* >(this, "column-view");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<ListItemFactory>>::value,
  "Type Glib::RefPtr<ListItemFactory> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<ListItemFactory> > ColumnViewColumn::property_factory() 
{
  return Glib::PropertyProxy< Glib::RefPtr<ListItemFactory> >(this, "factory");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ListItemFactory> > ColumnViewColumn::property_factory() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ListItemFactory> >(this, "factory");
}

Glib::PropertyProxy< Glib::ustring > ColumnViewColumn::property_title() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "title");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > ColumnViewColumn::property_title() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "title");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Sorter>>::value,
  "Type Glib::RefPtr<Sorter> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<Sorter> > ColumnViewColumn::property_sorter() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Sorter> >(this, "sorter");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Sorter> > ColumnViewColumn::property_sorter() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Sorter> >(this, "sorter");
}

Glib::PropertyProxy< bool > ColumnViewColumn::property_visible() 
{
  return Glib::PropertyProxy< bool >(this, "visible");
}

Glib::PropertyProxy_ReadOnly< bool > ColumnViewColumn::property_visible() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "visible");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Gio::MenuModel>>::value,
  "Type Glib::RefPtr<Gio::MenuModel> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<Gio::MenuModel> > ColumnViewColumn::property_header_menu() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::MenuModel> >(this, "header-menu");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::MenuModel> > ColumnViewColumn::property_header_menu() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::MenuModel> >(this, "header-menu");
}

Glib::PropertyProxy< bool > ColumnViewColumn::property_resizable() 
{
  return Glib::PropertyProxy< bool >(this, "resizable");
}

Glib::PropertyProxy_ReadOnly< bool > ColumnViewColumn::property_resizable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "resizable");
}

Glib::PropertyProxy< bool > ColumnViewColumn::property_expand() 
{
  return Glib::PropertyProxy< bool >(this, "expand");
}

Glib::PropertyProxy_ReadOnly< bool > ColumnViewColumn::property_expand() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "expand");
}

Glib::PropertyProxy< int > ColumnViewColumn::property_fixed_width() 
{
  return Glib::PropertyProxy< int >(this, "fixed-width");
}

Glib::PropertyProxy_ReadOnly< int > ColumnViewColumn::property_fixed_width() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "fixed-width");
}


} // namespace Gtk


