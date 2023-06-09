// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/cellrendereraccel.h>
#include <gtkmm/private/cellrendereraccel_p.h>


/*
 * Copyright 2005 The gtkmm Development Team
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

using Mode = Gtk::CellRendererAccel::Mode;

namespace Gtk
{

Glib::PropertyProxy_Base CellRendererAccel::_property_renderable()
{
  //Renderering just this one property would probably not be meaningful.
  return property_accel_key();
}

} //namespace Gtk

namespace
{


static void CellRendererAccel_signal_accel_edited_callback(GtkCellRendererAccel* self, const gchar* p0,guint p1,GdkModifierType p2,guint p3,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(const Glib::ustring&, guint, Gdk::ModifierType, guint)>;

  auto obj = dynamic_cast<CellRendererAccel*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
, p1, static_cast<Gdk::ModifierType>(p2)
, p3);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo CellRendererAccel_signal_accel_edited_info =
{
  "accel_edited",
  (GCallback) &CellRendererAccel_signal_accel_edited_callback,
  (GCallback) &CellRendererAccel_signal_accel_edited_callback
};


static void CellRendererAccel_signal_accel_cleared_callback(GtkCellRendererAccel* self, const gchar* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(const Glib::ustring&)>;

  auto obj = dynamic_cast<CellRendererAccel*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo CellRendererAccel_signal_accel_cleared_info =
{
  "accel_cleared",
  (GCallback) &CellRendererAccel_signal_accel_cleared_callback,
  (GCallback) &CellRendererAccel_signal_accel_cleared_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::CellRendererAccel::Mode>::value_type()
{
  return gtk_cell_renderer_accel_mode_get_type();
}


namespace Glib
{

Gtk::CellRendererAccel* wrap(GtkCellRendererAccel* object, bool take_copy)
{
  return dynamic_cast<Gtk::CellRendererAccel *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& CellRendererAccel_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &CellRendererAccel_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_cell_renderer_accel_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void CellRendererAccel_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* CellRendererAccel_Class::wrap_new(GObject* o)
{
  return manage(new CellRendererAccel((GtkCellRendererAccel*)(o)));

}


/* The implementation: */

CellRendererAccel::CellRendererAccel(const Glib::ConstructParams& construct_params)
:
  Gtk::CellRendererText(construct_params)
{
  }

CellRendererAccel::CellRendererAccel(GtkCellRendererAccel* castitem)
:
  Gtk::CellRendererText((GtkCellRendererText*)(castitem))
{
  }


CellRendererAccel::CellRendererAccel(CellRendererAccel&& src) noexcept
: Gtk::CellRendererText(std::move(src))
{}

CellRendererAccel& CellRendererAccel::operator=(CellRendererAccel&& src) noexcept
{
  Gtk::CellRendererText::operator=(std::move(src));
  return *this;
}

CellRendererAccel::~CellRendererAccel() noexcept
{
  destroy_();
}

CellRendererAccel::CppClassType CellRendererAccel::cellrendereraccel_class_; // initialize static member

GType CellRendererAccel::get_type()
{
  return cellrendereraccel_class_.init().get_type();
}


GType CellRendererAccel::get_base_type()
{
  return gtk_cell_renderer_accel_get_type();
}


CellRendererAccel::CellRendererAccel()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::CellRendererText(Glib::ConstructParams(cellrendereraccel_class_.init()))
{
  

}


Glib::SignalProxy<void(const Glib::ustring&, guint, Gdk::ModifierType, guint)> CellRendererAccel::signal_accel_edited()
{
  return Glib::SignalProxy<void(const Glib::ustring&, guint, Gdk::ModifierType, guint) >(this, &CellRendererAccel_signal_accel_edited_info);
}


Glib::SignalProxy<void(const Glib::ustring&)> CellRendererAccel::signal_accel_cleared()
{
  return Glib::SignalProxy<void(const Glib::ustring&) >(this, &CellRendererAccel_signal_accel_cleared_info);
}


Glib::PropertyProxy< guint > CellRendererAccel::property_accel_key() 
{
  return Glib::PropertyProxy< guint >(this, "accel-key");
}

Glib::PropertyProxy_ReadOnly< guint > CellRendererAccel::property_accel_key() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "accel-key");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Gdk::ModifierType>::value,
  "Type Gdk::ModifierType cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Gdk::ModifierType > CellRendererAccel::property_accel_mods() 
{
  return Glib::PropertyProxy< Gdk::ModifierType >(this, "accel-mods");
}

Glib::PropertyProxy_ReadOnly< Gdk::ModifierType > CellRendererAccel::property_accel_mods() const
{
  return Glib::PropertyProxy_ReadOnly< Gdk::ModifierType >(this, "accel-mods");
}

Glib::PropertyProxy< guint > CellRendererAccel::property_keycode() 
{
  return Glib::PropertyProxy< guint >(this, "keycode");
}

Glib::PropertyProxy_ReadOnly< guint > CellRendererAccel::property_keycode() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "keycode");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Mode>::value,
  "Type Mode cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Mode > CellRendererAccel::property_accel_mode() 
{
  return Glib::PropertyProxy< Mode >(this, "accel-mode");
}

Glib::PropertyProxy_ReadOnly< Mode > CellRendererAccel::property_accel_mode() const
{
  return Glib::PropertyProxy_ReadOnly< Mode >(this, "accel-mode");
}


} // namespace Gtk


