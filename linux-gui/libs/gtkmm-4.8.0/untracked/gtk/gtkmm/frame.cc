// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/frame.h>
#include <gtkmm/private/frame_p.h>


/* Copyright 1998-2002 The gtkmm Development Team
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

namespace Gtk
{

void Frame::unset_label()
{
  gtk_frame_set_label(gobj(), nullptr);
}

void Frame::unset_child()
{
  gtk_frame_set_child(gobj(), nullptr);
}

} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Frame* wrap(GtkFrame* object, bool take_copy)
{
  return dynamic_cast<Gtk::Frame *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Frame_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Frame_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_frame_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Frame_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

  klass->compute_child_allocation = &compute_child_allocation_vfunc_callback;

}

void Frame_Class::compute_child_allocation_vfunc_callback(GtkFrame* self, GtkAllocation* allocation)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->compute_child_allocation_vfunc((Allocation&)(Glib::wrap(allocation))
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->compute_child_allocation)
    (*base->compute_child_allocation)(self, allocation);
}


Glib::ObjectBase* Frame_Class::wrap_new(GObject* o)
{
  return manage(new Frame((GtkFrame*)(o)));

}


/* The implementation: */

Frame::Frame(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

Frame::Frame(GtkFrame* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


Frame::Frame(Frame&& src) noexcept
: Gtk::Widget(std::move(src))
{}

Frame& Frame::operator=(Frame&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  return *this;
}

Frame::~Frame() noexcept
{
  destroy_();
}

Frame::CppClassType Frame::frame_class_; // initialize static member

GType Frame::get_type()
{
  return frame_class_.init().get_type();
}


GType Frame::get_base_type()
{
  return gtk_frame_get_type();
}


Frame::Frame()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(frame_class_.init()))
{
  

}

Frame::Frame(const Glib::ustring& label)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(frame_class_.init(), "label", label.c_str(), nullptr))
{
  

}

void Frame::set_label(const Glib::ustring& label)
{
  gtk_frame_set_label(gobj(), label.c_str());
}

Glib::ustring Frame::get_label() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_frame_get_label(const_cast<GtkFrame*>(gobj())));
}

void Frame::set_label_widget(Widget& label_widget)
{
  gtk_frame_set_label_widget(gobj(), (label_widget).gobj());
}

Widget* Frame::get_label_widget()
{
  return Glib::wrap(gtk_frame_get_label_widget(gobj()));
}

const Widget* Frame::get_label_widget() const
{
  return const_cast<Frame*>(this)->get_label_widget();
}

void Frame::set_label_align(float xalign)
{
  gtk_frame_set_label_align(gobj(), xalign);
}

void Frame::set_label_align(Align xalign)
{
  gtk_frame_set_label_align(gobj(), _gtkmm_align_float_from_enum(xalign));
}

float Frame::get_label_align() const
{
  return gtk_frame_get_label_align(const_cast<GtkFrame*>(gobj()));
}

void Frame::set_child(Widget& child)
{
  gtk_frame_set_child(gobj(), (child).gobj());
}

Widget* Frame::get_child()
{
  return Glib::wrap(gtk_frame_get_child(gobj()));
}

const Widget* Frame::get_child() const
{
  return const_cast<Frame*>(this)->get_child();
}


Glib::PropertyProxy< Glib::ustring > Frame::property_label() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "label");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Frame::property_label() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "label");
}

Glib::PropertyProxy< double > Frame::property_label_xalign() 
{
  return Glib::PropertyProxy< double >(this, "label-xalign");
}

Glib::PropertyProxy_ReadOnly< double > Frame::property_label_xalign() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "label-xalign");
}

Glib::PropertyProxy< Widget* > Frame::property_label_widget() 
{
  return Glib::PropertyProxy< Widget* >(this, "label-widget");
}

Glib::PropertyProxy_ReadOnly< Widget* > Frame::property_label_widget() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "label-widget");
}

Glib::PropertyProxy< Widget* > Frame::property_child() 
{
  return Glib::PropertyProxy< Widget* >(this, "child");
}

Glib::PropertyProxy_ReadOnly< Widget* > Frame::property_child() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "child");
}


void Gtk::Frame::compute_child_allocation_vfunc(Allocation& allocation) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->compute_child_allocation)
  {
    (*base->compute_child_allocation)(gobj(),(GtkAllocation*)(allocation.gobj()));
  }
}


} // namespace Gtk


