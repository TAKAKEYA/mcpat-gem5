#ifndef __PARAMS__RubyController__
#define __PARAMS__RubyController__

class AbstractController;

#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/RubyController.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/RubySystem.hh"

#include "params/ClockedObject.hh"

struct RubyControllerParams
    : public ClockedObjectParams
{
    int transitions_per_cycle;
    Cycles recycle_latency;
    int version;
    uint32_t cluster_id;
    AbstractController * peer;
    uint32_t buffer_size;
    int number_of_TBEs;
    RubySystem * ruby_system;
};

#endif // __PARAMS__RubyController__
