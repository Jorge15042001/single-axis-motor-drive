// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/printer.h>
#include <gtkmm/private/printer_p.h>


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

#include <glibmm/vectorutils.h>
#include <gtkmm/papersize.h>

#include <gtk/gtkunixprint.h>

// This Signal Proxy allows the C++ coder to specify a sigc::slot instead of a static function.

static gboolean SignalProxy_Custom_gtk_callback(GtkPrinter* gtk_printer, gpointer data)
{
  const auto the_slot = static_cast<Gtk::SlotPrinterEnumerator*>(data);

  try
  {
    // Create a suitable C++ instance to pass to the C++ method;
    auto printer = Glib::wrap(gtk_printer, true);

    return (*the_slot)(printer);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
    return false; // arbitrary default;
  }
}

static void SignalProxy_Custom_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::SlotPrinterEnumerator*>(data);
}

namespace Gtk
{

bool Printer::equal(const Glib::RefPtr<Printer>& other) const
{
  return (static_cast<bool>(gtk_printer_compare(const_cast<GtkPrinter*>(this->gobj()),
                                                const_cast<GtkPrinter*>(other->gobj()))));
}

void enumerate_printers(const SlotPrinterEnumerator& slot, bool wait)
{
  // Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  // It will be deleted when SignalProxy_Custom_gtk_callback_destroy() is called.
  auto slot_copy = new SlotPrinterEnumerator(slot);

  gtk_enumerate_printers(&SignalProxy_Custom_gtk_callback,
                         slot_copy,
                         &SignalProxy_Custom_gtk_callback_destroy,
                         static_cast<int>(wait));
}

} // namespace Gtk

namespace
{


static void Printer_signal_details_acquired_callback(GtkPrinter* self, gboolean p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(bool)>;

  auto obj = dynamic_cast<Printer*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Printer_signal_details_acquired_info =
{
  "details_acquired",
  (GCallback) &Printer_signal_details_acquired_callback,
  (GCallback) &Printer_signal_details_acquired_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::PrintCapabilities>::value_type()
{
  return gtk_print_capabilities_get_type();
}


namespace Glib
{

Glib::RefPtr<Gtk::Printer> wrap(GtkPrinter* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::Printer>( dynamic_cast<Gtk::Printer*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Printer_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Printer_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_printer_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Printer_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Printer_Class::wrap_new(GObject* object)
{
  return new Printer((GtkPrinter*)object);
}


/* The implementation: */

GtkPrinter* Printer::gobj_copy()
{
  reference();
  return gobj();
}

Printer::Printer(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Printer::Printer(GtkPrinter* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Printer::Printer(Printer&& src) noexcept
: Glib::Object(std::move(src))
{}

Printer& Printer::operator=(Printer&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


Printer::~Printer() noexcept
{}


Printer::CppClassType Printer::printer_class_; // initialize static member

GType Printer::get_type()
{
  return printer_class_.init().get_type();
}


GType Printer::get_base_type()
{
  return gtk_printer_get_type();
}


Glib::ustring Printer::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_printer_get_name(const_cast<GtkPrinter*>(gobj())));
}

Glib::ustring Printer::get_state_message() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_printer_get_state_message(const_cast<GtkPrinter*>(gobj())));
}

Glib::ustring Printer::get_description() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_printer_get_description(const_cast<GtkPrinter*>(gobj())));
}

Glib::ustring Printer::get_location() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_printer_get_location(const_cast<GtkPrinter*>(gobj())));
}

Glib::ustring Printer::get_icon_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_printer_get_icon_name(const_cast<GtkPrinter*>(gobj())));
}

int Printer::get_job_count() const
{
  return gtk_printer_get_job_count(const_cast<GtkPrinter*>(gobj()));
}

bool Printer::is_active() const
{
  return gtk_printer_is_active(const_cast<GtkPrinter*>(gobj()));
}

bool Printer::is_paused() const
{
  return gtk_printer_is_paused(const_cast<GtkPrinter*>(gobj()));
}

bool Printer::is_accepting_jobs() const
{
  return gtk_printer_is_accepting_jobs(const_cast<GtkPrinter*>(gobj()));
}

bool Printer::is_virtual() const
{
  return gtk_printer_is_virtual(const_cast<GtkPrinter*>(gobj()));
}

bool Printer::is_default() const
{
  return gtk_printer_is_default(const_cast<GtkPrinter*>(gobj()));
}

bool Printer::accepts_pdf() const
{
  return gtk_printer_accepts_pdf(const_cast<GtkPrinter*>(gobj()));
}

bool Printer::accepts_ps() const
{
  return gtk_printer_accepts_ps(const_cast<GtkPrinter*>(gobj()));
}

std::vector< Glib::RefPtr<PageSetup> > Printer::list_papers()
{
  return Glib::ListHandler< Glib::RefPtr<PageSetup> >::list_to_vector(gtk_printer_list_papers(gobj()), Glib::OWNERSHIP_DEEP);
}

Glib::RefPtr<PageSetup> Printer::get_default_page_size() const
{
  auto retvalue = Glib::wrap(gtk_printer_get_default_page_size(const_cast<GtkPrinter*>(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

std::vector< Glib::RefPtr<const PageSetup> > Printer::list_papers() const
{
  return Glib::ListHandler< Glib::RefPtr<const PageSetup> >::list_to_vector(gtk_printer_list_papers(const_cast<GtkPrinter*>(gobj())), Glib::OWNERSHIP_DEEP);
}

bool Printer::has_details() const
{
  return gtk_printer_has_details(const_cast<GtkPrinter*>(gobj()));
}

void Printer::request_details()
{
  gtk_printer_request_details(gobj());
}

PrintCapabilities Printer::get_capabilities() const
{
  return static_cast<PrintCapabilities>(gtk_printer_get_capabilities(const_cast<GtkPrinter*>(gobj())));
}

bool Printer::get_hard_margins(double& top, double& bottom, double& left, double& right) const
{
  return gtk_printer_get_hard_margins(const_cast<GtkPrinter*>(gobj()), &(top), &(bottom), &(left), &(right));
}

bool Printer::get_hard_margins(const PaperSize& paper_size, double& top, double& bottom, double& left, double& right) const
{
  return gtk_printer_get_hard_margins_for_paper_size(const_cast<GtkPrinter*>(gobj()), const_cast<GtkPaperSize*>((paper_size).gobj()), &(top), &(bottom), &(left), &(right));
}


Glib::SignalProxy<void(bool)> Printer::signal_details_acquired()
{
  return Glib::SignalProxy<void(bool) >(this, &Printer_signal_details_acquired_info);
}


Glib::PropertyProxy_ReadOnly< Glib::ustring > Printer::property_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "name");
}

Glib::PropertyProxy_ReadOnly< bool > Printer::property_is_virtual() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "is-virtual");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Printer::property_state_message() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "state-message");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Printer::property_location() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "location");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Printer::property_icon_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "icon-name");
}

Glib::PropertyProxy_ReadOnly< int > Printer::property_job_count() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "job-count");
}

Glib::PropertyProxy_ReadOnly< bool > Printer::property_accepts_pdf() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "accepts-pdf");
}

Glib::PropertyProxy_ReadOnly< bool > Printer::property_accepts_ps() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "accepts-ps");
}

Glib::PropertyProxy_ReadOnly< bool > Printer::property_paused() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "paused");
}

Glib::PropertyProxy_ReadOnly< bool > Printer::property_accepting_jobs() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "accepting-jobs");
}


} // namespace Gtk


