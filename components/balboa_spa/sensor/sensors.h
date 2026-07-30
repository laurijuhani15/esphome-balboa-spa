#pragma once

#include <string>

#include "esphome/components/sensor/sensor.h"
#include "../balboaspa.h"

namespace esphome
{
  namespace balboa_spa
  {

    class BalboaSpaSensors : public sensor::Sensor
    {
    public:
      enum class BalboaSpaSensorType : uint8_t
      {
        HIGHRANGE = 1,
        RESTMODE = 2,
        HEATSTATE = 3,
      };

    public:
      BalboaSpaSensors() {};
      void update(SpaState *spaState);

      void set_parent(BalboaSpa *parent);
      void set_sensor_type(BalboaSpaSensorType _type) { sensor_type = _type; }

    private:
      BalboaSpaSensorType sensor_type;
    };

  } // namespace balboa_spa
} // namespace esphome
