// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/droptarget.h>
#include <gtkmm/private/droptarget_p.h>


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

#include <glibmm/vectorutils.h>
#include <gtk/gtk.h>

namespace Gtk
{
void DropTarget::set_gtypes(const std::vector<GType>& types)
{
  gtk_drop_target_set_gtypes(gobj(), const_cast<GType*>(types.data()), types.size());
}

std::vector<GType> DropTarget::get_gtypes() const
{
  gsize n_gtypes = 0;
  const GType* gtype_array = gtk_drop_target_get_gtypes(const_cast<GtkDropTarget*>(gobj()), &n_gtypes);
  return Glib::ArrayHandler<GType>::array_to_vector(gtype_array, n_gtypes, Glib::OWNERSHIP_NONE);
}

Glib::ValueBase DropTarget::get_value() const
{
  const GValue* gvalue = gtk_drop_target_get_value(const_cast<GtkDropTarget*>(gobj()));

  Glib::ValueBase retvalue;
  if (gvalue)
    retvalue.init(gvalue);
  return retvalue;
}

} // namesoace Gtk

namespace
{


static gboolean DropTarget_signal_accept_callback(GtkDropTarget* self, GdkDrop* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<bool(const Glib::RefPtr<Gdk::Drop>&)>;

  auto obj = dynamic_cast<DropTarget*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static gboolean DropTarget_signal_accept_notify_callback(GtkDropTarget* self, GdkDrop* p0, void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(const Glib::RefPtr<Gdk::Drop>&)>;

  auto obj = dynamic_cast<DropTarget*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo DropTarget_signal_accept_info =
{
  "accept",
  (GCallback) &DropTarget_signal_accept_callback,
  (GCallback) &DropTarget_signal_accept_notify_callback
};


static GdkDragAction DropTarget_signal_enter_callback(GtkDropTarget* self, gdouble p0,gdouble p1,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<Gdk::DragAction(double, double)>;

  auto obj = dynamic_cast<DropTarget*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<GdkDragAction>((*static_cast<SlotType*>(slot))(p0
, p1
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = GdkDragAction;
  return RType();
}

static GdkDragAction DropTarget_signal_enter_notify_callback(GtkDropTarget* self, gdouble p0,gdouble p1, void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(double, double)>;

  auto obj = dynamic_cast<DropTarget*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

  using RType = GdkDragAction;
  return RType();
}

static const Glib::SignalProxyInfo DropTarget_signal_enter_info =
{
  "enter",
  (GCallback) &DropTarget_signal_enter_callback,
  (GCallback) &DropTarget_signal_enter_notify_callback
};


static GdkDragAction DropTarget_signal_motion_callback(GtkDropTarget* self, gdouble p0,gdouble p1,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<Gdk::DragAction(double, double)>;

  auto obj = dynamic_cast<DropTarget*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<GdkDragAction>((*static_cast<SlotType*>(slot))(p0
, p1
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = GdkDragAction;
  return RType();
}

static GdkDragAction DropTarget_signal_motion_notify_callback(GtkDropTarget* self, gdouble p0,gdouble p1, void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(double, double)>;

  auto obj = dynamic_cast<DropTarget*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

  using RType = GdkDragAction;
  return RType();
}

static const Glib::SignalProxyInfo DropTarget_signal_motion_info =
{
  "motion",
  (GCallback) &DropTarget_signal_motion_callback,
  (GCallback) &DropTarget_signal_motion_notify_callback
};


static const Glib::SignalProxyInfo DropTarget_signal_leave_info =
{
  "leave",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static gboolean DropTarget_signal_drop_callback(GtkDropTarget* self, const GValue* p0,gdouble p1,gdouble p2,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<bool(const Glib::ValueBase&, double, double)>;

  auto obj = dynamic_cast<DropTarget*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(*reinterpret_cast<const Glib::ValueBase*>(p0)
, p1
, p2
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

static gboolean DropTarget_signal_drop_notify_callback(GtkDropTarget* self, const GValue* p0,gdouble p1,gdouble p2, void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(const Glib::ValueBase&, double, double)>;

  auto obj = dynamic_cast<DropTarget*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(*reinterpret_cast<const Glib::ValueBase*>(p0)
, p1
, p2
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

static const Glib::SignalProxyInfo DropTarget_signal_drop_info =
{
  "drop",
  (GCallback) &DropTarget_signal_drop_callback,
  (GCallback) &DropTarget_signal_drop_notify_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::DropTarget> wrap(GtkDropTarget* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::DropTarget>( dynamic_cast<Gtk::DropTarget*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& DropTarget_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &DropTarget_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_drop_target_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void DropTarget_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* DropTarget_Class::wrap_new(GObject* object)
{
  return new DropTarget((GtkDropTarget*)object);
}


/* The implementation: */

GtkDropTarget* DropTarget::gobj_copy()
{
  reference();
  return gobj();
}

DropTarget::DropTarget(const Glib::ConstructParams& construct_params)
:
  EventController(construct_params)
{

}

DropTarget::DropTarget(GtkDropTarget* castitem)
:
  EventController((GtkEventController*)(castitem))
{}


DropTarget::DropTarget(DropTarget&& src) noexcept
: EventController(std::move(src))
{}

DropTarget& DropTarget::operator=(DropTarget&& src) noexcept
{
  EventController::operator=(std::move(src));
  return *this;
}


DropTarget::~DropTarget() noexcept
{}


DropTarget::CppClassType DropTarget::droptarget_class_; // initialize static member

GType DropTarget::get_type()
{
  return droptarget_class_.init().get_type();
}


GType DropTarget::get_base_type()
{
  return gtk_drop_target_get_type();
}


Glib::RefPtr<DropTarget> DropTarget::create(GType type, Gdk::DragAction actions)
{
  return Glib::wrap(gtk_drop_target_new(type, static_cast<GdkDragAction>(actions)));
}

Glib::RefPtr<Gdk::ContentFormats> DropTarget::get_formats()
{
  auto retvalue = Glib::wrap(gtk_drop_target_get_formats(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::ContentFormats> DropTarget::get_formats() const
{
  return const_cast<DropTarget*>(this)->get_formats();
}

void DropTarget::set_actions(Gdk::DragAction actions)
{
  gtk_drop_target_set_actions(gobj(), static_cast<GdkDragAction>(actions));
}

Gdk::DragAction DropTarget::get_actions() const
{
  return static_cast<Gdk::DragAction>(gtk_drop_target_get_actions(const_cast<GtkDropTarget*>(gobj())));
}

void DropTarget::set_preload(bool preload)
{
  gtk_drop_target_set_preload(gobj(), static_cast<int>(preload));
}

bool DropTarget::get_preload() const
{
  return gtk_drop_target_get_preload(const_cast<GtkDropTarget*>(gobj()));
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::RefPtr<Gdk::Drop> DropTarget::get_drop()
{
  auto retvalue = Glib::wrap(gtk_drop_target_get_drop(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::RefPtr<const Gdk::Drop> DropTarget::get_drop() const
{
  return const_cast<DropTarget*>(this)->get_drop();
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

Glib::RefPtr<Gdk::Drop> DropTarget::get_current_drop()
{
  auto retvalue = Glib::wrap(gtk_drop_target_get_current_drop(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Drop> DropTarget::get_current_drop() const
{
  return const_cast<DropTarget*>(this)->get_current_drop();
}

void DropTarget::reject()
{
  gtk_drop_target_reject(gobj());
}


Glib::SignalProxy<bool(const Glib::RefPtr<Gdk::Drop>&)> DropTarget::signal_accept()
{
  return Glib::SignalProxy<bool(const Glib::RefPtr<Gdk::Drop>&) >(this, &DropTarget_signal_accept_info);
}


Glib::SignalProxy<Gdk::DragAction(double, double)> DropTarget::signal_enter()
{
  return Glib::SignalProxy<Gdk::DragAction(double, double) >(this, &DropTarget_signal_enter_info);
}


Glib::SignalProxy<Gdk::DragAction(double, double)> DropTarget::signal_motion()
{
  return Glib::SignalProxy<Gdk::DragAction(double, double) >(this, &DropTarget_signal_motion_info);
}


Glib::SignalProxy<void()> DropTarget::signal_leave()
{
  return Glib::SignalProxy<void() >(this, &DropTarget_signal_leave_info);
}


Glib::SignalProxy<bool(const Glib::ValueBase&, double, double)> DropTarget::signal_drop()
{
  return Glib::SignalProxy<bool(const Glib::ValueBase&, double, double) >(this, &DropTarget_signal_drop_info);
}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Gdk::DragAction>::value,
  "Type Gdk::DragAction cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Gdk::DragAction > DropTarget::property_actions() 
{
  return Glib::PropertyProxy< Gdk::DragAction >(this, "actions");
}

Glib::PropertyProxy_ReadOnly< Gdk::DragAction > DropTarget::property_actions() const
{
  return Glib::PropertyProxy_ReadOnly< Gdk::DragAction >(this, "actions");
}

#ifndef GTKMM_DISABLE_DEPRECATED

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Gdk::Drop>>::value,
  "Type Glib::RefPtr<Gdk::Drop> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Drop> > DropTarget::property_drop() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Drop> >(this, "drop");
}
#endif // GTKMM_DISABLE_DEPRECATED


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Gdk::Drop>>::value,
  "Type Glib::RefPtr<Gdk::Drop> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Drop> > DropTarget::property_current_drop() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Drop> >(this, "current-drop");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Gdk::ContentFormats>>::value,
  "Type Glib::RefPtr<Gdk::ContentFormats> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::ContentFormats> > DropTarget::property_formats() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::ContentFormats> >(this, "formats");
}

Glib::PropertyProxy< bool > DropTarget::property_preload() 
{
  return Glib::PropertyProxy< bool >(this, "preload");
}

Glib::PropertyProxy_ReadOnly< bool > DropTarget::property_preload() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "preload");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<GValue*>::value,
  "Type GValue* cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< GValue* > DropTarget::property_value() const
{
  return Glib::PropertyProxy_ReadOnly< GValue* >(this, "value");
}


} // namespace Gtk

