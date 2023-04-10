// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/accessible.h>
#include <gtkmm/private/accessible_p.h>


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

using Role = Gtk::Accessible::Role;

namespace Gtk
{

void Accessible::update_state(State state, const Glib::ValueBase& value)
{
  auto c_state = static_cast<GtkAccessibleState>(state);
  gtk_accessible_update_state_value(gobj(), 1, &c_state, value.gobj());
}

void Accessible::update_property(Property property, const Glib::ValueBase& value)
{
  auto c_prop = static_cast<GtkAccessibleProperty>(property);
  gtk_accessible_update_property_value(gobj(), 1, &c_prop, value.gobj());
}

void Accessible::update_relation(Relation relation, const Glib::ValueBase& value)
{
  auto c_rel = static_cast<GtkAccessibleRelation>(relation);
  gtk_accessible_update_relation_value(gobj(), 1, &c_rel, value.gobj());
}

} // namespace Gtk

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::Accessible::Role>::value_type()
{
  return gtk_accessible_role_get_type();
}

// static
GType Glib::Value<Gtk::Accessible::State>::value_type()
{
  return gtk_accessible_state_get_type();
}

// static
GType Glib::Value<Gtk::Accessible::Property>::value_type()
{
  return gtk_accessible_property_get_type();
}

// static
GType Glib::Value<Gtk::Accessible::Relation>::value_type()
{
  return gtk_accessible_relation_get_type();
}


namespace Glib
{

Glib::RefPtr<Gtk::Accessible> wrap(GtkAccessible* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::Accessible>( dynamic_cast<Gtk::Accessible*> (Glib::wrap_auto_interface<Gtk::Accessible> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Interface_Class& Accessible_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Accessible_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gtk_accessible_get_type();
  }

  return *this;
}

void Accessible_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);


}


Glib::ObjectBase* Accessible_Class::wrap_new(GObject* object)
{
  return new Accessible((GtkAccessible*)(object));
}


/* The implementation: */

Accessible::Accessible()
:
  Glib::Interface(accessible_class_.init())
{}

Accessible::Accessible(GtkAccessible* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Accessible::Accessible(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Accessible::Accessible(Accessible&& src) noexcept
: Glib::Interface(std::move(src))
{}

Accessible& Accessible::operator=(Accessible&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

Accessible::~Accessible() noexcept
{}

// static
void Accessible::add_interface(GType gtype_implementer)
{
  accessible_class_.init().add_interface(gtype_implementer);
}

Accessible::CppClassType Accessible::accessible_class_; // initialize static member

GType Accessible::get_type()
{
  return accessible_class_.init().get_type();
}


GType Accessible::get_base_type()
{
  return gtk_accessible_get_type();
}


Role Accessible::get_accessible_role() const
{
  return static_cast<Role>(gtk_accessible_get_accessible_role(const_cast<GtkAccessible*>(gobj())));
}

void Accessible::reset_state(State state)
{
  gtk_accessible_reset_state(gobj(), static_cast<GtkAccessibleState>(state));
}

void Accessible::reset_property(Property property)
{
  gtk_accessible_reset_property(gobj(), static_cast<GtkAccessibleProperty>(property));
}

void Accessible::reset_relation(Relation relation)
{
  gtk_accessible_reset_relation(gobj(), static_cast<GtkAccessibleRelation>(relation));
}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Role>::value,
  "Type Role cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Role > Accessible::property_accessible_role() 
{
  return Glib::PropertyProxy< Role >(this, "accessible-role");
}

Glib::PropertyProxy_ReadOnly< Role > Accessible::property_accessible_role() const
{
  return Glib::PropertyProxy_ReadOnly< Role >(this, "accessible-role");
}


} // namespace Gtk


