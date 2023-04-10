// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/treelistmodel.h>
#include <gtkmm/private/treelistmodel_p.h>


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

GListModel* TreeListModel_CreateModelFunc(gpointer item, gpointer user_data)
{
  auto slot = static_cast<Gtk::TreeListModel::SlotCreateModel*>(user_data);
  auto result = (*slot)(Glib::wrap(G_OBJECT(item), true));
  if (result)
    return G_LIST_MODEL(result->gobj_copy());
  else
    return nullptr;
}

} // anonymous namespace

namespace Gtk
{

// The only way to set create_func is to use gtk_tree_list_model_new.
TreeListModel::TreeListModel(const Glib::RefPtr<Gio::ListModel>& root,
                             const SlotCreateModel& slot_create,
                             bool passthrough, bool autoexpand)
:
  Glib::ObjectBase(nullptr),
  Glib::Object(G_OBJECT(gtk_tree_list_model_new(
      G_LIST_MODEL(root->gobj_copy()), passthrough, autoexpand,
      &TreeListModel_CreateModelFunc,
      new SlotCreateModel(slot_create),
      &Glib::destroy_notify_delete<SlotCreateModel>)))
{
}

}

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::TreeListModel> wrap(GtkTreeListModel* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::TreeListModel>( dynamic_cast<Gtk::TreeListModel*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& TreeListModel_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &TreeListModel_Class::class_init_function;

    // Do not derive a GType, or use a derived class:
    gtype_ = gtk_tree_list_model_get_type();

  }

  return *this;
}


void TreeListModel_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* TreeListModel_Class::wrap_new(GObject* object)
{
  return new TreeListModel((GtkTreeListModel*)object);
}


/* The implementation: */

GtkTreeListModel* TreeListModel::gobj_copy()
{
  reference();
  return gobj();
}

TreeListModel::TreeListModel(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

TreeListModel::TreeListModel(GtkTreeListModel* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


TreeListModel::TreeListModel(TreeListModel&& src) noexcept
: Glib::Object(std::move(src))
  , Gio::ListModel(std::move(src))
{}

TreeListModel& TreeListModel::operator=(TreeListModel&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  Gio::ListModel::operator=(std::move(src));
  return *this;
}


TreeListModel::~TreeListModel() noexcept
{}


TreeListModel::CppClassType TreeListModel::treelistmodel_class_; // initialize static member

GType TreeListModel::get_type()
{
  return treelistmodel_class_.init().get_type();
}


GType TreeListModel::get_base_type()
{
  return gtk_tree_list_model_get_type();
}


Glib::RefPtr<TreeListModel> TreeListModel::create(const Glib::RefPtr<Gio::ListModel>& root, const SlotCreateModel& slot_create, bool passthrough, bool autoexpand)
{
  return Glib::make_refptr_for_instance<TreeListModel>( new TreeListModel(root, slot_create, passthrough, autoexpand) );
}

Glib::RefPtr<Gio::ListModel> TreeListModel::get_model()
{
  auto retvalue = Glib::wrap(gtk_tree_list_model_get_model(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gio::ListModel> TreeListModel::get_model() const
{
  return const_cast<TreeListModel*>(this)->get_model();
}

bool TreeListModel::get_passthrough() const
{
  return gtk_tree_list_model_get_passthrough(const_cast<GtkTreeListModel*>(gobj()));
}

void TreeListModel::set_autoexpand(bool autoexpand)
{
  gtk_tree_list_model_set_autoexpand(gobj(), static_cast<int>(autoexpand));
}

bool TreeListModel::get_autoexpand() const
{
  return gtk_tree_list_model_get_autoexpand(const_cast<GtkTreeListModel*>(gobj()));
}

Glib::RefPtr<TreeListRow> TreeListModel::get_child_row(guint position)
{
  return Glib::wrap(gtk_tree_list_model_get_child_row(gobj(), position));
}

Glib::RefPtr<const TreeListRow> TreeListModel::get_child_row(guint position) const
{
  return const_cast<TreeListModel*>(this)->get_child_row(position);
}

Glib::RefPtr<TreeListRow> TreeListModel::get_row(guint position)
{
  return Glib::wrap(gtk_tree_list_model_get_row(gobj(), position));
}

Glib::RefPtr<const TreeListRow> TreeListModel::get_row(guint position) const
{
  return const_cast<TreeListModel*>(this)->get_row(position);
}


Glib::PropertyProxy< bool > TreeListModel::property_autoexpand() 
{
  return Glib::PropertyProxy< bool >(this, "autoexpand");
}

Glib::PropertyProxy_ReadOnly< bool > TreeListModel::property_autoexpand() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "autoexpand");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<GType>::value,
  "Type GType cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< GType > TreeListModel::property_item_type() const
{
  return Glib::PropertyProxy_ReadOnly< GType >(this, "item-type");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Gio::ListModel>>::value,
  "Type Glib::RefPtr<Gio::ListModel> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::ListModel> > TreeListModel::property_model() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::ListModel> >(this, "model");
}

Glib::PropertyProxy_ReadOnly< unsigned int > TreeListModel::property_n_items() const
{
  return Glib::PropertyProxy_ReadOnly< unsigned int >(this, "n-items");
}

Glib::PropertyProxy_ReadOnly< bool > TreeListModel::property_passthrough() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "passthrough");
}


} // namespace Gtk


