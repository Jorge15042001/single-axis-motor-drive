// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/treeexpander.h>
#include <gtkmm/private/treeexpander_p.h>


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

namespace Gtk
{

void TreeExpander::unset_child()
{
  gtk_tree_expander_set_child(gobj(), nullptr);
}

void TreeExpander::unset_list_row()
{
  gtk_tree_expander_set_list_row(gobj(), nullptr);
}

} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::TreeExpander* wrap(GtkTreeExpander* object, bool take_copy)
{
  return dynamic_cast<Gtk::TreeExpander *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& TreeExpander_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &TreeExpander_Class::class_init_function;

    // Do not derive a GType, or use a derived class:
    gtype_ = gtk_tree_expander_get_type();

  }

  return *this;
}


void TreeExpander_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* TreeExpander_Class::wrap_new(GObject* o)
{
  return manage(new TreeExpander((GtkTreeExpander*)(o)));

}


/* The implementation: */

TreeExpander::TreeExpander(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

TreeExpander::TreeExpander(GtkTreeExpander* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


TreeExpander::TreeExpander(TreeExpander&& src) noexcept
: Gtk::Widget(std::move(src))
{}

TreeExpander& TreeExpander::operator=(TreeExpander&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  return *this;
}

TreeExpander::~TreeExpander() noexcept
{
  destroy_();
}

TreeExpander::CppClassType TreeExpander::treeexpander_class_; // initialize static member

GType TreeExpander::get_type()
{
  return treeexpander_class_.init().get_type();
}


GType TreeExpander::get_base_type()
{
  return gtk_tree_expander_get_type();
}


TreeExpander::TreeExpander()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(treeexpander_class_.init()))
{
  

}

Widget* TreeExpander::get_child()
{
  return Glib::wrap(gtk_tree_expander_get_child(gobj()));
}

const Widget* TreeExpander::get_child() const
{
  return const_cast<TreeExpander*>(this)->get_child();
}

void TreeExpander::set_child(Widget& widget)
{
  gtk_tree_expander_set_child(gobj(), (widget).gobj());
}

Glib::RefPtr<Glib::ObjectBase> TreeExpander::get_item()
{
  return Glib::make_refptr_for_instance<Glib::ObjectBase>(Glib::wrap_auto(G_OBJECT(gtk_tree_expander_get_item(gobj()))));
}

Glib::RefPtr<const Glib::ObjectBase> TreeExpander::get_item() const
{
  return const_cast<TreeExpander*>(this)->get_item();
}

Glib::RefPtr<TreeListRow> TreeExpander::get_list_row()
{
  auto retvalue = Glib::wrap(gtk_tree_expander_get_list_row(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const TreeListRow> TreeExpander::get_list_row() const
{
  return const_cast<TreeExpander*>(this)->get_list_row();
}

void TreeExpander::set_list_row(const Glib::RefPtr<TreeListRow>& list_row)
{
  gtk_tree_expander_set_list_row(gobj(), Glib::unwrap(list_row));
}

bool TreeExpander::get_indent_for_icon() const
{
  return gtk_tree_expander_get_indent_for_icon(const_cast<GtkTreeExpander*>(gobj()));
}

void TreeExpander::set_indent_for_icon(bool indent_for_icon)
{
  gtk_tree_expander_set_indent_for_icon(gobj(), static_cast<int>(indent_for_icon));
}


Glib::PropertyProxy< Widget* > TreeExpander::property_child() 
{
  return Glib::PropertyProxy< Widget* >(this, "child");
}

Glib::PropertyProxy_ReadOnly< Widget* > TreeExpander::property_child() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "child");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Glib::ObjectBase>>::value,
  "Type Glib::RefPtr<Glib::ObjectBase> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Glib::ObjectBase> > TreeExpander::property_item() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Glib::ObjectBase> >(this, "item");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<TreeListRow>>::value,
  "Type Glib::RefPtr<TreeListRow> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<TreeListRow> > TreeExpander::property_list_row() 
{
  return Glib::PropertyProxy< Glib::RefPtr<TreeListRow> >(this, "list-row");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TreeListRow> > TreeExpander::property_list_row() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TreeListRow> >(this, "list-row");
}

Glib::PropertyProxy< bool > TreeExpander::property_indent_for_icon() 
{
  return Glib::PropertyProxy< bool >(this, "indent-for-icon");
}

Glib::PropertyProxy_ReadOnly< bool > TreeExpander::property_indent_for_icon() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "indent-for-icon");
}


} // namespace Gtk

