#pragma once

#include "runtime/function/framework/component/component.h"

namespace Piccolo
{
    class RenderSwapContext;

    REFLECTION_TYPE(TestComponent)
    CLASS(TestComponent : public Component, WhiteListFields)
    {
        REFLECTION_BODY(TestComponent)
    public:
        TestComponent() {};

        void postLoadResource(std::weak_ptr<GObject> parent_object) override;

        void tick(float delta_time) override;

    private:
        META(Enable)
    };
} // namespace Piccolo