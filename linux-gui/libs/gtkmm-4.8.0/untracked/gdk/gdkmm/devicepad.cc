// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/devicepad.h>
#include <gdkmm/private/devicepad_p.h>


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

#include <gdk/gdk.h>

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gdk::DevicePad::Feature>::value_type()
{
  return gdk_device_pad_feature_get_type();
}


namespace Glib
{

Glib::RefPtr<Gdk::DevicePad> wrap(GdkDevicePad* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gdk::DevicePad>( dynamic_cast<Gdk::DevicePad*> (Glib::wrap_auto_interface<Gdk::DevicePad> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Interface_Class& DevicePad_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &DevicePad_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gdk_device_pad_get_type();
  }

  return *this;
}

void DevicePad_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);


}


Glib::ObjectBase* DevicePad_Class::wrap_new(GObject* object)
{
  return new DevicePad((GdkDevicePad*)(object));
}


/* The implementation: */

DevicePad::DevicePad()
:
  Glib::Interface(devicepad_class_.init())
{}

DevicePad::DevicePad(GdkDevicePad* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

DevicePad::DevicePad(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

DevicePad::DevicePad(DevicePad&& src) noexcept
: Glib::Interface(std::move(src))
{}

DevicePad& DevicePad::operator=(DevicePad&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

DevicePad::~DevicePad() noexcept
{}

// static
void DevicePad::add_interface(GType gtype_implementer)
{
  devicepad_class_.init().add_interface(gtype_implementer);
}

DevicePad::CppClassType DevicePad::devicepad_class_; // initialize static member

GType DevicePad::get_type()
{
  return devicepad_class_.init().get_type();
}


GType DevicePad::get_base_type()
{
  return gdk_device_pad_get_type();
}


int DevicePad::get_n_groups() const
{
  return gdk_device_pad_get_n_groups(const_cast<GdkDevicePad*>(gobj()));
}

int DevicePad::get_group_n_modes(int group_idx) const
{
  return gdk_device_pad_get_group_n_modes(const_cast<GdkDevicePad*>(gobj()), group_idx);
}

int DevicePad::get_n_features(Feature feature) const
{
  return gdk_device_pad_get_n_features(const_cast<GdkDevicePad*>(gobj()), static_cast<GdkDevicePadFeature>(feature));
}

int DevicePad::get_feature_group(Feature feature, int feature_idx) const
{
  return gdk_device_pad_get_feature_group(const_cast<GdkDevicePad*>(gobj()), static_cast<GdkDevicePadFeature>(feature), feature_idx);
}


} // namespace Gdk


