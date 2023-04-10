// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/selectionmodel.h>
#include <gtkmm/private/selectionmodel_p.h>


/* Copyright (C) 2019 The gtkmm Development Team
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


static void SelectionModel_signal_selection_changed_callback(GtkSelectionModel* self, guint p0,guint p1,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(guint, guint)>;

  auto obj = dynamic_cast<SelectionModel*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0, p1);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo SelectionModel_signal_selection_changed_info =
{
  "selection-changed",
  (GCallback) &SelectionModel_signal_selection_changed_callback,
  (GCallback) &SelectionModel_signal_selection_changed_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::SelectionModel> wrap(GtkSelectionModel* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::SelectionModel>( dynamic_cast<Gtk::SelectionModel*> (Glib::wrap_auto_interface<Gtk::SelectionModel> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Interface_Class& SelectionModel_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &SelectionModel_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gtk_selection_model_get_type();
  }

  return *this;
}

void SelectionModel_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);

  klass->is_selected = &is_selected_vfunc_callback;
  klass->get_selection_in_range = &get_selection_in_range_vfunc_callback;
  klass->select_item = &select_item_vfunc_callback;
  klass->unselect_item = &unselect_item_vfunc_callback;
  klass->select_range = &select_range_vfunc_callback;
  klass->unselect_range = &unselect_range_vfunc_callback;
  klass->select_all = &select_all_vfunc_callback;
  klass->unselect_all = &unselect_all_vfunc_callback;
  klass->set_selection = &set_selection_vfunc_callback;

}

gboolean SelectionModel_Class::is_selected_vfunc_callback(GtkSelectionModel* self, guint position)
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
        return static_cast<int>(obj->is_selected_vfunc(position));
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
  if(base && base->is_selected)
    return (*base->is_selected)(self, position);

  using RType = gboolean;
  return RType();
}
GtkBitset* SelectionModel_Class::get_selection_in_range_vfunc_callback(GtkSelectionModel* self, guint position, guint n_items)
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
        return Glib::unwrap_copy(std::const_pointer_cast<Bitset>(obj->get_selection_vfunc(position, n_items)));
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
  if(base && base->get_selection_in_range)
    return (*base->get_selection_in_range)(self, position, n_items);

  using RType = GtkBitset*;
  return RType();
}
gboolean SelectionModel_Class::select_item_vfunc_callback(GtkSelectionModel* self, guint position, gboolean unselect_rest)
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
        return static_cast<int>(obj->select_item_vfunc(position, unselect_rest
));
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
  if(base && base->select_item)
    return (*base->select_item)(self, position, unselect_rest);

  using RType = gboolean;
  return RType();
}
gboolean SelectionModel_Class::unselect_item_vfunc_callback(GtkSelectionModel* self, guint position)
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
        return static_cast<int>(obj->unselect_item_vfunc(position));
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
  if(base && base->unselect_item)
    return (*base->unselect_item)(self, position);

  using RType = gboolean;
  return RType();
}
gboolean SelectionModel_Class::select_range_vfunc_callback(GtkSelectionModel* self, guint position, guint n_items, gboolean unselect_rest)
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
        return static_cast<int>(obj->select_range_vfunc(position, n_items, unselect_rest
));
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
  if(base && base->select_range)
    return (*base->select_range)(self, position, n_items, unselect_rest);

  using RType = gboolean;
  return RType();
}
gboolean SelectionModel_Class::unselect_range_vfunc_callback(GtkSelectionModel* self, guint position, guint n_items)
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
        return static_cast<int>(obj->unselect_range_vfunc(position, n_items));
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
  if(base && base->unselect_range)
    return (*base->unselect_range)(self, position, n_items);

  using RType = gboolean;
  return RType();
}
gboolean SelectionModel_Class::select_all_vfunc_callback(GtkSelectionModel* self)
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
        return static_cast<int>(obj->select_all_vfunc());
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
  if(base && base->select_all)
    return (*base->select_all)(self);

  using RType = gboolean;
  return RType();
}
gboolean SelectionModel_Class::unselect_all_vfunc_callback(GtkSelectionModel* self)
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
        return static_cast<int>(obj->unselect_all_vfunc());
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
  if(base && base->unselect_all)
    return (*base->unselect_all)(self);

  using RType = gboolean;
  return RType();
}
gboolean SelectionModel_Class::set_selection_vfunc_callback(GtkSelectionModel* self, GtkBitset* selected, GtkBitset* mask)
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
        return static_cast<int>(obj->set_selection_vfunc(Glib::wrap(selected, true)
, Glib::wrap(mask, true)
));
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
  if(base && base->set_selection)
    return (*base->set_selection)(self, selected, mask);

  using RType = gboolean;
  return RType();
}


Glib::ObjectBase* SelectionModel_Class::wrap_new(GObject* object)
{
  return new SelectionModel((GtkSelectionModel*)(object));
}


/* The implementation: */

SelectionModel::SelectionModel()
:
  Glib::Interface(selectionmodel_class_.init())
{}

