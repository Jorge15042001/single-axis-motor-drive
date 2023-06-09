// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/drop.h>
#include <gdkmm/private/drop_p.h>


/* Copyright (C) 2018 The gtkmm Development Team
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

#include <giomm/cancellable.h>
#include <giomm/inputstream.h>
#include <giomm/slot_async.h>
#include <gdkmm/contentformats.h>
#include <gdkmm/device.h>
#include <gdkmm/display.h>
#include <gdkmm/drag.h>
#include <gdkmm/surface.h>
#include <gdk/gdk.h>

namespace Gdk
{

void Drop::refuse()
{
  // see GDK docs
  gdk_drop_status(gobj(), static_cast<GdkDragAction>(0), static_cast<GdkDragAction>(0));
}

void Drop::failed()
{
  gdk_drop_finish(gobj(), (static_cast<GdkDragAction>(0)) /* see GDK docs */);
}

Glib::ValueBase Drop::read_value_finish(const Glib::RefPtr<Gio::AsyncResult>& result)
{
  GError* gerror = nullptr;
  const GValue* gvalue = gdk_drop_read_value_finish(gobj(), Glib::unwrap(result), &gerror);
  if (gerror)
    ::Glib::Error::throw_exception(gerror);

  Glib::ValueBase retvalue;
  retvalue.init(gvalue);
  return retvalue;
}

} // namespace Gdk

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::Drop> wrap(GdkDrop* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gdk::Drop>( dynamic_cast<Gdk::Drop*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& Drop_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Drop_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_drop_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Drop_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Drop_Class::wrap_new(GObject* object)
{
  return new Drop((GdkDrop*)object);
}


/* The implementation: */

GdkDrop* Drop::gobj_copy()
{
  reference();
  return gobj();
}

Drop::Drop(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Drop::Drop(GdkDrop* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Drop::Drop(Drop&& src) noexcept
: Glib::Object(std::move(src))
{}

Drop& Drop::operator=(Drop&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


Drop::~Drop() noexcept
{}


Drop::CppClassType Drop::drop_class_; // initialize static member

GType Drop::get_type()
{
  return drop_class_.init().get_type();
}


GType Drop::get_base_type()
{
  return gdk_drop_get_type();
}


Glib::RefPtr<Display> Drop::get_display()
{
  auto retvalue = Glib::wrap(gdk_drop_get_display(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Display> Drop::get_display() const
{
  return const_cast<Drop*>(this)->get_display();
}

Glib::RefPtr<Device> Drop::get_device()
{
  auto retvalue = Glib::wrap(gdk_drop_get_device(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Device> Drop::get_device() const
{
  return const_cast<Drop*>(this)->get_device();
}

Glib::RefPtr<Surface> Drop::get_surface()
{
  auto retvalue = Glib::wrap(gdk_drop_get_surface(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Surface> Drop::get_surface() const
{
  return const_cast<Drop*>(this)->get_surface();
}

Glib::RefPtr<ContentFormats> Drop::get_formats()
{
  auto retvalue = Glib::wrap(gdk_drop_get_formats(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const ContentFormats> Drop::get_formats() const
{
  return const_cast<Drop*>(this)->get_formats();
}

DragAction Drop::get_actions() const
{
  return static_cast<DragAction>(gdk_drop_get_actions(const_cast<GdkDrop*>(gobj())));
}

Glib::RefPtr<Drag> Drop::get_drag()
{
  auto retvalue = Glib::wrap(gdk_drop_get_drag(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Drag> Drop::get_drag() const
{
  return const_cast<Drop*>(this)->get_drag();
}

void Drop::status(DragAction actions, DragAction preferred)
{
  gdk_drop_status(gobj(), static_cast<GdkDragAction>(actions), static_cast<GdkDragAction>(preferred));
}

void Drop::finish(DragAction action)
{
  gdk_drop_finish(gobj(), static_cast<GdkDragAction>(action));
}

void Drop::read_async(const std::vector<Glib::ustring>& mime_types, int io_priority, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable)
{
  // Create a copy of the slot.
  auto slot_copy = new Gio::SlotAsyncReady(slot); 

  gdk_drop_read_async(gobj(), Glib::ArrayHandler<Glib::ustring>::vector_to_array(mime_types).data(), io_priority, const_cast<GCancellable*>(Glib::unwrap(cancellable)), &Gio::SignalProxy_async_callback, slot_copy);
}

void Drop::read_async(const std::vector<Glib::ustring>& mime_types, int io_priority, const Gio::SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  auto slot_copy = new Gio::SlotAsyncReady(slot); 

  gdk_drop_read_async(gobj(), Glib::ArrayHandler<Glib::ustring>::vector_to_array(mime_types).data(), io_priority, nullptr, &Gio::SignalProxy_async_callback, slot_copy);
}

Glib::RefPtr<Gio::InputStream> Drop::read_finish(const Glib::RefPtr<Gio::AsyncResult>& result, Glib::ustring& out_mime_type)
{
  GError* gerror = nullptr;
  const char* g_out_mime_type = nullptr;
  auto retvalue = Glib::wrap(gdk_drop_read_finish(gobj(), Glib::unwrap(result), &g_out_mime_type, &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
out_mime_type = Glib::convert_const_gchar_ptr_to_ustring(g_out_mime_type);
  return retvalue;
}

void Drop::read_value_async(GType type, int io_priority, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable)
{
  // Create a copy of the slot.
  auto slot_copy = new Gio::SlotAsyncReady(slot); 

  gdk_drop_read_value_async(gobj(), type, io_priority, const_cast<GCancellable*>(Glib::unwrap(cancellable)), &Gio::SignalProxy_async_callback, slot_copy);
}

void Drop::read_value_async(GType type, int io_priority, const Gio::SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  auto slot_copy = new Gio::SlotAsyncReady(slot); 

  gdk_drop_read_value_async(gobj(), type, io_priority, nullptr, &Gio::SignalProxy_async_callback, slot_copy);
}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<DragAction>::value,
  "Type DragAction cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< DragAction > Drop::property_actions() const
{
  return Glib::PropertyProxy_ReadOnly< DragAction >(this, "actions");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Device>>::value,
  "Type Glib::RefPtr<Device> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Device> > Drop::property_device() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Device> >(this, "device");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Display>>::value,
  "Type Glib::RefPtr<Display> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Display> > Drop::property_display() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Display> >(this, "display");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Drag>>::value,
  "Type Glib::RefPtr<Drag> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Drag> > Drop::property_drag() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Drag> >(this, "drag");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<ContentFormats>>::value,
  "Type Glib::RefPtr<ContentFormats> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ContentFormats> > Drop::property_formats() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ContentFormats> >(this, "formats");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Surface>>::value,
  "Type Glib::RefPtr<Surface> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Surface> > Drop::property_surface() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Surface> >(this, "surface");
}


} // namespace Gdk


