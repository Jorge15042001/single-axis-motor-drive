// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/listitem.h>
#include <gtkmm/private/listitem_p.h>


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

void ListItem::unset_child()
{
  gtk_list_item_set_child(gobj(), nullptr);
}

} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::ListItem> wrap(GtkListItem* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::ListItem>( dynamic_cast<Gtk::ListItem*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ListItem_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ListItem_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_list_item_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void ListItem_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ListItem_Class::wrap_new(GObject* object)
{
  return new ListItem((GtkListItem*)object);
}


/* The implementation: */

GtkListItem* ListItem::gobj_copy()
{
  reference();
  return gobj();
}

ListItem::ListItem(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

ListItem::ListItem(GtkListItem* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


ListItem::ListItem(ListItem&& src) noexcept
: Glib::Object(std::move(src))
{}

ListItem& ListItem::operator=(ListItem&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


ListItem::~ListItem() noexcept
{}


ListItem::CppClassType ListItem::listitem_class_; // initialize static member

GType ListItem::get_type()
{
  return listitem_class_.init().get_type();
}


GType ListItem::get_base_type()
{
  return gtk_list_item_get_type();
}


Glib::RefPtr<Glib::ObjectBase> ListItem::get_item()
{
  auto retvalue = Glib::make_refptr_for_instance<Glib::ObjectBase>(Glib::wrap_auto(G_OBJECT(gtk_list_item_get_item(gobj()))));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Glib::ObjectBase> ListItem::get_item() const
{
  return const_cast<ListItem*>(this)->get_item();
}

guint ListItem::get_position() const
{
  return gtk_list_item_get_position(const_cast<GtkListItem*>(gobj()));
}

bool ListItem::get_selected() const
{
  return gtk_list_item_get_selected(const_cast<GtkListItem*>(gobj()));
}

bool ListItem::get_selectable() const
{
  return gtk_list_item_get_selectable(const_cast<GtkListItem*>(gobj()));
}

void ListItem::set_selectable(bool selectable)
{
  gtk_list_item_set_selectable(gobj(), static_cast<int>(selectable));
}

bool ListItem::get_activatable() const
{
  return gtk_list_item_get_activatable(const_cast<GtkListItem*>(gobj()));
}

void ListItem::set_activatable(bool activatable)
{
  gtk_list_item_set_activatable(gobj(), static_cast<int>(activatable));
}

void ListItem::set_child(Widget& child)
{
  gtk_list_item_set_child(gobj(), (child).gobj());
}

Widget* ListItem::get_child()
{
  return Glib::wrap(gtk_list_item_get_child(gobj()));
}

const Widget* ListItem::get_child() const
{
  return const_cast<ListItem*>(this)->get_child();
}


Glib::PropertyProxy< bool > ListItem::property_activatable() 
{
  return Glib::PropertyProxy< bool >(this, "activatable");
}

Glib::PropertyProxy_ReadOnly< bool > ListItem::property_activatable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "activatable");
}

Glib::PropertyProxy< Widget* > ListItem::property_child() 
{
  return Glib::PropertyProxy< Widget* >(this, "child");
}

Glib::PropertyProxy_ReadOnly< Widget* > ListItem::property_child() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "child");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Glib::ObjectBase>>::value,
  "Type Glib::RefPtr<Glib::ObjectBase> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Glib::ObjectBase> > ListItem::property_item() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Glib::ObjectBase> >(this, "item");
}

Glib::PropertyProxy_ReadOnly< guint > ListItem::property_position() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "position");
}

Glib::PropertyProxy< bool > ListItem::property_selectable() 
{
  return Glib::PropertyProxy< bool >(this, "selectable");
}

Glib::PropertyProxy_ReadOnly< bool > ListItem::property_selectable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "selectable");
}

Glib::PropertyProxy_ReadOnly< bool > ListItem::property_selected() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "selected");
}


} // namespace Gtk


