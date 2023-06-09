// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/stack.h>
#include <gtkmm/private/stack_p.h>

#include <gtk/gtk.h>

/*
 * Copyright 2013 The gtkmm Development Team
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

#include <gtkmm/selectionlistmodelimpl.h>
#include <gtk/gtk.h>

namespace Gtk
{

Glib::RefPtr<SelectionModel> Stack::get_pages()
{
  // gtk_stack_get_pages() returns a pointer to a private GObject class that
  // implements GListModel and GtkSelectionModel.
  // Such an instance is wrapped in a Gtk::SelectionListModelImpl.
  // gtk_stack_get_pages() gives us a ref (transfer full).
  GtkSelectionModel* stack_pages = gtk_stack_get_pages(gobj());
  if (G_IS_LIST_MODEL(stack_pages))
  {
    // Look up current C++ wrapper instance:
    Glib::ObjectBase* pCppObject = Glib::ObjectBase::_get_current_wrapper((GObject*)stack_pages);
    if (!pCppObject)
      pCppObject = new SelectionListModelImpl((GObject*)stack_pages);
    return Glib::make_refptr_for_instance<SelectionModel>(dynamic_cast<SelectionModel*>(pCppObject));
  }
  return Glib::wrap(stack_pages);
}

} //namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Stack* wrap(GtkStack* object, bool take_copy)
{
  return dynamic_cast<Gtk::Stack *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Stack_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Stack_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_stack_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Stack_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Stack_Class::wrap_new(GObject* o)
{
  return manage(new Stack((GtkStack*)(o)));

}


/* The implementation: */

