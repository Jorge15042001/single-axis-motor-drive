// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/pagesetup.h>
#include <gtkmm/private/pagesetup_p.h>


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

namespace Gtk
{

Glib::RefPtr<PageSetup> PageSetup::create_from_key_file(const Glib::RefPtr<const Glib::KeyFile>& key_file)
{
  auto result = PageSetup::create();

  result->load_from_key_file(key_file);

  return result;
}

Glib::RefPtr<PageSetup> PageSetup::create_from_key_file(const Glib::RefPtr<const Glib::KeyFile>& key_file, const Glib::ustring& group_name)
{
  auto result = PageSetup::create();

  result->load_from_key_file(key_file, group_name);

  return result;
}

Glib::RefPtr<PageSetup> PageSetup::create_from_file(const std::string& file_name)
{
  auto result = PageSetup::create();

  result->load_from_file(file_name);

  return result;
}

void PageSetup::save_to_key_file(const Glib::RefPtr<Glib::KeyFile>& key_file) const
{
  gtk_page_setup_to_key_file(const_cast<GtkPageSetup*>(gobj()), Glib::unwrap(key_file), nullptr);
}

bool PageSetup::load_from_key_file(const Glib::RefPtr<const Glib::KeyFile>& key_file)
{
  GError* gerror = nullptr;
  bool retvalue = gtk_page_setup_load_key_file(gobj(), const_cast<GKeyFile*>(Glib::unwrap(key_file)), nullptr, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

} //namespace

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::PageSetup> wrap(GtkPageSetup* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::PageSetup>( dynamic_cast<Gtk::PageSetup*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& PageSetup_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &PageSetup_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_page_setup_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void PageSetup_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* PageSetup_Class::wrap_new(GObject* object)
{
  return new PageSetup((GtkPageSetup*)object);
}


/* The implementation: */

GtkPageSetup* PageSetup::gobj_copy()
{
  reference();
  return gobj();
}

PageSetup::PageSetup(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

PageSetup::PageSetup(GtkPageSetup* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


PageSetup::PageSetup(PageSetup&& src) noexcept
: Glib::Object(std::move(src))
{}

PageSetup& PageSetup::operator=(PageSetup&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


PageSetup::~PageSetup() noexcept
{}


PageSetup::CppClassType PageSetup::pagesetup_class_; // initialize static member

GType PageSetup::get_type()
{
  return pagesetup_class_.init().get_type();
}


GType PageSetup::get_base_type()
{
  return gtk_page_setup_get_type();
}


PageSetup::PageSetup()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(pagesetup_class_.init()))
{
  

}

Glib::RefPtr<PageSetup> PageSetup::create()
{
  return Glib::make_refptr_for_instance<PageSetup>( new PageSetup() );
}

Glib::RefPtr<PageSetup> PageSetup::copy() const
{
  return Glib::wrap(gtk_page_setup_copy(const_cast<GtkPageSetup*>(gobj())));
}

bool PageSetup::load_from_file(const std::string& file_name)
{
  GError* gerror = nullptr;
  auto retvalue = gtk_page_setup_load_file(gobj(), file_name.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool PageSetup::load_from_key_file(const Glib::RefPtr<const Glib::KeyFile>& key_file, const Glib::ustring& group_name)
{
  GError* gerror = nullptr;
  auto retvalue = gtk_page_setup_load_key_file(gobj(), const_cast<GKeyFile*>(Glib::unwrap(key_file)), group_name.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

PageOrientation PageSetup::get_orientation() const
{
  return static_cast<PageOrientation>(gtk_page_setup_get_orientation(const_cast<GtkPageSetup*>(gobj())));
}

void PageSetup::set_orientation(PageOrientation orientation)
{
  gtk_page_setup_set_orientation(gobj(), static_cast<GtkPageOrientation>(orientation));
}

PaperSize PageSetup::get_paper_size()
{
  return Glib::wrap(gtk_page_setup_get_paper_size(gobj()), true);
}

const PaperSize PageSetup::get_paper_size() const
{
  return const_cast<PageSetup*>(this)->get_paper_size();
}

void PageSetup::set_paper_size(const PaperSize& size)
{
  gtk_page_setup_set_paper_size(gobj(), const_cast<GtkPaperSize*>((size).gobj()));
}

double PageSetup::get_top_margin(Unit unit) const
{
  return gtk_page_setup_get_top_margin(const_cast<GtkPageSetup*>(gobj()), static_cast<GtkUnit>(unit));
}

void PageSetup::set_top_margin(double margin, Unit unit)
{
  gtk_page_setup_set_top_margin(gobj(), margin, static_cast<GtkUnit>(unit));
}

double PageSetup::get_bottom_margin(Unit unit) const
{
  return gtk_page_setup_get_bottom_margin(const_cast<GtkPageSetup*>(gobj()), static_cast<GtkUnit>(unit));
}

void PageSetup::set_bottom_margin(double margin, Unit unit)
{
  gtk_page_setup_set_bottom_margin(gobj(), margin, static_cast<GtkUnit>(unit));
}

double PageSetup::get_left_margin(Unit unit) const
{
  return gtk_page_setup_get_left_margin(const_cast<GtkPageSetup*>(gobj()), static_cast<GtkUnit>(unit));
}

void PageSetup::set_left_margin(double margin, Unit unit)
{
  gtk_page_setup_set_left_margin(gobj(), margin, static_cast<GtkUnit>(unit));
}

double PageSetup::get_right_margin(Unit unit) const
{
  return gtk_page_setup_get_right_margin(const_cast<GtkPageSetup*>(gobj()), static_cast<GtkUnit>(unit));
}

void PageSetup::set_right_margin(double margin, Unit unit)
{
  gtk_page_setup_set_right_margin(gobj(), margin, static_cast<GtkUnit>(unit));
}

void PageSetup::set_paper_size_and_default_margins(const PaperSize& size)
{
  gtk_page_setup_set_paper_size_and_default_margins(gobj(), const_cast<GtkPaperSize*>((size).gobj()));
}

double PageSetup::get_paper_width(Unit unit) const
{
  return gtk_page_setup_get_paper_width(const_cast<GtkPageSetup*>(gobj()), static_cast<GtkUnit>(unit));
}

double PageSetup::get_paper_height(Unit unit) const
{
  return gtk_page_setup_get_paper_height(const_cast<GtkPageSetup*>(gobj()), static_cast<GtkUnit>(unit));
}

double PageSetup::get_page_width(Unit unit) const
{
  return gtk_page_setup_get_page_width(const_cast<GtkPageSetup*>(gobj()), static_cast<GtkUnit>(unit));
}

double PageSetup::get_page_height(Unit unit) const
{
  return gtk_page_setup_get_page_height(const_cast<GtkPageSetup*>(gobj()), static_cast<GtkUnit>(unit));
}

bool PageSetup::save_to_file(const std::string& file_name) const
{
  GError* gerror = nullptr;
  auto retvalue = gtk_page_setup_to_file(const_cast<GtkPageSetup*>(gobj()), file_name.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

void PageSetup::save_to_key_file(const Glib::RefPtr<Glib::KeyFile>& key_file, const Glib::ustring& group_name) const
{
  gtk_page_setup_to_key_file(const_cast<GtkPageSetup*>(gobj()), Glib::unwrap(key_file), group_name.c_str());
}


} // namespace Gtk


