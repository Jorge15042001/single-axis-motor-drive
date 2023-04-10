// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/assistant.h>
#include <gtkmm/private/assistant_p.h>


/*
 * Copyright 2006 The gtkmm Development Team
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

static int SignalProxy_SlotForwardPage_gtk_callback(int current_page, gpointer data)
{
  auto the_slot = static_cast<Gtk::Assistant::SlotForwardPage*>(data);

  try
  {
    return (*the_slot)(current_page);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
    return int();
  }
}

static void SignalProxy_SlotForwardPage_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::Assistant::SlotForwardPage*>(data);
}


namespace Gtk
{

// use-header-bar is construct-only. It must be set in the constructor,
// if you don't want the default value.
Assistant::Assistant(bool use_header_bar)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Window(Glib::ConstructParams(assistant_class_.init(), "use-header-bar",static_cast<int>(use_header_bar), nullptr))
{
}

void Assistant::set_forward_page_func(const SlotForwardPage& slot)
{
  // Create a copy of the slot object. A pointer to this will be passed
  // through the callback's data parameter.  It will be deleted
  // when SignalProxy_SlotForwardPage_gtk_callback_destroy() is called.
  auto slot_copy = new SlotForwardPage(slot);

  gtk_assistant_set_forward_page_func(gobj(),
      &SignalProxy_SlotForwardPage_gtk_callback, slot_copy,
      &SignalProxy_SlotForwardPage_gtk_callback_destroy);
}


} // namespace Gtk


namespace
{


static void Assistant_signal_prepare_callback(GtkAssistant* self, GtkWidget* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(Gtk::Widget*)>;

  auto obj = dynamic_cast<Assistant*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Assistant_signal_prepare_info =
{
  "prepare",
  (GCallback) &Assistant_signal_prepare_callback,
  (GCallback) &Assistant_signal_prepare_callback
};


static const Glib::SignalProxyInfo Assistant_signal_apply_info =
{
  "apply",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Assistant_signal_close_info =
{
  "close",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Assistant_signal_cancel_info =
{
  "cancel",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::Assistant* wrap(GtkAssistant* object, bool take_copy)
{
  return dynamic_cast<Gtk::Assistant *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Assistant_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Assistant_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_assistant_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Assistant_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Assistant_Class::wrap_new(GObject* o)
{
  return new Assistant((GtkAssistant*)(o)); //top-level windows can not be manage()ed.

}


/* The implementation: */

Assistant::Assistant(const Glib::ConstructParams& construct_params)
:
  Gtk::Window(construct_params)
{
  }

Assistant::Assistant(GtkAssistant* castitem)
:
  Gtk::Window((GtkWindow*)(castitem))
{
  }


Assistant::Assistant(Assistant&& src) noexcept
: Gtk::Window(std::move(src))
{}

Assistant& Assistant::operator=(Assistant&& src) noexcept
{
  Gtk::Window::operator=(std::move(src));
  return *this;
}

Assistant::~Assistant() noexcept
{
  destroy_();
}

Assistant::CppClassType Assistant::assistant_class_; // initialize static member

GType Assistant::get_type()
{
  return assistant_class_.init().get_type();
}


GType Assistant::get_base_type()
{
  return gtk_assistant_get_type();
}


Assistant::Assistant()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Window(Glib::ConstructParams(assistant_class_.init()))
{
  

}

void Assistant::next_page()
{
  gtk_assistant_next_page(gobj());
}

void Assistant::previous_page()
{
  gtk_assistant_previous_page(gobj());
}

int Assistant::get_current_page() const
{
  return gtk_assistant_get_current_page(const_cast<GtkAssistant*>(gobj()));
}

void Assistant::set_current_page(int page_num)
{
  gtk_assistant_set_current_page(gobj(), page_num);
}

int Assistant::get_n_pages() const
{
  return gtk_assistant_get_n_pages(const_cast<GtkAssistant*>(gobj()));
}

Widget* Assistant::get_nth_page(int page_num)
{
  return Glib::wrap(gtk_assistant_get_nth_page(gobj(), page_num));
}

