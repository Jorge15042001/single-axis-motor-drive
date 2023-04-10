// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/surface.h>
#include <gdkmm/private/surface_p.h>


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

#include <gdk/gdk.h>
#include <gdkmm/cairoutils.h>
#include <gdkmm/contentprovider.h>
#include <gdkmm/cursor.h>
#include <gdkmm/device.h>
#include <gdkmm/cairocontext.h>
#include <gdkmm/glcontext.h>
#include <gdkmm/frameclock.h>
#include <gdkmm/monitor.h>
#include <gdkmm/dragsurfaceimpl.h>
#include <gdkmm/popupsurfaceimpl.h>
#include <gdkmm/toplevelsurfaceimpl.h>

using CairoRegion = cairo_region_t;

namespace Gdk
{

// Custom wrap_new() because we want to create
// a DragSurfaceImpl if the underlying C class implements the GdkDragSurface interface,
// a PopupSurfaceImpl if the underlying C class implements the GdkPopup interface,
// a ToplevelSurfaceImpl if the underlying C class implements the GdkToplevel interface.
Glib::ObjectBase* Surface_Class::wrap_new(GObject* object)
{
  if (GDK_IS_DRAG_SURFACE(object))
     return new DragSurfaceImpl((GdkSurface*)object);
  if (GDK_IS_POPUP(object))
     return new PopupSurfaceImpl((GdkSurface*)object);
  if (GDK_IS_TOPLEVEL(object))
     return new ToplevelSurfaceImpl((GdkSurface*)object);
  return new Surface((GdkSurface*)object);
}

void Surface::set_cursor()
{
  gdk_surface_set_cursor(gobj(), nullptr);
}

} // namespace Gdk