Stack::Stack(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

Stack::Stack(GtkStack* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


Stack::Stack(Stack&& src) noexcept
: Gtk::Widget(std::move(src))
{}

Stack& Stack::operator=(Stack&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  return *this;
}

Stack::~Stack() noexcept
{
  destroy_();
}

Stack::CppClassType Stack::stack_class_; // initialize static member

GType Stack::get_type()
{
  return stack_class_.init().get_type();
}


GType Stack::get_base_type()
{
  return gtk_stack_get_type();
}


Stack::Stack()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(stack_class_.init()))
{
  

}

Glib::RefPtr<StackPage> Stack::add(Widget& child)
{
  auto retvalue = Glib::wrap(gtk_stack_add_child(gobj(), (child).gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<StackPage> Stack::add(Widget& child, const Glib::ustring& name)
{
  auto retvalue = Glib::wrap(gtk_stack_add_named(gobj(), (child).gobj(), name.c_str()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<StackPage> Stack::add(Widget& child, const Glib::ustring& name, const Glib::ustring& title)
{
  auto retvalue = Glib::wrap(gtk_stack_add_titled(gobj(), (child).gobj(), name.c_str(), title.c_str()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

void Stack::remove(Widget& child)
{
  gtk_stack_remove(gobj(), (child).gobj());
}

Glib::RefPtr<StackPage> Stack::get_page(Widget& child)
{
  auto retvalue = Glib::wrap(gtk_stack_get_page(gobj(), (child).gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const StackPage> Stack::get_page(const Widget& child) const
{
  auto retvalue = Glib::wrap(gtk_stack_get_page(const_cast<GtkStack*>(gobj()), const_cast<GtkWidget*>((child).gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

void Stack::set_visible_child(Widget& child)
{
  gtk_stack_set_visible_child(gobj(), (child).gobj());
}

Widget* Stack::get_visible_child()
{
  return Glib::wrap(gtk_stack_get_visible_child(gobj()));
}

const Widget* Stack::get_visible_child() const
{
  return const_cast<Stack*>(this)->get_visible_child();
}

void Stack::set_visible_child(const Glib::ustring& name)
{
  gtk_stack_set_visible_child_name(gobj(), name.c_str());
}

void Stack::set_visible_child(const Glib::ustring& name, StackTransitionType transition)
{
  gtk_stack_set_visible_child_full(gobj(), name.c_str(), static_cast<GtkStackTransitionType>(transition));
}

Glib::ustring Stack::get_visible_child_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_stack_get_visible_child_name(const_cast<GtkStack*>(gobj())));
}

void Stack::set_hhomogeneous(bool hhomogeneous)
{
  gtk_stack_set_hhomogeneous(gobj(), static_cast<int>(hhomogeneous));
}

bool Stack::get_hhomogeneous() const
{
  return gtk_stack_get_hhomogeneous(const_cast<GtkStack*>(gobj()));
}

void Stack::set_vhomogeneous(bool vhomogeneous)
{
  gtk_stack_set_vhomogeneous(gobj(), static_cast<int>(vhomogeneous));
}

bool Stack::get_vhomogeneous() const
{
  return gtk_stack_get_vhomogeneous(const_cast<GtkStack*>(gobj()));
}

void Stack::set_transition_duration(guint duration)
{
  gtk_stack_set_transition_duration(gobj(), duration);
}

guint Stack::get_transition_duration() const
{
  return gtk_stack_get_transition_duration(const_cast<GtkStack*>(gobj()));
}

void Stack::set_transition_type(StackTransitionType transition)
{
  gtk_stack_set_transition_type(gobj(), static_cast<GtkStackTransitionType>(transition));
}

StackTransitionType Stack::get_transition_type() const
{
  return static_cast<StackTransitionType>(gtk_stack_get_transition_type(const_cast<GtkStack*>(gobj())));
}

bool Stack::get_transition_running() const
{
  return gtk_stack_get_transition_running(const_cast<GtkStack*>(gobj()));
}

Widget* Stack::get_child_by_name(const Glib::ustring& name)
{
  return Glib::wrap(gtk_stack_get_child_by_name(gobj(), name.c_str()));
}

const Widget* Stack::get_child_by_name(const Glib::ustring& name) const
{
  return const_cast<Stack*>(this)->get_child_by_name(name);
}

void Stack::set_interpolate_size(bool interpolate_size)
{
  gtk_stack_set_interpolate_size(gobj(), static_cast<int>(interpolate_size));
}

bool Stack::get_interpolate_size() const
{
  return gtk_stack_get_interpolate_size(const_cast<GtkStack*>(gobj()));
}

Glib::RefPtr<const SelectionModel> Stack::get_pages() const
{
  return const_cast<Stack*>(this)->get_pages();
}


Glib::PropertyProxy< bool > Stack::property_hhomogeneous() 
{
  return Glib::PropertyProxy< bool >(this, "hhomogeneous");
}

Glib::PropertyProxy_ReadOnly< bool > Stack::property_hhomogeneous() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "hhomogeneous");
}

Glib::PropertyProxy< unsigned int > Stack::property_transition_duration() 
{
  return Glib::PropertyProxy< unsigned int >(this, "transition-duration");
}

Glib::PropertyProxy_ReadOnly< unsigned int > Stack::property_transition_duration() const
{
  return Glib::PropertyProxy_ReadOnly< unsigned int >(this, "transition-duration");
}

Glib::PropertyProxy_ReadOnly< bool > Stack::property_transition_running() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "transition-running");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<StackTransitionType>::value,
  "Type StackTransitionType cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< StackTransitionType > Stack::property_transition_type() 
{
  return Glib::PropertyProxy< StackTransitionType >(this, "transition-type");
}

Glib::PropertyProxy_ReadOnly< StackTransitionType > Stack::property_transition_type() const
{
  return Glib::PropertyProxy_ReadOnly< StackTransitionType >(this, "transition-type");
}

Glib::PropertyProxy< bool > Stack::property_vhomogeneous() 
{
  return Glib::PropertyProxy< bool >(this, "vhomogeneous");
}

Glib::PropertyProxy_ReadOnly< bool > Stack::property_vhomogeneous() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "vhomogeneous");
}

Glib::PropertyProxy< Widget* > Stack::property_visible_child() 
{
  return Glib::PropertyProxy< Widget* >(this, "visible-child");
}

Glib::PropertyProxy_ReadOnly< Widget* > Stack::property_visible_child() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "visible-child");
}

Glib::PropertyProxy< Glib::ustring > Stack::property_visible_child_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "visible-child-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Stack::property_visible_child_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "visible-child-name");
}

Glib::PropertyProxy< bool > Stack::property_interpolate_size() 
{
  return Glib::PropertyProxy< bool >(this, "interpolate-size");
}

Glib::PropertyProxy_ReadOnly< bool > Stack::property_interpolate_size() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "interpolate-size");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<SelectionModel>>::value,
  "Type Glib::RefPtr<SelectionModel> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<SelectionModel> > Stack::property_pages() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<SelectionModel> >(this, "pages");
}


} // namespace Gtk


