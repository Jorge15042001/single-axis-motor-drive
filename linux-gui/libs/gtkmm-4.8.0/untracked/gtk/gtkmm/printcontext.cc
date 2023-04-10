// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/printcontext.h>
#include <gtkmm/private/printcontext_p.h>


/* Copyright (C) 2006 The gtkmm Development Team
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
#include <gdkmm/cairoutils.h>

namespace Gtk
{


} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::PrintContext> wrap(GtkPrintContext* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::PrintContext>( dynamic_cast<Gtk::PrintContext*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& PrintContext_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &PrintContext_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_print_context_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void PrintContext_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* PrintContext_Class::wrap_new(GObject* object)
{
  return new PrintContext((GtkPrintContext*)object);
}


/* The implementation: */

GtkPrintContext* PrintContext::gobj_copy()
{
  reference();
  return gobj();
}

PrintContext::PrintContext(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

PrintContext::PrintContext(GtkPrintContext* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


PrintContext::PrintContext(PrintContext&& src) noexcept
: Glib::Object(std::move(src))
{}

PrintContext& PrintContext::operator=(PrintContext&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


PrintContext::~PrintContext() noexcept
{}


PrintContext::CppClassType PrintContext::printcontext_class_; // initialize static member

GType PrintContext::get_type()
{
  return printcontext_class_.init().get_type();
}


GType PrintContext::get_base_type()
{
  return gtk_print_context_get_type();
}


Cairo::RefPtr<Cairo::Context> PrintContext::get_cairo_context()
{
  auto retvalue = Gdk::Cairo::wrap(gtk_print_context_get_cairo_context(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Cairo::RefPtr<const Cairo::Context> PrintContext::get_cairo_context() const
{
  return const_cast<PrintContext*>(this)->get_cairo_context();
}

Glib::RefPtr<PageSetup> PrintContext::get_page_setup()
{
  auto retvalue = Glib::wrap(gtk_print_context_get_page_setup(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const PageSetup> PrintContext::get_page_setup() const
{
  return const_cast<PrintContext*>(this)->get_page_setup();
}

double PrintContext::get_width() const
{
  return gtk_print_context_get_width(const_cast<GtkPrintContext*>(gobj()));
}

double PrintContext::get_height() const
{
  return gtk_print_context_get_height(const_cast<GtkPrintContext*>(gobj()));
}

double PrintContext::get_dpi_x() const
{
  return gtk_print_context_get_dpi_x(const_cast<GtkPrintContext*>(gobj()));
}

double PrintContext::get_dpi_y() const
{
  return gtk_print_context_get_dpi_y(const_cast<GtkPrintContext*>(gobj()));
}

bool PrintContext::get_hard_margins(double& top, double& bottom, double& left, double& right) const
{
  return gtk_print_context_get_hard_margins(const_cast<GtkPrintContext*>(gobj()), &(top), &(bottom), &(left), &(right));
}

Glib::RefPtr<Pango::FontMap> PrintContext::get_pango_fontmap()
{
  auto retvalue = Glib::wrap(gtk_print_context_get_pango_fontmap(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Pango::FontMap> PrintContext::get_pango_fontmap() const
{
  return const_cast<PrintContext*>(this)->get_pango_fontmap();
}

Glib::RefPtr<Pango::Context> PrintContext::create_pango_context()
{
  auto retvalue = Glib::wrap(gtk_print_context_create_pango_context(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<Pango::Layout> PrintContext::create_pango_layout()
{
  auto retvalue = Glib::wrap(gtk_print_context_create_pango_layout(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

void PrintContext::set_cairo_context(const Cairo::RefPtr<Cairo::Context>& cr, double dpi_x, double dpi_y)
{
  gtk_print_context_set_cairo_context(gobj(), ((cr) ? (cr)->cobj() : nullptr), dpi_x, dpi_y);
}


} // namespace Gtk


