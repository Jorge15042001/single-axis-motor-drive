// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/monitor.h>
#include <gdkmm/private/monitor_p.h>


/* Copyright (C) 2016 The gtkmm Development Team
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

#include <gdkmm/display.h>


namespace
{


static const Glib::SignalProxyInfo Monitor_signal_invalidate_info =
{
  "invalidate",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gdk::SubpixelLayout>::value_type()
{
  return gdk_subpixel_layout_get_type();
}


namespace Glib
{

Glib::RefPtr<Gdk::Monitor> wrap(GdkMonitor* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gdk::Monitor>( dynamic_cast<Gdk::Monitor*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& Monitor_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Monitor_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_monitor_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Monitor_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Monitor_Class::wrap_new(GObject* object)
{
  return new Monitor((GdkMonitor*)object);
}


/* The implementation: */

GdkMonitor* Monitor::gobj_copy()
{
  reference();
  return gobj();
}

Monitor::Monitor(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Monitor::Monitor(GdkMonitor* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Monitor::Monitor(Monitor&& src) noexcept
: Glib::Object(std::move(src))
{}

Monitor& Monitor::operator=(Monitor&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


Monitor::~Monitor() noexcept
{}


Monitor::CppClassType Monitor::monitor_class_; // initialize static member

GType Monitor::get_type()
{
  return monitor_class_.init().get_type();
}


GType Monitor::get_base_type()
{
  return gdk_monitor_get_type();
}


Monitor::Monitor()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(monitor_class_.init()))
{
  

}

Glib::RefPtr<Display> Monitor::get_display()
{
  auto retvalue = Glib::wrap(gdk_monitor_get_display(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Display> Monitor::get_display() const
{
  return const_cast<Monitor*>(this)->get_display();
}

void Monitor::get_geometry(Rectangle& geometry) const
{
  gdk_monitor_get_geometry(const_cast<GdkMonitor*>(gobj()), (geometry).gobj());
}

int Monitor::get_width_mm() const
{
  return gdk_monitor_get_width_mm(const_cast<GdkMonitor*>(gobj()));
}

int Monitor::get_height_mm() const
{
  return gdk_monitor_get_height_mm(const_cast<GdkMonitor*>(gobj()));
}

Glib::ustring Monitor::get_manufacturer() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gdk_monitor_get_manufacturer(const_cast<GdkMonitor*>(gobj())));
}

Glib::ustring Monitor::get_model() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gdk_monitor_get_model(const_cast<GdkMonitor*>(gobj())));
}

Glib::ustring Monitor::get_connector() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gdk_monitor_get_connector(const_cast<GdkMonitor*>(gobj())));
}

int Monitor::get_scale_factor() const
{
  return gdk_monitor_get_scale_factor(const_cast<GdkMonitor*>(gobj()));
}

int Monitor::get_refresh_rate() const
{
  return gdk_monitor_get_refresh_rate(const_cast<GdkMonitor*>(gobj()));
}

SubpixelLayout Monitor::get_subpixel_layout() const
{
  return static_cast<SubpixelLayout>(gdk_monitor_get_subpixel_layout(const_cast<GdkMonitor*>(gobj())));
}

bool Monitor::is_valid() const
{
  return gdk_monitor_is_valid(const_cast<GdkMonitor*>(gobj()));
}


Glib::SignalProxy<void()> Monitor::signal_invalidate()
{
  return Glib::SignalProxy<void() >(this, &Monitor_signal_invalidate_info);
}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Display>>::value,
  "Type Glib::RefPtr<Display> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Display> > Monitor::property_display() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Display> >(this, "display");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Monitor::property_manufacturer() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "manufacturer");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Monitor::property_model() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "model");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Monitor::property_connector() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "connector");
}

Glib::PropertyProxy_ReadOnly< int > Monitor::property_scale_factor() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "scale-factor");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Gdk::Rectangle>::value,
  "Type Gdk::Rectangle cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Gdk::Rectangle > Monitor::property_geometry() const
{
  return Glib::PropertyProxy_ReadOnly< Gdk::Rectangle >(this, "geometry");
}

Glib::PropertyProxy_ReadOnly< int > Monitor::property_width_mm() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "width-mm");
}

Glib::PropertyProxy_ReadOnly< int > Monitor::property_height_mm() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "height-mm");
}

Glib::PropertyProxy_ReadOnly< int > Monitor::property_refresh_rate() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "refresh-rate");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<SubpixelLayout>::value,
  "Type SubpixelLayout cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< SubpixelLayout > Monitor::property_subpixel_layout() const
{
  return Glib::PropertyProxy_ReadOnly< SubpixelLayout >(this, "subpixel-layout");
}

Glib::PropertyProxy_ReadOnly< bool > Monitor::property_valid() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "valid");
}


} // namespace Gdk


