// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/sortlistmodel.h>
#include <gtkmm/private/sortlistmodel_p.h>


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
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::SortListModel> wrap(GtkSortListModel* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::SortListModel>( dynamic_cast<Gtk::SortListModel*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& SortListModel_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SortListModel_Class::class_init_function;

    // Do not derive a GType, or use a derived class:
    gtype_ = gtk_sort_list_model_get_type();

  }

  return *this;
}


void SortListModel_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* SortListModel_Class::wrap_new(GObject* object)
{
  return new SortListModel((GtkSortListModel*)object);
}


/* The implementation: */

GtkSortListModel* SortListModel::gobj_copy()
{
  reference();
  return gobj();
}

SortListModel::SortListModel(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

SortListModel::SortListModel(GtkSortListModel* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


SortListModel::SortListModel(SortListModel&& src) noexcept
: Glib::Object(std::move(src))
  , Gio::ListModel(std::move(src))
{}

SortListModel& SortListModel::operator=(SortListModel&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  Gio::ListModel::operator=(std::move(src));
  return *this;
}


SortListModel::~SortListModel() noexcept
{}


SortListModel::CppClassType SortListModel::sortlistmodel_class_; // initialize static member

GType SortListModel::get_type()
{
  return sortlistmodel_class_.init().get_type();
}


GType SortListModel::get_base_type()
{
  return gtk_sort_list_model_get_type();
}


SortListModel::SortListModel(const Glib::RefPtr<Gio::ListModel>& model, const Glib::RefPtr<Sorter>& sorter)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(sortlistmodel_class_.init(), "model", Glib::unwrap(model), "sorter", Glib::unwrap(sorter), nullptr))
{
  

}

Glib::RefPtr<SortListModel> SortListModel::create(const Glib::RefPtr<Gio::ListModel>& model, const Glib::RefPtr<Sorter>& sorter)
{
  return Glib::make_refptr_for_instance<SortListModel>( new SortListModel(model, sorter) );
}

void SortListModel::set_sorter(const Glib::RefPtr<Sorter>& sorter)
{
  gtk_sort_list_model_set_sorter(gobj(), Glib::unwrap(sorter));
}

Glib::RefPtr<Sorter> SortListModel::get_sorter()
{
  auto retvalue = Glib::wrap(gtk_sort_list_model_get_sorter(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Sorter> SortListModel::get_sorter() const
{
  return const_cast<SortListModel*>(this)->get_sorter();
}

void SortListModel::set_model(const Glib::RefPtr<Gio::ListModel>& model)
{
  gtk_sort_list_model_set_model(gobj(), Glib::unwrap(model));
}

Glib::RefPtr<Gio::ListModel> SortListModel::get_model()
{
  auto retvalue = Glib::wrap(gtk_sort_list_model_get_model(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gio::ListModel> SortListModel::get_model() const
{
  return const_cast<SortListModel*>(this)->get_model();
}

void SortListModel::set_incremental(bool incremental)
{
  gtk_sort_list_model_set_incremental(gobj(), static_cast<int>(incremental));
}

bool SortListModel::get_incremental() const
{
  return gtk_sort_list_model_get_incremental(const_cast<GtkSortListModel*>(gobj()));
}

guint SortListModel::get_pending() const
{
  return gtk_sort_list_model_get_pending(const_cast<GtkSortListModel*>(gobj()));
}


Glib::PropertyProxy< bool > SortListModel::property_incremental() 
{
  return Glib::PropertyProxy< bool >(this, "incremental");
}

Glib::PropertyProxy_ReadOnly< bool > SortListModel::property_incremental() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "incremental");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<GType>::value,
  "Type GType cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< GType > SortListModel::property_item_type() const
{
  return Glib::PropertyProxy_ReadOnly< GType >(this, "item-type");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Gio::ListModel>>::value,
  "Type Glib::RefPtr<Gio::ListModel> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<Gio::ListModel> > SortListModel::property_model() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::ListModel> >(this, "model");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::ListModel> > SortListModel::property_model() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::ListModel> >(this, "model");
}

Glib::PropertyProxy_ReadOnly< unsigned int > SortListModel::property_n_items() const
{
  return Glib::PropertyProxy_ReadOnly< unsigned int >(this, "n-items");
}

Glib::PropertyProxy_ReadOnly< guint > SortListModel::property_pending() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "pending");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Sorter>>::value,
  "Type Glib::RefPtr<Sorter> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<Sorter> > SortListModel::property_sorter() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Sorter> >(this, "sorter");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Sorter> > SortListModel::property_sorter() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Sorter> >(this, "sorter");
}


} // namespace Gtk