const Widget* Assistant::get_nth_page(int page_num) const
{
  return const_cast<Assistant*>(this)->get_nth_page(page_num);
}

int Assistant::prepend_page(Widget& page)
{
  return gtk_assistant_prepend_page(gobj(), (page).gobj());
}

int Assistant::append_page(Widget& page)
{
  return gtk_assistant_append_page(gobj(), (page).gobj());
}

int Assistant::insert_page(Widget& page, int position)
{
  return gtk_assistant_insert_page(gobj(), (page).gobj(), position);
}

void Assistant::remove_page(int page_num)
{
  gtk_assistant_remove_page(gobj(), page_num);
}

void Assistant::set_page_type(const Widget& page, AssistantPage::Type type)
{
  gtk_assistant_set_page_type(gobj(), const_cast<GtkWidget*>((page).gobj()), static_cast<GtkAssistantPageType>(type));
}

AssistantPage::Type Assistant::get_page_type(const Widget& page) const
{
  return static_cast<AssistantPage::Type>(gtk_assistant_get_page_type(const_cast<GtkAssistant*>(gobj()), const_cast<GtkWidget*>((page).gobj())));
}

void Assistant::set_page_title(const Widget& page, const Glib::ustring& title)
{
  gtk_assistant_set_page_title(gobj(), const_cast<GtkWidget*>((page).gobj()), title.c_str());
}

Glib::ustring Assistant::get_page_title(const Widget& page) const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_assistant_get_page_title(const_cast<GtkAssistant*>(gobj()), const_cast<GtkWidget*>((page).gobj())));
}

void Assistant::set_page_complete(const Widget& page, bool complete)
{
  gtk_assistant_set_page_complete(gobj(), const_cast<GtkWidget*>((page).gobj()), static_cast<int>(complete));
}

bool Assistant::get_page_complete(const Widget& page) const
{
  return gtk_assistant_get_page_complete(const_cast<GtkAssistant*>(gobj()), const_cast<GtkWidget*>((page).gobj()));
}

void Assistant::add_action_widget(Widget& child)
{
  gtk_assistant_add_action_widget(gobj(), (child).gobj());
}

void Assistant::remove_action_widget(Widget& child)
{
  gtk_assistant_remove_action_widget(gobj(), (child).gobj());
}

void Assistant::update_buttons_state()
{
  gtk_assistant_update_buttons_state(gobj());
}

void Assistant::commit()
{
  gtk_assistant_commit(gobj());
}

Glib::RefPtr<AssistantPage> Assistant::get_page(Widget& child)
{
  auto retvalue = Glib::wrap(gtk_assistant_get_page(gobj(), (child).gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const AssistantPage> Assistant::get_page(const Widget& child) const
{
  auto retvalue = Glib::wrap(gtk_assistant_get_page(const_cast<GtkAssistant*>(gobj()), const_cast<GtkWidget*>((child).gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<Gio::ListModel> Assistant::get_pages()
{
  return Glib::wrap(gtk_assistant_get_pages(gobj()));
}

Glib::RefPtr<const Gio::ListModel> Assistant::get_pages() const
{
  return const_cast<Assistant*>(this)->get_pages();
}


Glib::SignalProxy<void(Gtk::Widget*)> Assistant::signal_prepare()
{
  return Glib::SignalProxy<void(Gtk::Widget*) >(this, &Assistant_signal_prepare_info);
}


Glib::SignalProxy<void()> Assistant::signal_apply()
{
  return Glib::SignalProxy<void() >(this, &Assistant_signal_apply_info);
}


Glib::SignalProxy<void()> Assistant::signal_close()
{
  return Glib::SignalProxy<void() >(this, &Assistant_signal_close_info);
}


Glib::SignalProxy<void()> Assistant::signal_cancel()
{
  return Glib::SignalProxy<void() >(this, &Assistant_signal_cancel_info);
}


Glib::PropertyProxy_ReadOnly< bool > Assistant::property_use_header_bar() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "use-header-bar");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Gio::ListModel>>::value,
  "Type Glib::RefPtr<Gio::ListModel> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::ListModel> > Assistant::property_pages() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::ListModel> >(this, "pages");
}


} // namespace Gtk


