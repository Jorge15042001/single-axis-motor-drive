// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/calendar.h>
#include <gtkmm/private/calendar_p.h>

#include <gtk/gtk.h>

/*
 * Copyright 1998-2002 The gtkmm Development Team
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

namespace
{


static const Glib::SignalProxyInfo Calendar_signal_day_selected_info =
{
  "day_selected",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Calendar_signal_prev_month_info =
{
  "prev_month",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Calendar_signal_next_month_info =
{
  "next_month",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Calendar_signal_prev_year_info =
{
  "prev_year",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Calendar_signal_next_year_info =
{
  "next_year",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::Calendar* wrap(GtkCalendar* object, bool take_copy)
{
  return dynamic_cast<Gtk::Calendar *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Calendar_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Calendar_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_calendar_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Calendar_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Calendar_Class::wrap_new(GObject* o)
{
  return manage(new Calendar((GtkCalendar*)(o)));

}


/* The implementation: */

Calendar::Calendar(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

Calendar::Calendar(GtkCalendar* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


Calendar::Calendar(Calendar&& src) noexcept
: Gtk::Widget(std::move(src))
{}

Calendar& Calendar::operator=(Calendar&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  return *this;
}

Calendar::~Calendar() noexcept
{
  destroy_();
}

Calendar::CppClassType Calendar::calendar_class_; // initialize static member

GType Calendar::get_type()
{
  return calendar_class_.init().get_type();
}


GType Calendar::get_base_type()
{
  return gtk_calendar_get_type();
}


Calendar::Calendar()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(calendar_class_.init()))
{
  

}

void Calendar::select_day(const Glib::DateTime& day)
{
  gtk_calendar_select_day(gobj(), const_cast<GDateTime*>(day.gobj()));
}

void Calendar::mark_day(guint day)
{
  gtk_calendar_mark_day(gobj(), day);
}

void Calendar::unmark_day(guint day)
{
  gtk_calendar_unmark_day(gobj(), day);
}

void Calendar::clear_marks()
{
  gtk_calendar_clear_marks(gobj());
}

void Calendar::set_show_week_numbers(bool value)
{
  gtk_calendar_set_show_week_numbers(gobj(), static_cast<int>(value));
}

bool Calendar::get_show_week_numbers() const
{
  return gtk_calendar_get_show_week_numbers(const_cast<GtkCalendar*>(gobj()));
}

void Calendar::set_show_heading(bool value)
{
  gtk_calendar_set_show_heading(gobj(), static_cast<int>(value));
}

bool Calendar::get_show_heading() const
{
  return gtk_calendar_get_show_heading(const_cast<GtkCalendar*>(gobj()));
}

void Calendar::set_show_day_names(bool value)
{
  gtk_calendar_set_show_day_names(gobj(), static_cast<int>(value));
}

bool Calendar::get_show_day_names() const
{
  return gtk_calendar_get_show_day_names(const_cast<GtkCalendar*>(gobj()));
}

Glib::DateTime Calendar::get_date() const
{
  return Glib::wrap(gtk_calendar_get_date(const_cast<GtkCalendar*>(gobj())));
}

bool Calendar::get_day_is_marked(guint day) const
{
  return gtk_calendar_get_day_is_marked(const_cast<GtkCalendar*>(gobj()), day);
}


Glib::SignalProxy<void()> Calendar::signal_day_selected()
{
  return Glib::SignalProxy<void() >(this, &Calendar_signal_day_selected_info);
}


Glib::SignalProxy<void()> Calendar::signal_prev_month()
{
  return Glib::SignalProxy<void() >(this, &Calendar_signal_prev_month_info);
}


Glib::SignalProxy<void()> Calendar::signal_next_month()
{
  return Glib::SignalProxy<void() >(this, &Calendar_signal_next_month_info);
}


Glib::SignalProxy<void()> Calendar::signal_prev_year()
{
  return Glib::SignalProxy<void() >(this, &Calendar_signal_prev_year_info);
}


Glib::SignalProxy<void()> Calendar::signal_next_year()
{
  return Glib::SignalProxy<void() >(this, &Calendar_signal_next_year_info);
}


Glib::PropertyProxy< int > Calendar::property_year() 
{
  return Glib::PropertyProxy< int >(this, "year");
}

Glib::PropertyProxy_ReadOnly< int > Calendar::property_year() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "year");
}

Glib::PropertyProxy< int > Calendar::property_month() 
{
  return Glib::PropertyProxy< int >(this, "month");
}

Glib::PropertyProxy_ReadOnly< int > Calendar::property_month() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "month");
}

Glib::PropertyProxy< int > Calendar::property_day() 
{
  return Glib::PropertyProxy< int >(this, "day");
}

Glib::PropertyProxy_ReadOnly< int > Calendar::property_day() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "day");
}

Glib::PropertyProxy< bool > Calendar::property_show_heading() 
{
  return Glib::PropertyProxy< bool >(this, "show-heading");
}

Glib::PropertyProxy_ReadOnly< bool > Calendar::property_show_heading() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-heading");
}

Glib::PropertyProxy< bool > Calendar::property_show_day_names() 
{
  return Glib::PropertyProxy< bool >(this, "show-day-names");
}

Glib::PropertyProxy_ReadOnly< bool > Calendar::property_show_day_names() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-day-names");
}

Glib::PropertyProxy< bool > Calendar::property_show_week_numbers() 
{
  return Glib::PropertyProxy< bool >(this, "show-week-numbers");
}

Glib::PropertyProxy_ReadOnly< bool > Calendar::property_show_week_numbers() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-week-numbers");
}


} // namespace Gtk


