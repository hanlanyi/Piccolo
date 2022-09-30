#pragma once

#include "runtime/function/framework/component/component.h"
#include "runtime/function/render/render_object.h"
#include "runtime/resource/res_type/components/test.h"

namespace Piccolo
{
    REFLECTION_TYPE(TestComponent)
    CLASS(TestComponent : public Component, WhiteListFields)
    {
        REFLECTION_BODY(TestComponent);

    public:
        TestComponent() = default;

        ~TestComponent() override;

        // void tick(float delta_time) override;

    private:
        META(Enable)

        TestComponentRes test_component_res;
    };
} // namespace Piccolo