// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/slicelistmodel.h>
#include <gtkmm/private/slicelistmodel_p.h>


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

Glib::RefPtr<Gtk::SliceListModel> wrap(GtkSliceListModel* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::SliceListModel>( dynamic_cast<Gtk::SliceListModel*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& SliceListModel_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SliceListModel_Class::class_init_function;

    // Do not derive a GType, or use a derived class:
    gtype_ = gtk_slice_list_model_get_type();

  }

  return *this;
}


void SliceListModel_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* SliceListModel_Class::wrap_new(GObject* object)
{
  return new SliceListModel((GtkSliceListModel*)object);
}


/* The implementation: */

GtkSliceListModel* SliceListModel::gobj_copy()
{
  reference();
  return gobj();
}

SliceListModel::SliceListModel(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

SliceListModel::SliceListModel(GtkSliceListModel* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


SliceListModel::SliceListModel(SliceListModel&& src) noexcept
: Glib::Object(std::move(src))
  , Gio::ListModel(std::move(src))
{}

SliceListModel& SliceListModel::operator=(SliceListModel&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  Gio::ListModel::operator=(std::move(src));
  return *this;
}


SliceListModel::~SliceListModel() noexcept
{}


SliceListModel::CppClassType SliceListModel::slicelistmodel_class_; // initialize static member

GType SliceListModel::get_type()
{
  return slicelistmodel_class_.init().get_type();
}


GType SliceListModel::get_base_type()
{
  return gtk_slice_list_model_get_type();
}


SliceListModel::SliceListModel(const Glib::RefPtr<Gio::ListModel>& model, guint offset, guint size)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(slicelistmodel_class_.init(), "model", Glib::unwrap(model), "offset", offset, "size", size, nullptr))
{
  

}

Glib::RefPtr<SliceListModel> SliceListModel::create(const Glib::RefPtr<Gio::ListModel>& model, guint offset, guint size)
{
  return Glib::make_refptr_for_instance<SliceListModel>( new SliceListModel(model, offset, size) );
}

void SliceListModel::set_model(const Glib::RefPtr<Gio::ListModel>& model)
{
  gtk_slice_list_model_set_model(gobj(), Glib::unwrap(model));
}

Glib::RefPtr<Gio::ListModel> SliceListModel::get_model()
{
  auto retvalue = Glib::wrap(gtk_slice_list_model_get_model(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gio::ListModel> SliceListModel::get_model() const
{
  return const_cast<SliceListModel*>(this)->get_model();
}

void SliceListModel::set_offset(guint offset)
{
  gtk_slice_list_model_set_offset(gobj(), offset);
}

guint SliceListModel::get_offset() const
{
  return gtk_slice_list_model_get_offset(const_cast<GtkSliceListModel*>(gobj()));
}

void SliceListModel::set_size(guint size)
{
  gtk_slice_list_model_set_size(gobj(), size);
}

guint SliceListModel::get_size() const
{
  return gtk_slice_list_model_get_size(const_cast<GtkSliceListModel*>(gobj()));
}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<GType>::value,
  "Type GType cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< GType > SliceListModel::property_item_type() const
{
  return Glib::PropertyProxy_ReadOnly< GType >(this, "item-type");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Gio::ListModel>>::value,
  "Type Glib::RefPtr<Gio::ListModel> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<Gio::ListModel> > SliceListModel::property_model() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::ListModel> >(this, "model");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::ListModel> > SliceListModel::property_model() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::ListModel> >(this, "model");
}

Glib::PropertyProxy_ReadOnly< unsigned int > SliceListModel::property_n_items() const
{
  return Glib::PropertyProxy_ReadOnly< unsigned int >(this, "n-items");
}

Glib::PropertyProxy< guint > SliceListModel::property_offset() 
{
  return Glib::PropertyProxy< guint >(this, "offset");
}

Glib::PropertyProxy_ReadOnly< guint > SliceListModel::property_offset() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "offset");
}

Glib::PropertyProxy< guint > SliceListModel::property_size() 
{
  return Glib::PropertyProxy< guint >(this, "size");
}

Glib::PropertyProxy_ReadOnly< guint > SliceListModel::property_size() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "size");
}


} // namespace Gtk