namespace
{


static void Surface_signal_layout_callback(GdkSurface* self, gint p0,gint p1,void* data)
{
  using namespace Gdk;
  using SlotType = sigc::slot<void(int, int)>;

  auto obj = dynamic_cast<Surface*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
, p1
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Surface_signal_layout_info =
{
  "layout",
  (GCallback) &Surface_signal_layout_callback,
  (GCallback) &Surface_signal_layout_callback
};


static gboolean Surface_signal_render_callback(GdkSurface* self, CairoRegion* p0,void* data)
{
  using namespace Gdk;
  using SlotType = sigc::slot<bool(const ::Cairo::RefPtr<const ::Cairo::Region>&)>;

  auto obj = dynamic_cast<Surface*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(Gdk::Cairo::wrap(p0, false)
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static gboolean Surface_signal_render_notify_callback(GdkSurface* self, CairoRegion* p0, void* data)
{
  using namespace Gdk;
  using SlotType = sigc::slot<void(const ::Cairo::RefPtr<const ::Cairo::Region>&)>;

  auto obj = dynamic_cast<Surface*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Gdk::Cairo::wrap(p0, false)
);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static const Glib::SignalProxyInfo Surface_signal_render_info =
{
  "render",
  (GCallback) &Surface_signal_render_callback,
  (GCallback) &Surface_signal_render_notify_callback
};


static gboolean Surface_signal_event_callback(GdkSurface* self, GdkEvent* p0,void* data)
{
  using namespace Gdk;
  using SlotType = sigc::slot<bool(const Glib::RefPtr<const Event>&)>;

  auto obj = dynamic_cast<Surface*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static gboolean Surface_signal_event_notify_callback(GdkSurface* self, GdkEvent* p0, void* data)
{
  using namespace Gdk;
  using SlotType = sigc::slot<void(const Glib::RefPtr<const Event>&)>;

  auto obj = dynamic_cast<Surface*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static const Glib::SignalProxyInfo Surface_signal_event_info =
{
  "event",
  (GCallback) &Surface_signal_event_callback,
  (GCallback) &Surface_signal_event_notify_callback
};


static void Surface_signal_enter_monitor_callback(GdkSurface* self, GdkMonitor* p0,void* data)
{
  using namespace Gdk;
  using SlotType = sigc::slot<void(const Glib::RefPtr<Monitor>&)>;

  auto obj = dynamic_cast<Surface*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Surface_signal_enter_monitor_info =
{
  "enter-monitor",
  (GCallback) &Surface_signal_enter_monitor_callback,
  (GCallback) &Surface_signal_enter_monitor_callback
};


static void Surface_signal_leave_monitor_callback(GdkSurface* self, GdkMonitor* p0,void* data)
{
  using namespace Gdk;
  using SlotType = sigc::slot<void(const Glib::RefPtr<Monitor>&)>;

  auto obj = dynamic_cast<Surface*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Surface_signal_leave_monitor_info =
{
  "leave-monitor",
  (GCallback) &Surface_signal_leave_monitor_callback,
  (GCallback) &Surface_signal_leave_monitor_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::Surface> wrap(GdkSurface* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gdk::Surface>( dynamic_cast<Gdk::Surface*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& Surface_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Surface_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_surface_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Surface_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


/* The implementation: */

GdkSurface* Surface::gobj_copy()
{
  reference();
  return gobj();
}

Surface::Surface(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Surface::Surface(GdkSurface* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Surface::Surface(Surface&& src) noexcept
: Glib::Object(std::move(src))
{}

Surface& Surface::operator=(Surface&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


Surface::~Surface() noexcept
{}


Surface::CppClassType Surface::surface_class_; // initialize static member

GType Surface::get_type()
{
  return surface_class_.init().get_type();
}


GType Surface::get_base_type()
{
  return gdk_surface_get_type();
}


Glib::RefPtr<Surface> Surface::create_toplevel(const Glib::RefPtr<Display>& display)
{
  return Glib::wrap(gdk_surface_new_toplevel(Glib::unwrap(display)));
}

Glib::RefPtr<Surface> Surface::create_popup(const Glib::RefPtr<Surface>& parent, bool autohide)
{
  return Glib::wrap(gdk_surface_new_popup(Glib::unwrap(parent), static_cast<int>(autohide)));
}

Glib::RefPtr<Display> Surface::get_display()
{
  auto retvalue = Glib::wrap(gdk_surface_get_display(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Display> Surface::get_display() const
{
  return const_cast<Surface*>(this)->get_display();
}

void Surface::hide()
{
  gdk_surface_hide(gobj());
}

void Surface::set_input_region(const ::Cairo::RefPtr< ::Cairo::Region>& region)
{
  gdk_surface_set_input_region(gobj(), ((region) ? (region)->cobj() : nullptr));
}

bool Surface::get_mapped() const
{
  return gdk_surface_get_mapped(const_cast<GdkSurface*>(gobj()));
}

void Surface::set_cursor(const Glib::RefPtr<Cursor>& cursor)
{
  gdk_surface_set_cursor(gobj(), Glib::unwrap(cursor));
}

void Surface::set_device_cursor(const Glib::RefPtr<Device>& device, const Glib::RefPtr<Cursor>& cursor)
{
  gdk_surface_set_device_cursor(gobj(), Glib::unwrap(device), Glib::unwrap(cursor));
}

Glib::RefPtr<Cursor> Surface::get_device_cursor(const Glib::RefPtr<Device>& device)
{
  auto retvalue = Glib::wrap(gdk_surface_get_device_cursor(gobj(), Glib::unwrap(device)));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Cursor> Surface::get_device_cursor(const Glib::RefPtr<const Device>& device) const
{
  auto retvalue = Glib::wrap(gdk_surface_get_device_cursor(const_cast<GdkSurface*>(gobj()), const_cast<GdkDevice*>(Glib::unwrap<Gdk::Device>(device))));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<Cursor> Surface::get_cursor()
{
  auto retvalue = Glib::wrap(gdk_surface_get_cursor(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Cursor> Surface::get_cursor() const
{
  return const_cast<Surface*>(this)->get_cursor();
}

int Surface::get_width() const
{
  return gdk_surface_get_width(const_cast<GdkSurface*>(gobj()));
}

int Surface::get_height() const
{
  return gdk_surface_get_height(const_cast<GdkSurface*>(gobj()));
}

int Surface::get_scale_factor() const
{
  return gdk_surface_get_scale_factor(const_cast<GdkSurface*>(gobj()));
}

bool Surface::get_device_position(const Glib::RefPtr<const Device>& device, double& x, double& y, ModifierType& mask) const
{
  return gdk_surface_get_device_position(const_cast<GdkSurface*>(gobj()), const_cast<GdkDevice*>(Glib::unwrap<Gdk::Device>(device)), &(x), &(y), ((GdkModifierType*) &(mask)));
}

::Cairo::RefPtr< ::Cairo::Surface> Surface::create_similar_surface(::Cairo::Content content, int width, int height)
{
  return Gdk::Cairo::wrap(gdk_surface_create_similar_surface(gobj(), (cairo_content_t)(content), width, height));
}

void Surface::beep()
{
  gdk_surface_beep(gobj());
}

Glib::RefPtr<Drag> Surface::drag_begin_from_point(const Glib::RefPtr<Device>& device, const Glib::RefPtr<ContentProvider>& content, DragAction actions, double dx, double dy)
{
  return Glib::wrap(gdk_drag_begin(gobj(), Glib::unwrap(device), Glib::unwrap(content), static_cast<GdkDragAction>(actions), dx, dy));
}

void Surface::queue_render()
{
  gdk_surface_queue_render(gobj());
}

void Surface::request_layout()
{
  gdk_surface_request_layout(gobj());
}

Glib::RefPtr<FrameClock> Surface::get_frame_clock()
{
  auto retvalue = Glib::wrap(gdk_surface_get_frame_clock(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const FrameClock> Surface::get_frame_clock() const
{
  return const_cast<Surface*>(this)->get_frame_clock();
}

void Surface::set_opaque_region(const ::Cairo::RefPtr<const ::Cairo::Region>& region)
{
  gdk_surface_set_opaque_region(gobj(), const_cast<cairo_region_t*>((region) ? (region)->cobj() : nullptr));
}

Glib::RefPtr<Gdk::GLContext> Surface::create_gl_context()
{
  GError* gerror = nullptr;
  auto retvalue = Glib::wrap(gdk_surface_create_gl_context(gobj(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<Gdk::CairoContext> Surface::create_cairo_context()
{
  return Glib::wrap(gdk_surface_create_cairo_context(gobj()));
}


Glib::SignalProxy<void(int, int)> Surface::signal_layout()
{
  return Glib::SignalProxy<void(int, int) >(this, &Surface_signal_layout_info);
}


Glib::SignalProxy<bool(const ::Cairo::RefPtr<const ::Cairo::Region>&)> Surface::signal_render()
{
  return Glib::SignalProxy<bool(const ::Cairo::RefPtr<const ::Cairo::Region>&) >(this, &Surface_signal_render_info);
}


Glib::SignalProxy<bool(const Glib::RefPtr<const Event>&)> Surface::signal_event()
{
  return Glib::SignalProxy<bool(const Glib::RefPtr<const Event>&) >(this, &Surface_signal_event_info);
}


Glib::SignalProxy<void(const Glib::RefPtr<Monitor>&)> Surface::signal_enter_monitor()
{
  return Glib::SignalProxy<void(const Glib::RefPtr<Monitor>&) >(this, &Surface_signal_enter_monitor_info);
}


Glib::SignalProxy<void(const Glib::RefPtr<Monitor>&)> Surface::signal_leave_monitor()
{
  return Glib::SignalProxy<void(const Glib::RefPtr<Monitor>&) >(this, &Surface_signal_leave_monitor_info);
}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Cursor>>::value,
  "Type Glib::RefPtr<Cursor> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<Cursor> > Surface::property_cursor() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Cursor> >(this, "cursor");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Cursor> > Surface::property_cursor() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Cursor> >(this, "cursor");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Display>>::value,
  "Type Glib::RefPtr<Display> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Display> > Surface::property_display() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Display> >(this, "display");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<FrameClock>>::value,
  "Type Glib::RefPtr<FrameClock> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<FrameClock> > Surface::property_frame_clock() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<FrameClock> >(this, "frame-clock");
}

Glib::PropertyProxy_ReadOnly< bool > Surface::property_mapped() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "mapped");
}

Glib::PropertyProxy_ReadOnly< int > Surface::property_width() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "width");
}

Glib::PropertyProxy_ReadOnly< int > Surface::property_height() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "height");
}

Glib::PropertyProxy_ReadOnly< int > Surface::property_scale_factor() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "scale-factor");
}


} // namespace Gdk