SelectionModel::SelectionModel(GtkSelectionModel* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

SelectionModel::SelectionModel(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

SelectionModel::SelectionModel(SelectionModel&& src) noexcept
: Glib::Interface(std::move(src))
{}

SelectionModel& SelectionModel::operator=(SelectionModel&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

SelectionModel::~SelectionModel() noexcept
{}

// static
void SelectionModel::add_interface(GType gtype_implementer)
{
  selectionmodel_class_.init().add_interface(gtype_implementer);
}

SelectionModel::CppClassType SelectionModel::selectionmodel_class_; // initialize static member

GType SelectionModel::get_type()
{
  return selectionmodel_class_.init().get_type();
}


GType SelectionModel::get_base_type()
{
  return gtk_selection_model_get_type();
}


bool SelectionModel::is_selected(guint position) const
{
  return gtk_selection_model_is_selected(const_cast<GtkSelectionModel*>(gobj()), position);
}

Glib::RefPtr<const Bitset> SelectionModel::get_selection() const
{
  return Glib::wrap(gtk_selection_model_get_selection(const_cast<GtkSelectionModel*>(gobj())));
}

Glib::RefPtr<const Bitset> SelectionModel::get_selection(guint position, guint n_items) const
{
  return Glib::wrap(gtk_selection_model_get_selection_in_range(const_cast<GtkSelectionModel*>(gobj()), position, n_items));
}

bool SelectionModel::select_item(guint position, bool unselect_rest)
{
  return gtk_selection_model_select_item(gobj(), position, static_cast<int>(unselect_rest));
}

bool SelectionModel::unselect_item(guint position)
{
  return gtk_selection_model_unselect_item(gobj(), position);
}

bool SelectionModel::select_range(guint position, guint n_items, bool unselect_rest)
{
  return gtk_selection_model_select_range(gobj(), position, n_items, static_cast<int>(unselect_rest));
}

bool SelectionModel::unselect_range(guint position, guint n_items)
{
  return gtk_selection_model_unselect_range(gobj(), position, n_items);
}

bool SelectionModel::select_all()
{
  return gtk_selection_model_select_all(gobj());
}

bool SelectionModel::unselect_all()
{
  return gtk_selection_model_unselect_all(gobj());
}

bool SelectionModel::set_selection(const Glib::RefPtr<const Bitset>& selected, const Glib::RefPtr<const Bitset>& mask)
{
  return gtk_selection_model_set_selection(gobj(), const_cast<GtkBitset*>(Glib::unwrap(selected)), const_cast<GtkBitset*>(Glib::unwrap(mask)));
}

void SelectionModel::selection_changed(guint position, guint n_items)
{
  gtk_selection_model_selection_changed(gobj(), position, n_items);
}


Glib::SignalProxy<void(guint, guint)> SelectionModel::signal_selection_changed()
{
  return Glib::SignalProxy<void(guint, guint) >(this, &SelectionModel_signal_selection_changed_info);
}


bool Gtk::SelectionModel::is_selected_vfunc(guint position) const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->is_selected)
  {
    bool retval((*base->is_selected)(const_cast<GtkSelectionModel*>(gobj()),position));
    return retval;
  }

  using RType = bool;
  return RType();
}
Glib::RefPtr<const Bitset> Gtk::SelectionModel::get_selection_vfunc(guint position, guint n_items) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_selection_in_range)
  {
    Glib::RefPtr<const Bitset> retval(Glib::wrap((*base->get_selection_in_range)(gobj(),position,n_items)));
    return retval;
  }

  using RType = Glib::RefPtr<const Bitset>;
  return RType();
}
bool Gtk::SelectionModel::select_item_vfunc(guint position, bool unselect_rest) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->select_item)
  {
    bool retval((*base->select_item)(gobj(),position,static_cast<int>(unselect_rest)));
    return retval;
  }

  using RType = bool;
  return RType();
}
bool Gtk::SelectionModel::unselect_item_vfunc(guint position) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->unselect_item)
  {
    bool retval((*base->unselect_item)(gobj(),position));
    return retval;
  }

  using RType = bool;
  return RType();
}
bool Gtk::SelectionModel::select_range_vfunc(guint position, guint n_items, bool unselect_rest) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->select_range)
  {
    bool retval((*base->select_range)(gobj(),position,n_items,static_cast<int>(unselect_rest)));
    return retval;
  }

  using RType = bool;
  return RType();
}
bool Gtk::SelectionModel::unselect_range_vfunc(guint position, guint n_items) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->unselect_range)
  {
    bool retval((*base->unselect_range)(gobj(),position,n_items));
    return retval;
  }

  using RType = bool;
  return RType();
}
bool Gtk::SelectionModel::select_all_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->select_all)
  {
    bool retval((*base->select_all)(gobj()));
    return retval;
  }

  using RType = bool;
  return RType();
}
bool Gtk::SelectionModel::unselect_all_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->unselect_all)
  {
    bool retval((*base->unselect_all)(gobj()));
    return retval;
  }

  using RType = bool;
  return RType();
}
bool Gtk::SelectionModel::set_selection_vfunc(const Glib::RefPtr<const Bitset>& selected, const Glib::RefPtr<const Bitset>& mask) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->set_selection)
  {
    bool retval((*base->set_selection)(gobj(),const_cast<GtkBitset*>(Glib::unwrap(selected)),const_cast<GtkBitset*>(Glib::unwrap(mask))));
    return retval;
  }

  using RType = bool;
  return RType();
}


} // namespace Gtk


