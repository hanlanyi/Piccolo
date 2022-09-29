#pragma once
#include "runtime/core/math/transform.h"
#include "runtime/core/meta/reflection/reflection.h"

namespace Piccolo
{
    REFLECTION_TYPE(TestComponentRes)
    CLASS(TestComponentRes, Fields)
    {
        REFLECTION_BODY(TestComponentRes);

    public:
        bool t_test;
    };
} // namespace Piccolo