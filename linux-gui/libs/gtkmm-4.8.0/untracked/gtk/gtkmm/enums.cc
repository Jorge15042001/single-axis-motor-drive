// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/enums.h>
#include <gtkmm/private/enums_p.h>

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

#include <gtkmm/enums.h>

namespace Gtk
{

float _gtkmm_align_float_from_enum(Align value)
{
  //Choose the float alignment value appropriate for this human-readable enum value:
  switch(value)
  {
    case Align::START:
      return 0.0; break;
    case Align::CENTER:
      return 0.5; break;
    case Align::END:
      return 1.0; break;
    default:
      return _gtkmm_align_float_from_enum(Align::START); break;
  }
}

} //namespace Gtk

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::Align>::value_type()
{
  return gtk_align_get_type();
}

// static
GType Glib::Value<Gtk::ArrowType>::value_type()
{
  return gtk_arrow_type_get_type();
}

// static
GType Glib::Value<Gtk::DeleteType>::value_type()
{
  return gtk_delete_type_get_type();
}

// static
GType Glib::Value<Gtk::DirectionType>::value_type()
{
  return gtk_direction_type_get_type();
}

// static
GType Glib::Value<Gtk::IconSize>::value_type()
{
  return gtk_icon_size_get_type();
}

// static
GType Glib::Value<Gtk::TextDirection>::value_type()
{
  return gtk_text_direction_get_type();
}

// static
GType Glib::Value<Gtk::Justification>::value_type()
{
  return gtk_justification_get_type();
}

// static
GType Glib::Value<Gtk::MessageType>::value_type()
{
  return gtk_message_type_get_type();
}

// static
GType Glib::Value<Gtk::MovementStep>::value_type()
{
  return gtk_movement_step_get_type();
}

// static
GType Glib::Value<Gtk::Orientation>::value_type()
{
  return gtk_orientation_get_type();
}

// static
GType Glib::Value<Gtk::Overflow>::value_type()
{
  return gtk_overflow_get_type();
}

// static
GType Glib::Value<Gtk::CornerType>::value_type()
{
  return gtk_corner_type_get_type();
}

// static
GType Glib::Value<Gtk::PackType>::value_type()
{
  return gtk_pack_type_get_type();
}

// static
GType Glib::Value<Gtk::PickFlags>::value_type()
{
  return gtk_pick_flags_get_type();
}

// static
GType Glib::Value<Gtk::PolicyType>::value_type()
{
  return gtk_policy_type_get_type();
}

// static
GType Glib::Value<Gtk::PositionType>::value_type()
{
  return gtk_position_type_get_type();
}

// static
GType Glib::Value<Gtk::RevealerTransitionType>::value_type()
{
  return gtk_revealer_transition_type_get_type();
}

// static
GType Glib::Value<Gtk::ScrollType>::value_type()
{
  return gtk_scroll_type_get_type();
}

// static
GType Glib::Value<Gtk::SelectionMode>::value_type()
{
  return gtk_selection_mode_get_type();
}

// static
GType Glib::Value<Gtk::StackTransitionType>::value_type()
{
  return gtk_stack_transition_type_get_type();
}

// static
GType Glib::Value<Gtk::WrapMode>::value_type()
{
  return gtk_wrap_mode_get_type();
}

// static
GType Glib::Value<Gtk::NaturalWrapMode>::value_type()
{
  return gtk_natural_wrap_mode_get_type();
}

// static
GType Glib::Value<Gtk::SortType>::value_type()
{
  return gtk_sort_type_get_type();
}

// static
GType Glib::Value<Gtk::Ordering>::value_type()
{
  return gtk_ordering_get_type();
}

// static
GType Glib::Value<Gtk::PageOrientation>::value_type()
{
  return gtk_page_orientation_get_type();
}

// static
GType Glib::Value<Gtk::SensitivityType>::value_type()
{
  return gtk_sensitivity_type_get_type();
}

// static
GType Glib::Value<Gtk::SizeRequestMode>::value_type()
{
  return gtk_size_request_mode_get_type();
}

// static
GType Glib::Value<Gtk::StateFlags>::value_type()
{
  return gtk_state_flags_get_type();
}

// static
GType Glib::Value<Gtk::InputPurpose>::value_type()
{
  return gtk_input_purpose_get_type();
}

// static
GType Glib::Value<Gtk::InputHints>::value_type()
{
  return gtk_input_hints_get_type();
}

// static
GType Glib::Value<Gtk::BaselinePosition>::value_type()
{
  return gtk_baseline_position_get_type();
}

// static
GType Glib::Value<Gtk::ShortcutScope>::value_type()
{
  return gtk_shortcut_scope_get_type();
}

// static
GType Glib::Value<Gtk::ContentFit>::value_type()
{
  return gtk_content_fit_get_type();
}


