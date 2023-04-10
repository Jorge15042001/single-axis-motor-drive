// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/columnview.h>
#include <gtkmm/private/columnview_p.h>


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


static void ColumnView_signal_activate_callback(GtkColumnView* self, guint p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(guint)>;

  auto obj = dynamic_cast<ColumnView*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo ColumnView_signal_activate_info =
{
  "activate",
  (GCallback) &ColumnView_signal_activate_callback,
  (GCallback) &ColumnView_signal_activate_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::ColumnView* wrap(GtkColumnView* object, bool take_copy)
{
  return dynamic_cast<Gtk::ColumnView *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ColumnView_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ColumnView_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_column_view_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Scrollable::add_interface(get_type());

  }

  return *this;
}


void ColumnView_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ColumnView_Class::wrap_new(GObject* o)
{
  return manage(new ColumnView((GtkColumnView*)(o)));

}


/* The implementation: */

ColumnView::ColumnView(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

ColumnView::ColumnView(GtkColumnView* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


ColumnView::ColumnView(ColumnView&& src) noexcept
: Gtk::Widget(std::move(src))
  , Scrollable(std::move(src))
{}

ColumnView& ColumnView::operator=(ColumnView&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  Scrollable::operator=(std::move(src));
  return *this;
}

ColumnView::~ColumnView() noexcept
{
  destroy_();
}

ColumnView::CppClassType ColumnView::columnview_class_; // initialize static member

GType ColumnView::get_type()
{
  return columnview_class_.init().get_type();
}


GType ColumnView::get_base_type()
{
  return gtk_column_view_get_type();
}


ColumnView::ColumnView(const Glib::RefPtr<SelectionModel>& model)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(columnview_class_.init(), "model", Glib::unwrap(model), nullptr))
{
  

}

Glib::RefPtr<Gio::ListModel> ColumnView::get_columns()
{
  auto retvalue = Glib::wrap(gtk_column_view_get_columns(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gio::ListModel> ColumnView::get_columns() const
{
  return const_cast<ColumnView*>(this)->get_columns();
}

void ColumnView::append_column(const Glib::RefPtr<ColumnViewColumn>& column)
{
  gtk_column_view_append_column(gobj(), Glib::unwrap(column));
}

void ColumnView::remove_column(const Glib::RefPtr<ColumnViewColumn>& column)
{
  gtk_column_view_remove_column(gobj(), Glib::unwrap(column));
}

void ColumnView::insert_column(guint position, const Glib::RefPtr<ColumnViewColumn>& column)
{
  gtk_column_view_insert_column(gobj(), position, Glib::unwrap(column));
}

Glib::RefPtr<SelectionModel> ColumnView::get_model()
{
  auto retvalue = Glib::wrap(gtk_column_view_get_model(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const SelectionModel> ColumnView::get_model() const
{
  return const_cast<ColumnView*>(this)->get_model();
}

void ColumnView::set_model(const Glib::RefPtr<SelectionModel>& model)
{
  gtk_column_view_set_model(gobj(), Glib::unwrap(model));
}

bool ColumnView::get_show_row_separators() const
{
  return gtk_column_view_get_show_row_separators(const_cast<GtkColumnView*>(gobj()));
}

void ColumnView::set_show_row_separators(bool show_separators)
{
  gtk_column_view_set_show_row_separators(gobj(), static_cast<int>(show_separators));
}

bool ColumnView::get_show_column_separators() const
{
  return gtk_column_view_get_show_column_separators(const_cast<GtkColumnView*>(gobj()));
}

void ColumnView::set_show_column_separators(bool show_separators)
{
  gtk_column_view_set_show_column_separators(gobj(), static_cast<int>(show_separators));
}

Glib::RefPtr<Sorter> ColumnView::get_sorter()
{
  auto retvalue = Glib::wrap(gtk_column_view_get_sorter(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Sorter> ColumnView::get_sorter() const
{
  return const_cast<ColumnView*>(this)->get_sorter();
}

void ColumnView::sort_by_column(const Glib::RefPtr<ColumnViewColumn>& column, SortType direction)
{
  gtk_column_view_sort_by_column(gobj(), Glib::unwrap(column), static_cast<GtkSortType>(direction));
}

void ColumnView::set_single_click_activate(bool single_click_activate)
{
  gtk_column_view_set_single_click_activate(gobj(), static_cast<int>(single_click_activate));
}

bool ColumnView::get_single_click_activate() const
{
  return gtk_column_view_get_single_click_activate(const_cast<GtkColumnView*>(gobj()));
}

void ColumnView::set_reorderable(bool reorderable)
{
  gtk_column_view_set_reorderable(gobj(), static_cast<int>(reorderable));
}

bool ColumnView::get_reorderable() const
{
  return gtk_column_view_get_reorderable(const_cast<GtkColumnView*>(gobj()));
}

void ColumnView::set_enable_rubberband(bool enable_rubberband)
{
  gtk_column_view_set_enable_rubberband(gobj(), static_cast<int>(enable_rubberband));
}

bool ColumnView::get_enable_rubberband() const
{
  return gtk_column_view_get_enable_rubberband(const_cast<GtkColumnView*>(gobj()));
}


Glib::SignalProxy<void(guint)> ColumnView::signal_activate()
{
  return Glib::SignalProxy<void(guint) >(this, &ColumnView_signal_activate_info);
}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Gio::ListModel>>::value,
  "Type Glib::RefPtr<Gio::ListModel> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::ListModel> > ColumnView::property_columns() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::ListModel> >(this, "columns");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<SelectionModel>>::value,
  "Type Glib::RefPtr<SelectionModel> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<SelectionModel> > ColumnView::property_model() 
{
  return Glib::PropertyProxy< Glib::RefPtr<SelectionModel> >(this, "model");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<SelectionModel> > ColumnView::property_model() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<SelectionModel> >(this, "model");
}

Glib::PropertyProxy< bool > ColumnView::property_show_row_separators() 
{
  return Glib::PropertyProxy< bool >(this, "show-row-separators");
}

Glib::PropertyProxy_ReadOnly< bool > ColumnView::property_show_row_separators() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-row-separators");
}

Glib::PropertyProxy< bool > ColumnView::property_show_column_separators() 
{
  return Glib::PropertyProxy< bool >(this, "show-column-separators");
}

Glib::PropertyProxy_ReadOnly< bool > ColumnView::property_show_column_separators() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-column-separators");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Sorter>>::value,
  "Type Glib::RefPtr<Sorter> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Sorter> > ColumnView::property_sorter() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Sorter> >(this, "sorter");
}

Glib::PropertyProxy< bool > ColumnView::property_single_click_activate() 
{
  return Glib::PropertyProxy< bool >(this, "single-click-activate");
}

Glib::PropertyProxy_ReadOnly< bool > ColumnView::property_single_click_activate() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "single-click-activate");
}

Glib::PropertyProxy< bool > ColumnView::property_reorderable() 
{
  return Glib::PropertyProxy< bool >(this, "reorderable");
}

Glib::PropertyProxy_ReadOnly< bool > ColumnView::property_reorderable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "reorderable");
}

Glib::PropertyProxy< bool > ColumnView::property_enable_rubberband() 
{
  return Glib::PropertyProxy< bool >(this, "enable-rubberband");
}

Glib::PropertyProxy_ReadOnly< bool > ColumnView::property_enable_rubberband() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "enable-rubberband");
}


} // namespace Gtk


