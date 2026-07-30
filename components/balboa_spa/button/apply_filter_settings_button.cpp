#include "apply_filter_settings_button.h"

namespace esphome
{
    namespace balboa_spa
    {

        void ApplyFilterSettingsButton::set_parent(BalboaSpa *parent)
        {
            parent_ = parent;
        }

        void ApplyFilterSettingsButton::press_action()
        {
            parent_->apply_filter_settings();
        }

    }  // namespace balboa_spa
}  // namespace esphome
