// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/stylecontext.h>
#include <gtkmm/private/stylecontext_p.h>


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

#include <gdkmm/texture.h>
#include <gtkmm/widget.h>
#include <gtk/gtk.h>


namespace Gtk
{

Gdk::RGBA StyleContext::get_color() const
{
  GdkRGBA crgba;
  gtk_style_context_get_color(const_cast<GtkStyleContext*>(gobj()), &crgba);
  return Gdk::RGBA(&crgba, true);
}

Border StyleContext::get_border() const
{
  GtkBorder cborder;
  gtk_style_context_get_border(const_cast<GtkStyleContext*>(gobj()), &cborder);
  return Border(&cborder, true);
}

Border StyleContext::get_padding() const
{
  GtkBorder cborder;
  gtk_style_context_get_padding(const_cast<GtkStyleContext*>(gobj()), &cborder);
  return Border(&cborder, true);
}

Border StyleContext::get_margin() const
{
  GtkBorder cborder;
  gtk_style_context_get_margin(const_cast<GtkStyleContext*>(gobj()), &cborder);
  return Border(&cborder, true);
}

} // namespace Gtk

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::StyleContext::PrintFlags>::value_type()
{
  return gtk_style_context_print_flags_get_type();
}


namespace Glib
{

Glib::RefPtr<Gtk::StyleContext> wrap(GtkStyleContext* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::StyleContext>( dynamic_cast<Gtk::StyleContext*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& StyleContext_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &StyleContext_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_style_context_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void StyleContext_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* StyleContext_Class::wrap_new(GObject* object)
{
  return new StyleContext((GtkStyleContext*)object);
}


/* The implementation: */

GtkStyleContext* StyleContext::gobj_copy()
{
  reference();
  return gobj();
}

StyleContext::StyleContext(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

StyleContext::StyleContext(GtkStyleContext* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


StyleContext::StyleContext(StyleContext&& src) noexcept
: Glib::Object(std::move(src))
{}

StyleContext& StyleContext::operator=(StyleContext&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


StyleContext::~StyleContext() noexcept
{}


StyleContext::CppClassType StyleContext::stylecontext_class_; // initialize static member

GType StyleContext::get_type()
{
  return stylecontext_class_.init().get_type();
}


GType StyleContext::get_base_type()
{
  return gtk_style_context_get_type();
}


StyleContext::StyleContext()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(stylecontext_class_.init()))
{
  

}

void StyleContext::add_provider_for_display(const Glib::RefPtr<Gdk::Display>& display, const Glib::RefPtr<StyleProvider>& provider, guint priority)
{
  gtk_style_context_add_provider_for_display(Glib::unwrap(display), Glib::unwrap(provider), priority);
}

void StyleContext::remove_provider_for_display(const Glib::RefPtr<Gdk::Display>& display, const Glib::RefPtr<StyleProvider>& provider)
{
  gtk_style_context_remove_provider_for_display(Glib::unwrap(display), Glib::unwrap(provider));
}

void StyleContext::add_provider(const Glib::RefPtr<StyleProvider>& provider, guint priority)
{
  gtk_style_context_add_provider(gobj(), Glib::unwrap(provider), priority);
}

void StyleContext::remove_provider(const Glib::RefPtr<StyleProvider>& provider)
{
  gtk_style_context_remove_provider(gobj(), Glib::unwrap(provider));
}

void StyleContext::context_save()
{
  gtk_style_context_save(gobj());
}

void StyleContext::context_restore()
{
  gtk_style_context_restore(gobj());
}

void StyleContext::set_state(StateFlags flags)
{
  gtk_style_context_set_state(gobj(), static_cast<GtkStateFlags>(flags));
}

StateFlags StyleContext::get_state() const
{
  return static_cast<StateFlags>(gtk_style_context_get_state(const_cast<GtkStyleContext*>(gobj())));
}

void StyleContext::set_scale(int scale)
{
  gtk_style_context_set_scale(gobj(), scale);
}

int StyleContext::get_scale() const
{
  return gtk_style_context_get_scale(const_cast<GtkStyleContext*>(gobj()));
}

void StyleContext::add_class(const Glib::ustring& class_name)
{
  gtk_style_context_add_class(gobj(), class_name.c_str());
}

void StyleContext::remove_class(const Glib::ustring& class_name)
{
  gtk_style_context_remove_class(gobj(), class_name.c_str());
}

bool StyleContext::has_class(const Glib::ustring& class_name)
{
  return gtk_style_context_has_class(gobj(), class_name.c_str());
}

void StyleContext::set_display(const Glib::RefPtr<Gdk::Display>& display)
{
  gtk_style_context_set_display(gobj(), Glib::unwrap(display));
}

Glib::RefPtr<Gdk::Display> StyleContext::get_display()
{
  auto retvalue = Glib::wrap(gtk_style_context_get_display(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Display> StyleContext::get_display() const
{
  return const_cast<StyleContext*>(this)->get_display();
}

bool StyleContext::lookup_color(const Glib::ustring& color_name, Gdk::RGBA& color)
{
  return gtk_style_context_lookup_color(gobj(), color_name.c_str(), (color).gobj());
}

void StyleContext::render_check(const Cairo::RefPtr<Cairo::Context>& cr, double x, double y, double width, double height)
{
  gtk_render_check(gobj(), ((cr) ? (cr)->cobj() : nullptr), x, y, width, height);
}

void StyleContext::render_option(const Cairo::RefPtr<Cairo::Context>& cr, double x, double y, double width, double height)
{
  gtk_render_option(gobj(), ((cr) ? (cr)->cobj() : nullptr), x, y, width, height);
}

void StyleContext::render_arrow(const Cairo::RefPtr<Cairo::Context>& cr, double angle, double x, double y, double size)
{
  gtk_render_arrow(gobj(), ((cr) ? (cr)->cobj() : nullptr), angle, x, y, size);
}

void StyleContext::render_background(const Cairo::RefPtr<Cairo::Context>& cr, double x, double y, double width, double height)
{
  gtk_render_background(gobj(), ((cr) ? (cr)->cobj() : nullptr), x, y, width, height);
}

void StyleContext::render_frame(const Cairo::RefPtr<Cairo::Context>& cr, double x, double y, double width, double height)
{
  gtk_render_frame(gobj(), ((cr) ? (cr)->cobj() : nullptr), x, y, width, height);
}

void StyleContext::render_expander(const Cairo::RefPtr<Cairo::Context>& cr, double x, double y, double width, double height)
{
  gtk_render_expander(gobj(), ((cr) ? (cr)->cobj() : nullptr), x, y, width, height);
}

void StyleContext::render_focus(const Cairo::RefPtr<Cairo::Context>& cr, double x, double y, double width, double height)
{
  gtk_render_focus(gobj(), ((cr) ? (cr)->cobj() : nullptr), x, y, width, height);
}

void StyleContext::render_layout(const Cairo::RefPtr<Cairo::Context>& cr, double x, double y, const Glib::RefPtr<Pango::Layout>& layout)
{
  gtk_render_layout(gobj(), ((cr) ? (cr)->cobj() : nullptr), x, y, Glib::unwrap(layout));
}

void StyleContext::render_line(const Cairo::RefPtr<Cairo::Context>& cr, double x0, double y0, double x1, double y1)
{
  gtk_render_line(gobj(), ((cr) ? (cr)->cobj() : nullptr), x0, y0, x1, y1);
}

void StyleContext::render_handle(const Cairo::RefPtr<Cairo::Context>& cr, double x, double y, double width, double height)
{
  gtk_render_handle(gobj(), ((cr) ? (cr)->cobj() : nullptr), x, y, width, height);
}

void StyleContext::render_activity(const Cairo::RefPtr<Cairo::Context>& cr, double x, double y, double width, double height)
{
  gtk_render_activity(gobj(), ((cr) ? (cr)->cobj() : nullptr), x, y, width, height);
}

void StyleContext::render_icon(const Cairo::RefPtr<Cairo::Context>& cr, const Glib::RefPtr<Gdk::Texture>& texture, double x, double y)
{
  gtk_render_icon(gobj(), ((cr) ? (cr)->cobj() : nullptr), Glib::unwrap(texture), x, y);
}

Glib::ustring StyleContext::to_string(PrintFlags flags) const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_style_context_to_string(const_cast<GtkStyleContext*>(gobj()), static_cast<GtkStyleContextPrintFlags>(flags)));
}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<Gdk::Display>>::value,
  "Type Glib::RefPtr<Gdk::Display> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<Gdk::Display> > StyleContext::property_display() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gdk::Display> >(this, "display");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Display> > StyleContext::property_display() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Display> >(this, "display");
}


} // namespace Gtk


