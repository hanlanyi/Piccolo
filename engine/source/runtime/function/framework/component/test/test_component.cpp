#include "runtime/function/framework/component/test/test_component.h"

#include "runtime/resource/asset_manager/asset_manager.h"

#include "runtime/function/framework/object/object.h"
#include "runtime/function/global/global_context.h"

namespace Piccolo
{
    void TestComponent::postLoadResource(std::weak_ptr<GObject> parent_object)
    {
        m_parent_object = parent_object;

        std::shared_ptr<AssetManager> asset_manager = g_runtime_global_context.m_asset_manager;
        ASSERT(asset_manager);
    }

    void TestComponent::tick(float delta_time)
    {
        if (!m_parent_object.lock())
            return;
    }
} // namespace Piccolo