// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/editablelabel.h>
#include <gtkmm/private/editablelabel_p.h>


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

Gtk::EditableLabel* wrap(GtkEditableLabel* object, bool take_copy)
{
  return dynamic_cast<Gtk::EditableLabel *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& EditableLabel_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &EditableLabel_Class::class_init_function;

    // Do not derive a GType, or use a derived class:
    gtype_ = gtk_editable_label_get_type();

  }

  return *this;
}


void EditableLabel_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* EditableLabel_Class::wrap_new(GObject* o)
{
  return manage(new EditableLabel((GtkEditableLabel*)(o)));

}


/* The implementation: */

EditableLabel::EditableLabel(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

EditableLabel::EditableLabel(GtkEditableLabel* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


EditableLabel::EditableLabel(EditableLabel&& src) noexcept
: Gtk::Widget(std::move(src))
  , Editable(std::move(src))
{}

EditableLabel& EditableLabel::operator=(EditableLabel&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  Editable::operator=(std::move(src));
  return *this;
}

EditableLabel::~EditableLabel() noexcept
{
  destroy_();
}

EditableLabel::CppClassType EditableLabel::editablelabel_class_; // initialize static member

GType EditableLabel::get_type()
{
  return editablelabel_class_.init().get_type();
}


GType EditableLabel::get_base_type()
{
  return gtk_editable_label_get_type();
}


EditableLabel::EditableLabel()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(editablelabel_class_.init()))
{
  

}

EditableLabel::EditableLabel(const Glib::ustring& text)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(editablelabel_class_.init(), "text", text.c_str(), nullptr))
{
  

}

bool EditableLabel::get_editing() const
{
  return gtk_editable_label_get_editing(const_cast<GtkEditableLabel*>(gobj()));
}

void EditableLabel::start_editing()
{
  gtk_editable_label_start_editing(gobj());
}

void EditableLabel::stop_editing(bool commit)
{
  gtk_editable_label_stop_editing(gobj(), static_cast<int>(commit));
}


Glib::PropertyProxy< bool > EditableLabel::property_editing() 
{
  return Glib::PropertyProxy< bool >(this, "editing");
}

Glib::PropertyProxy_ReadOnly< bool > EditableLabel::property_editing() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "editing");
}


} // namespace Gtk


