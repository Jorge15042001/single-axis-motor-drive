// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/overlay.h>
#include <gtkmm/private/overlay_p.h>


/*
 * Copyright 2014 The gtkmm Development Team
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


namespace Gtk
{

void Overlay::unset_child()
{
  gtk_overlay_set_child(gobj(), nullptr);
}

} // namespace Gtk

namespace
{


static gboolean Overlay_signal_get_child_position_callback(GtkOverlay* self, GtkWidget* p0,GdkRectangle* p1,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<bool(Gtk::Widget*, Gdk::Rectangle&)>;

  auto obj = dynamic_cast<Overlay*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(Glib::wrap(p0)
, Glib::wrap(p1)
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

static gboolean Overlay_signal_get_child_position_notify_callback(GtkOverlay* self, GtkWidget* p0,GdkRectangle* p1, void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(Gtk::Widget*, Gdk::Rectangle&)>;

  auto obj = dynamic_cast<Overlay*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0)
, Glib::wrap(p1)
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

static const Glib::SignalProxyInfo Overlay_signal_get_child_position_info =
{
  "get-child-position",
  (GCallback) &Overlay_signal_get_child_position_callback,
  (GCallback) &Overlay_signal_get_child_position_notify_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::Overlay* wrap(GtkOverlay* object, bool take_copy)
{
  return dynamic_cast<Gtk::Overlay *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Overlay_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Overlay_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_overlay_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Overlay_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Overlay_Class::wrap_new(GObject* o)
{
  return manage(new Overlay((GtkOverlay*)(o)));

}


/* The implementation: */

Overlay::Overlay(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

Overlay::Overlay(GtkOverlay* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


Overlay::Overlay(Overlay&& src) noexcept
: Gtk::Widget(std::move(src))
{}

Overlay& Overlay::operator=(Overlay&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  return *this;
}

Overlay::~Overlay() noexcept
{
  destroy_();
}

Overlay::CppClassType Overlay::overlay_class_; // initialize static member

GType Overlay::get_type()
{
  return overlay_class_.init().get_type();
}


GType Overlay::get_base_type()
{
  return gtk_overlay_get_type();
}


Overlay::Overlay()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(overlay_class_.init()))
{
  

}

void Overlay::add_overlay(Gtk::Widget& widget)
{
  gtk_overlay_add_overlay(gobj(), (widget).gobj());
}

void Overlay::remove_overlay(Gtk::Widget& widget)
{
  gtk_overlay_remove_overlay(gobj(), (widget).gobj());
}

void Overlay::set_child(Widget& child)
{
  gtk_overlay_set_child(gobj(), (child).gobj());
}

Widget* Overlay::get_child()
{
  return Glib::wrap(gtk_overlay_get_child(gobj()));
}

const Widget* Overlay::get_child() const
{
  return const_cast<Overlay*>(this)->get_child();
}

bool Overlay::get_measure_overlay(Widget& widget) const
{
  return gtk_overlay_get_measure_overlay(const_cast<GtkOverlay*>(gobj()), (widget).gobj());
}

void Overlay::set_measure_overlay(Widget& widget, bool measure)
{
  gtk_overlay_set_measure_overlay(gobj(), (widget).gobj(), static_cast<int>(measure));
}

bool Overlay::get_clip_overlay(const Widget& widget) const
{
  return gtk_overlay_get_clip_overlay(const_cast<GtkOverlay*>(gobj()), const_cast<GtkWidget*>((widget).gobj()));
}

void Overlay::set_clip_overlay(const Widget& widget, bool clip_overlay)
{
  gtk_overlay_set_clip_overlay(gobj(), const_cast<GtkWidget*>((widget).gobj()), static_cast<int>(clip_overlay));
}


Glib::SignalProxy<bool(Gtk::Widget*, Gdk::Rectangle&)> Overlay::signal_get_child_position()
{
  return Glib::SignalProxy<bool(Gtk::Widget*, Gdk::Rectangle&) >(this, &Overlay_signal_get_child_position_info);
}


Glib::PropertyProxy< Widget* > Overlay::property_child() 
{
  return Glib::PropertyProxy< Widget* >(this, "child");
}

Glib::PropertyProxy_ReadOnly< Widget* > Overlay::property_child() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "child");
}


} // namespace Gtk


