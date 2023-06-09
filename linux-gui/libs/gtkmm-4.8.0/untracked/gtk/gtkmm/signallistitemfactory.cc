// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/signallistitemfactory.h>
#include <gtkmm/private/signallistitemfactory_p.h>


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

#include <gtk/gtk.h>

namespace
{


static void SignalListItemFactory_signal_setup_callback(GtkSignalListItemFactory* self, GtkListItem* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(const Glib::RefPtr<ListItem>&)>;

  auto obj = dynamic_cast<SignalListItemFactory*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo SignalListItemFactory_signal_setup_info =
{
  "setup",
  (GCallback) &SignalListItemFactory_signal_setup_callback,
  (GCallback) &SignalListItemFactory_signal_setup_callback
};


static void SignalListItemFactory_signal_bind_callback(GtkSignalListItemFactory* self, GtkListItem* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(const Glib::RefPtr<ListItem>&)>;

  auto obj = dynamic_cast<SignalListItemFactory*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo SignalListItemFactory_signal_bind_info =
{
  "bind",
  (GCallback) &SignalListItemFactory_signal_bind_callback,
  (GCallback) &SignalListItemFactory_signal_bind_callback
};


static void SignalListItemFactory_signal_unbind_callback(GtkSignalListItemFactory* self, GtkListItem* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(const Glib::RefPtr<ListItem>&)>;

  auto obj = dynamic_cast<SignalListItemFactory*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo SignalListItemFactory_signal_unbind_info =
{
  "unbind",
  (GCallback) &SignalListItemFactory_signal_unbind_callback,
  (GCallback) &SignalListItemFactory_signal_unbind_callback
};


static void SignalListItemFactory_signal_teardown_callback(GtkSignalListItemFactory* self, GtkListItem* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(const Glib::RefPtr<ListItem>&)>;

  auto obj = dynamic_cast<SignalListItemFactory*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo SignalListItemFactory_signal_teardown_info =
{
  "teardown",
  (GCallback) &SignalListItemFactory_signal_teardown_callback,
  (GCallback) &SignalListItemFactory_signal_teardown_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::SignalListItemFactory> wrap(GtkSignalListItemFactory* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::SignalListItemFactory>( dynamic_cast<Gtk::SignalListItemFactory*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& SignalListItemFactory_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SignalListItemFactory_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_signal_list_item_factory_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void SignalListItemFactory_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* SignalListItemFactory_Class::wrap_new(GObject* object)
{
  return new SignalListItemFactory((GtkSignalListItemFactory*)object);
}


/* The implementation: */

GtkSignalListItemFactory* SignalListItemFactory::gobj_copy()
{
  reference();
  return gobj();
}

SignalListItemFactory::SignalListItemFactory(const Glib::ConstructParams& construct_params)
:
  Gtk::ListItemFactory(construct_params)
{

}

SignalListItemFactory::SignalListItemFactory(GtkSignalListItemFactory* castitem)
:
  Gtk::ListItemFactory((GtkListItemFactory*)(castitem))
{}


SignalListItemFactory::SignalListItemFactory(SignalListItemFactory&& src) noexcept
: Gtk::ListItemFactory(std::move(src))
{}

SignalListItemFactory& SignalListItemFactory::operator=(SignalListItemFactory&& src) noexcept
{
  Gtk::ListItemFactory::operator=(std::move(src));
  return *this;
}


SignalListItemFactory::~SignalListItemFactory() noexcept
{}


SignalListItemFactory::CppClassType SignalListItemFactory::signallistitemfactory_class_; // initialize static member

GType SignalListItemFactory::get_type()
{
  return signallistitemfactory_class_.init().get_type();
}


GType SignalListItemFactory::get_base_type()
{
  return gtk_signal_list_item_factory_get_type();
}


SignalListItemFactory::SignalListItemFactory()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::ListItemFactory(Glib::ConstructParams(signallistitemfactory_class_.init()))
{
  

}

Glib::RefPtr<SignalListItemFactory> SignalListItemFactory::create()
{
  return Glib::make_refptr_for_instance<SignalListItemFactory>( new SignalListItemFactory() );
}


Glib::SignalProxy<void(const Glib::RefPtr<ListItem>&)> SignalListItemFactory::signal_setup()
{
  return Glib::SignalProxy<void(const Glib::RefPtr<ListItem>&) >(this, &SignalListItemFactory_signal_setup_info);
}


Glib::SignalProxy<void(const Glib::RefPtr<ListItem>&)> SignalListItemFactory::signal_bind()
{
  return Glib::SignalProxy<void(const Glib::RefPtr<ListItem>&) >(this, &SignalListItemFactory_signal_bind_info);
}


Glib::SignalProxy<void(const Glib::RefPtr<ListItem>&)> SignalListItemFactory::signal_unbind()
{
  return Glib::SignalProxy<void(const Glib::RefPtr<ListItem>&) >(this, &SignalListItemFactory_signal_unbind_info);
}


Glib::SignalProxy<void(const Glib::RefPtr<ListItem>&)> SignalListItemFactory::signal_teardown()
{
  return Glib::SignalProxy<void(const Glib::RefPtr<ListItem>&) >(this, &SignalListItemFactory_signal_teardown_info);
}


} // namespace Gtk


