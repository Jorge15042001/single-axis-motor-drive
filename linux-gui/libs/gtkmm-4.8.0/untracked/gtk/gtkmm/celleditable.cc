// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/celleditable.h>
#include <gtkmm/private/celleditable_p.h>


/* Copyright 1998-2002 The gtkmm Development Team
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


static const Glib::SignalProxyInfo CellEditable_signal_editing_done_info =
{
  "editing_done",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo CellEditable_signal_remove_widget_info =
{
  "remove_widget",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::CellEditable> wrap(GtkCellEditable* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::CellEditable>( dynamic_cast<Gtk::CellEditable*> (Glib::wrap_auto_interface<Gtk::CellEditable> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Interface_Class& CellEditable_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &CellEditable_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gtk_cell_editable_get_type();
  }

  return *this;
}

void CellEditable_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);

  klass->start_editing = &start_editing_vfunc_callback;

  klass->editing_done = &editing_done_callback;
  klass->remove_widget = &remove_widget_callback;
}

void CellEditable_Class::start_editing_vfunc_callback(GtkCellEditable* self, GdkEvent* event)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->start_editing_vfunc(Glib::wrap(event, true)
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->start_editing)
    (*base->start_editing)(self, event);
}

void CellEditable_Class::editing_done_callback(GtkCellEditable* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_editing_done();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)    );

  // Call the original underlying C function:
  if(base && base->editing_done)
    (*base->editing_done)(self);
}
void CellEditable_Class::remove_widget_callback(GtkCellEditable* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_remove_widget();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)    );

  // Call the original underlying C function:
  if(base && base->remove_widget)
    (*base->remove_widget)(self);
}


Glib::ObjectBase* CellEditable_Class::wrap_new(GObject* object)
{
  return new CellEditable((GtkCellEditable*)(object));
}


/* The implementation: */

CellEditable::CellEditable()
:
  Glib::Interface(celleditable_class_.init())
{}

CellEditable::CellEditable(GtkCellEditable* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

CellEditable::CellEditable(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

CellEditable::CellEditable(CellEditable&& src) noexcept
: Glib::Interface(std::move(src))
{}

CellEditable& CellEditable::operator=(CellEditable&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

CellEditable::~CellEditable() noexcept
{}

// static
void CellEditable::add_interface(GType gtype_implementer)
{
  celleditable_class_.init().add_interface(gtype_implementer);
}

CellEditable::CppClassType CellEditable::celleditable_class_; // initialize static member

GType CellEditable::get_type()
{
  return celleditable_class_.init().get_type();
}


GType CellEditable::get_base_type()
{
  return gtk_cell_editable_get_type();
}


void CellEditable::start_editing(const Glib::RefPtr<const Gdk::Event>& event)
{
  gtk_cell_editable_start_editing(gobj(), const_cast<GdkEvent*>(Glib::unwrap(event)));
}

void CellEditable::editing_done()
{
  gtk_cell_editable_editing_done(gobj());
}

void CellEditable::remove_widget()
{
  gtk_cell_editable_remove_widget(gobj());
}


Glib::SignalProxy<void()> CellEditable::signal_editing_done()
{
  return Glib::SignalProxy<void() >(this, &CellEditable_signal_editing_done_info);
}


Glib::SignalProxy<void()> CellEditable::signal_remove_widget()
{
  return Glib::SignalProxy<void() >(this, &CellEditable_signal_remove_widget_info);
}


Glib::PropertyProxy< bool > CellEditable::property_editing_canceled() 
{
  return Glib::PropertyProxy< bool >(this, "editing-canceled");
}

Glib::PropertyProxy_ReadOnly< bool > CellEditable::property_editing_canceled() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "editing-canceled");
}


void Gtk::CellEditable::on_editing_done()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->editing_done)
    (*base->editing_done)(gobj());
}
void Gtk::CellEditable::on_remove_widget()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->remove_widget)
    (*base->remove_widget)(gobj());
}

void Gtk::CellEditable::start_editing_vfunc(const Glib::RefPtr<const Gdk::Event>& event) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->start_editing)
  {
    (*base->start_editing)(gobj(),const_cast<GdkEvent*>(Glib::unwrap(event)));
  }
}


} // namespace Gtk


