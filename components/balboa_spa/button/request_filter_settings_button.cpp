#include "request_filter_settings_button.h"

namespace esphome
{
    namespace balboa_spa
    {

        void RequestFilterSettingsButton::set_parent(BalboaSpa *parent)
        {
            parent_ = parent;
        }

        void RequestFilterSettingsButton::press_action()
        {
            parent_->request_filter_settings();
        }

    }  // namespace balboa_spa
}  // namespace esphome
