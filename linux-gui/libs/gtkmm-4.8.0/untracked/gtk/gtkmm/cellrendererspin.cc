// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/cellrendererspin.h>
#include <gtkmm/private/cellrendererspin_p.h>


/* Copyright (C) 2006 The gtkmm Development Team
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

#include <gtkmm/adjustment.h>
#include <gtk/gtk.h>

namespace Gtk
{

Glib::PropertyProxy_Base CellRendererSpin::_property_renderable()
{
  return CellRendererText::_property_renderable();
}

} //namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::CellRendererSpin* wrap(GtkCellRendererSpin* object, bool take_copy)
{
  return dynamic_cast<Gtk::CellRendererSpin *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& CellRendererSpin_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &CellRendererSpin_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_cell_renderer_spin_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void CellRendererSpin_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* CellRendererSpin_Class::wrap_new(GObject* o)
{
  return manage(new CellRendererSpin((GtkCellRendererSpin*)(o)));

}


/* The implementation: */

CellRendererSpin::CellRendererSpin(const Glib::ConstructParams& construct_params)
:
  Gtk::CellRendererText(construct_params)
{
  }

CellRendererSpin::CellRendererSpin(GtkCellRendererSpin* castitem)
:
  Gtk::CellRendererText((GtkCellRendererText*)(castitem))
{
  }


CellRendererSpin::CellRendererSpin(CellRendererSpin&& src) noexcept
: Gtk::CellRendererText(std::move(src))
{}

CellRendererSpin& CellRendererSpin::operator=(CellRendererSpin&& src) noexcept
{
  Gtk::CellRendererText::operator=(std::move(src));
  return *this;
}

CellRendererSpin::~CellRendererSpin() noexcept
{
  destroy_();
}

CellRendererSpin::CppClassType CellRendererSpin::cellrendererspin_class_; // initialize static member

GType CellRendererSpin::get_type()
{
  return cellrendererspin_class_.init().get_type();
}


GType CellRendererSpin::get_base_type()
{
  return gtk_cell_renderer_spin_get_type();
}


CellRendererSpin::CellRendererSpin()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::CellRendererText(Glib::ConstructParams(cellrendererspin_class_.init()))
{
  

}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Adjustment>>::value,
  "Type Glib::RefPtr<Adjustment> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<Adjustment> > CellRendererSpin::property_adjustment() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Adjustment> >(this, "adjustment");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> > CellRendererSpin::property_adjustment() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> >(this, "adjustment");
}

Glib::PropertyProxy< double > CellRendererSpin::property_climb_rate() 
{
  return Glib::PropertyProxy< double >(this, "climb-rate");
}

Glib::PropertyProxy_ReadOnly< double > CellRendererSpin::property_climb_rate() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "climb-rate");
}

Glib::PropertyProxy< guint > CellRendererSpin::property_digits() 
{
  return Glib::PropertyProxy< guint >(this, "digits");
}

Glib::PropertyProxy_ReadOnly< guint > CellRendererSpin::property_digits() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "digits");
}


} // namespace Gtk


