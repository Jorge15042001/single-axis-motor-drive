// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/image.h>
#include <gtkmm/private/image_p.h>

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

using Type = Gtk::Image::Type;

namespace Gtk
{

Image::Image(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(image_class_.init()))
{
  gtk_image_set_from_pixbuf(gobj(), Glib::unwrap(pixbuf));
}

} // namespace Gtk

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::Image::Type>::value_type()
{
  return gtk_image_type_get_type();
}


namespace Glib
{

Gtk::Image* wrap(GtkImage* object, bool take_copy)
{
  return dynamic_cast<Gtk::Image *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Image_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Image_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_image_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Image_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Image_Class::wrap_new(GObject* o)
{
  return manage(new Image((GtkImage*)(o)));

}


/* The implementation: */

Image::Image(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

Image::Image(GtkImage* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


Image::Image(Image&& src) noexcept
: Gtk::Widget(std::move(src))
{}

Image& Image::operator=(Image&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  return *this;
}

Image::~Image() noexcept
{
  destroy_();
}

Image::CppClassType Image::image_class_; // initialize static member

GType Image::get_type()
{
  return image_class_.init().get_type();
}


GType Image::get_base_type()
{
  return gtk_image_get_type();
}


Image::Image()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(image_class_.init()))
{
  

}

Image::Image(const std::string& file)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(image_class_.init(), "file", file.c_str(), nullptr))
{
  

}

Image::Image(const Glib::RefPtr<Gdk::Paintable>& paintable)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(image_class_.init(), "paintable", Glib::unwrap(paintable), nullptr))
{
  

}

Image::Image(const Glib::RefPtr<Gio::Icon>& gicon)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(image_class_.init(), "gicon", const_cast<GIcon*>(Glib::unwrap<Gio::Icon>(gicon)), nullptr))
{
  

}

void Image::set(const std::string& filename)
{
  gtk_image_set_from_file(gobj(), filename.c_str());
}

void Image::set_from_resource(const std::string& resource_path)
{
  gtk_image_set_from_resource(gobj(), resource_path.c_str());
}

void Image::set(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
{
  gtk_image_set_from_pixbuf(gobj(), Glib::unwrap(pixbuf));
}

void Image::set(const Glib::RefPtr<Gdk::Paintable>& paintable)
{
  gtk_image_set_from_paintable(gobj(), Glib::unwrap(paintable));
}

void Image::set(const Glib::RefPtr<const Gio::Icon>& icon)
{
  gtk_image_set_from_gicon(gobj(), const_cast<GIcon*>(Glib::unwrap<Gio::Icon>(icon)));
}

void Image::set_from_icon_name(const Glib::ustring& icon_name)
{
  gtk_image_set_from_icon_name(gobj(), icon_name.c_str());
}

void Image::clear()
{
  gtk_image_clear(gobj());
}

Type Image::get_storage_type() const
{
  return static_cast<Type>(gtk_image_get_storage_type(const_cast<GtkImage*>(gobj())));
}

Glib::RefPtr<Gdk::Paintable> Image::get_paintable()
{
  auto retvalue = Glib::wrap(gtk_image_get_paintable(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Paintable> Image::get_paintable() const
{
  return const_cast<Image*>(this)->get_paintable();
}

void Image::set_icon_size(IconSize icon_size)
{
  gtk_image_set_icon_size(gobj(), static_cast<GtkIconSize>(icon_size));
}

IconSize Image::get_icon_size() const
{
  return static_cast<IconSize>(gtk_image_get_icon_size(const_cast<GtkImage*>(gobj())));
}

Glib::RefPtr<Gio::Icon> Image::get_gicon()
{
  auto retvalue = Glib::wrap(gtk_image_get_gicon(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gio::Icon> Image::get_gicon() const
{
  return const_cast<Image*>(this)->get_gicon();
}

Glib::ustring Image::get_icon_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_image_get_icon_name(const_cast<GtkImage*>(gobj())));
}

int Image::get_pixel_size() const
{
  return gtk_image_get_pixel_size(const_cast<GtkImage*>(gobj()));
}

void Image::set_pixel_size(int pixel_size)
{
  gtk_image_set_pixel_size(gobj(), pixel_size);
}


Glib::PropertyProxy< Glib::ustring > Image::property_file() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "file");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Image::property_file() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "file");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<IconSize>::value,
  "Type IconSize cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< IconSize > Image::property_icon_size() 
{
  return Glib::PropertyProxy< IconSize >(this, "icon-size");
}

Glib::PropertyProxy_ReadOnly< IconSize > Image::property_icon_size() const
{
  return Glib::PropertyProxy_ReadOnly< IconSize >(this, "icon-size");
}

Glib::PropertyProxy< int > Image::property_pixel_size() 
{
  return Glib::PropertyProxy< int >(this, "pixel-size");
}

Glib::PropertyProxy_ReadOnly< int > Image::property_pixel_size() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "pixel-size");
}

Glib::PropertyProxy< Glib::ustring > Image::property_icon_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "icon-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Image::property_icon_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "icon-name");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Type>::value,
  "Type Type cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Type > Image::property_storage_type() const
{
  return Glib::PropertyProxy_ReadOnly< Type >(this, "storage-type");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Gio::Icon>>::value,
  "Type Glib::RefPtr<Gio::Icon> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> > Image::property_gicon() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> >(this, "gicon");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> > Image::property_gicon() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> >(this, "gicon");
}

Glib::PropertyProxy< bool > Image::property_use_fallback() 
{
  return Glib::PropertyProxy< bool >(this, "use-fallback");
}

Glib::PropertyProxy_ReadOnly< bool > Image::property_use_fallback() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "use-fallback");
}

Glib::PropertyProxy< std::string > Image::property_resource() 
{
  return Glib::PropertyProxy< std::string >(this, "resource");
}

Glib::PropertyProxy_ReadOnly< std::string > Image::property_resource() const
{
  return Glib::PropertyProxy_ReadOnly< std::string >(this, "resource");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Gdk::Paintable>>::value,
  "Type Glib::RefPtr<Gdk::Paintable> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<Gdk::Paintable> > Image::property_paintable() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gdk::Paintable> >(this, "paintable");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Paintable> > Image::property_paintable() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Paintable> >(this, "paintable");
}


} // namespace Gtk


