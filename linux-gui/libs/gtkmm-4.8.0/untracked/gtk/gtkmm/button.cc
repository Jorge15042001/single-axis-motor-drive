// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/button.h>
#include <gtkmm/private/button_p.h>


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
#include <gtkmm/image.h>

namespace Gtk
{

Button::Button(const Glib::ustring& label, bool mnemonic)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(button_class_.init(), "label",label.c_str(),"use_underline",gboolean(mnemonic), nullptr))
{}

void Button::set_image_from_icon_name(const Glib::ustring& icon_name, IconSize size, bool use_fallback)
{
  // It would be possible to create a Gtk::Image and add it with Container::add()
  // instead of calling set_icon_name(), but only set_icon_name() sets style classes
  // appropriately for a button with an icon.

  set_icon_name(icon_name);
  if (size == IconSize::INHERIT && !use_fallback)
    return;

  auto image = dynamic_cast<Image*>(get_child());
  if (image)
  {
    image->set_from_icon_name(icon_name);
    image->set_icon_size(size);
    image->property_use_fallback() = use_fallback;
  }
}

void Button::unset_child()
{
  gtk_button_set_child(gobj(), nullptr);
}

} // namespace Gtk

namespace
{


static const Glib::SignalProxyInfo Button_signal_clicked_info =
{
  "clicked",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::Button* wrap(GtkButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::Button *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Button_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Button_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Actionable::add_interface(get_type());

  }

  return *this;
}


void Button_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->clicked = &clicked_callback;
}


void Button_Class::clicked_callback(GtkButton* self)
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
        obj->on_clicked();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->clicked)
    (*base->clicked)(self);
}


Glib::ObjectBase* Button_Class::wrap_new(GObject* o)
{
  return manage(new Button((GtkButton*)(o)));

}


/* The implementation: */

Button::Button(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

Button::Button(GtkButton* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


Button::Button(Button&& src) noexcept
: Gtk::Widget(std::move(src))
  , Actionable(std::move(src))
{}

Button& Button::operator=(Button&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  Actionable::operator=(std::move(src));
  return *this;
}

Button::~Button() noexcept
{
  destroy_();
}

Button::CppClassType Button::button_class_; // initialize static member

GType Button::get_type()
{
  return button_class_.init().get_type();
}


GType Button::get_base_type()
{
  return gtk_button_get_type();
}


Button::Button()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(button_class_.init()))
{
  

}

void Button::set_has_frame(bool has_frame)
{
  gtk_button_set_has_frame(gobj(), static_cast<int>(has_frame));
}

bool Button::get_has_frame() const
{
  return gtk_button_get_has_frame(const_cast<GtkButton*>(gobj()));
}

void Button::set_label(const Glib::ustring& label)
{
  gtk_button_set_label(gobj(), label.c_str());
}

Glib::ustring Button::get_label() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_button_get_label(const_cast<GtkButton*>(gobj())));
}

void Button::set_use_underline(bool use_underline)
{
  gtk_button_set_use_underline(gobj(), static_cast<int>(use_underline));
}

bool Button::get_use_underline() const
{
  return gtk_button_get_use_underline(const_cast<GtkButton*>(gobj()));
}

void Button::set_icon_name(const Glib::ustring& icon_name)
{
  gtk_button_set_icon_name(gobj(), icon_name.c_str());
}

Glib::ustring Button::get_icon_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_button_get_icon_name(const_cast<GtkButton*>(gobj())));
}

void Button::set_child(Widget& child)
{
  gtk_button_set_child(gobj(), (child).gobj());
}

Widget* Button::get_child()
{
  return Glib::wrap(gtk_button_get_child(gobj()));
}

const Widget* Button::get_child() const
{
  return const_cast<Button*>(this)->get_child();
}


Glib::SignalProxy<void()> Button::signal_clicked()
{
  return Glib::SignalProxy<void() >(this, &Button_signal_clicked_info);
}


Glib::PropertyProxy< Glib::ustring > Button::property_label() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "label");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Button::property_label() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "label");
}

Glib::PropertyProxy< bool > Button::property_has_frame() 
{
  return Glib::PropertyProxy< bool >(this, "has-frame");
}

Glib::PropertyProxy_ReadOnly< bool > Button::property_has_frame() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "has-frame");
}

Glib::PropertyProxy< bool > Button::property_use_underline() 
{
  return Glib::PropertyProxy< bool >(this, "use-underline");
}

Glib::PropertyProxy_ReadOnly< bool > Button::property_use_underline() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "use-underline");
}

Glib::PropertyProxy< Glib::ustring > Button::property_icon_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "icon-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Button::property_icon_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "icon-name");
}

Glib::PropertyProxy< Widget* > Button::property_child() 
{
  return Glib::PropertyProxy< Widget* >(this, "child");
}

Glib::PropertyProxy_ReadOnly< Widget* > Button::property_child() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "child");
}


void Gtk::Button::on_clicked()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->clicked)
    (*base->clicked)(gobj());
}


} // namespace Gtk

