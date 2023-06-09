// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/listview.h>
#include <gtkmm/private/listview_p.h>


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


static void ListView_signal_activate_callback(GtkListView* self, guint p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(guint)>;

  auto obj = dynamic_cast<ListView*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo ListView_signal_activate_info =
{
  "activate",
  (GCallback) &ListView_signal_activate_callback,
  (GCallback) &ListView_signal_activate_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::ListView* wrap(GtkListView* object, bool take_copy)
{
  return dynamic_cast<Gtk::ListView *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ListView_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ListView_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_list_view_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void ListView_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ListView_Class::wrap_new(GObject* o)
{
  return manage(new ListView((GtkListView*)(o)));

}


/* The implementation: */

ListView::ListView(const Glib::ConstructParams& construct_params)
:
  ListBase(construct_params)
{
  }

ListView::ListView(GtkListView* castitem)
:
  ListBase((GtkListBase*)(castitem))
{
  }


ListView::ListView(ListView&& src) noexcept
: ListBase(std::move(src))
{}

ListView& ListView::operator=(ListView&& src) noexcept
{
  ListBase::operator=(std::move(src));
  return *this;
}

ListView::~ListView() noexcept
{
  destroy_();
}

ListView::CppClassType ListView::listview_class_; // initialize static member

GType ListView::get_type()
{
  return listview_class_.init().get_type();
}


GType ListView::get_base_type()
{
  return gtk_list_view_get_type();
}


ListView::ListView(const Glib::RefPtr<SelectionModel>& model, const Glib::RefPtr<ListItemFactory>& factory)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  ListBase(Glib::ConstructParams(listview_class_.init(), "model", Glib::unwrap(model), "factory", Glib::unwrap(factory), nullptr))
{
  

}

Glib::RefPtr<SelectionModel> ListView::get_model()
{
  auto retvalue = Glib::wrap(gtk_list_view_get_model(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const SelectionModel> ListView::get_model() const
{
  return const_cast<ListView*>(this)->get_model();
}

void ListView::set_model(const Glib::RefPtr<SelectionModel>& model)
{
  gtk_list_view_set_model(gobj(), Glib::unwrap(model));
}

void ListView::set_factory(const Glib::RefPtr<ListItemFactory>& factory)
{
  gtk_list_view_set_factory(gobj(), Glib::unwrap(factory));
}

Glib::RefPtr<ListItemFactory> ListView::get_factory()
{
  auto retvalue = Glib::wrap(gtk_list_view_get_factory(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const ListItemFactory> ListView::get_factory() const
{
  return const_cast<ListView*>(this)->get_factory();
}

void ListView::set_show_separators(bool show_separators)
{
  gtk_list_view_set_show_separators(gobj(), static_cast<int>(show_separators));
}

bool ListView::get_show_separators() const
{
  return gtk_list_view_get_show_separators(const_cast<GtkListView*>(gobj()));
}

void ListView::set_single_click_activate(bool single_click_activate)
{
  gtk_list_view_set_single_click_activate(gobj(), static_cast<int>(single_click_activate));
}

bool ListView::get_single_click_activate() const
{
  return gtk_list_view_get_single_click_activate(const_cast<GtkListView*>(gobj()));
}

void ListView::set_enable_rubberband(bool enable_rubberband)
{
  gtk_list_view_set_enable_rubberband(gobj(), static_cast<int>(enable_rubberband));
}

bool ListView::get_enable_rubberband() const
{
  return gtk_list_view_get_enable_rubberband(const_cast<GtkListView*>(gobj()));
}


Glib::SignalProxy<void(guint)> ListView::signal_activate()
{
  return Glib::SignalProxy<void(guint) >(this, &ListView_signal_activate_info);
}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<ListItemFactory>>::value,
  "Type Glib::RefPtr<ListItemFactory> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<ListItemFactory> > ListView::property_factory() 
{
  return Glib::PropertyProxy< Glib::RefPtr<ListItemFactory> >(this, "factory");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ListItemFactory> > ListView::property_factory() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ListItemFactory> >(this, "factory");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<SelectionModel>>::value,
  "Type Glib::RefPtr<SelectionModel> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<SelectionModel> > ListView::property_model() 
{
  return Glib::PropertyProxy< Glib::RefPtr<SelectionModel> >(this, "model");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<SelectionModel> > ListView::property_model() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<SelectionModel> >(this, "model");
}

Glib::PropertyProxy< bool > ListView::property_show_separators() 
{
  return Glib::PropertyProxy< bool >(this, "show-separators");
}

Glib::PropertyProxy_ReadOnly< bool > ListView::property_show_separators() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-separators");
}

Glib::PropertyProxy< bool > ListView::property_single_click_activate() 
{
  return Glib::PropertyProxy< bool >(this, "single-click-activate");
}

Glib::PropertyProxy_ReadOnly< bool > ListView::property_single_click_activate() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "single-click-activate");
}

Glib::PropertyProxy< bool > ListView::property_enable_rubberband() 
{
  return Glib::PropertyProxy< bool >(this, "enable-rubberband");
}

Glib::PropertyProxy_ReadOnly< bool > ListView::property_enable_rubberband() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "enable-rubberband");
}


} // namespace Gtk


