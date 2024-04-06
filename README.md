# Il2CppSDKGenerator
An Il2Cpp SDK generator for Android (And probably IOS).

# How to use
1. Compile Il2CppSDK generator (or use release version)
2. Get your DummyDll from using [Il2CppDumper](https://github.com/Perfare/Il2CppDumper/)
3. Drag the whole folder of DummyDll to Il2CppSDK.exe
4. Wait for your SDK to be generated
5. Copy the result to your project
6. Copy precoded Il2Cpp Headers to your project (And include it to your Android.mk or CMakeList.txt)

Done!

# How to use the SDK
You can include an namespace header to compile whole classes within a namespace or just compile a single class, for example take a look at SDK result.

Please read how to Initialize Il2Cpp Functions first before using any of the SDK/Il2Cpp Functions.

**Example:**
```c++
#include "SDK/Il2Cpp/Il2Cpp.h"
#include "SDK/Assembly_CSharp/ActionEntity.h"
#include "SDK/Assembly_CSharp/ItemEntity.h"
#include "SDK/Assembly_CSharp/ClientWorld.h"
#include "SDK/Assembly_CSharp/ArenaUnityWorld.h"
#include "SDK/Assembly_CSharp/ActionDataContext.h"
#include "SDK/Assembly_CSharp/IdComponent.h"
#include "SDK/Assembly_CSharp/DurationComponent.h"
#include "SDK/Assembly_CSharp/DelayComponent.h"
#include "SDK/Assembly_CSharp/CooldownComponent.h"
#include "SDK/Assembly_CSharp/ItemDataContext.h"
#include "SDK/Assembly_CSharp/AttackActionComponent.h"

ActionEntity* ItemRelated::GetAttackActionForItem(ItemEntity* item) {
    ArenaUnityWorld* unityWorld = ClientWorld::get_ArenaUnity();
    if(!unityWorld) {
        LOGD("ItemRelated::GetAttackActionForItem -> unityWorld was null");
        return nullptr;
    }

    ActionDataContext* actionDataContext = unityWorld->get_actionData();
    if(!actionDataContext) {
        LOGD("ItemRelated::GetAttackActionForItem -> actionDataContext was null");
        return nullptr;
    }

    AttackActionComponent* attackActionComponent = item->get_attackAction();
    if(!attackActionComponent) {
        LOGD("ItemRelated::GetAttackActionForItem -> attackActionComponent was null");
        return nullptr;
    }

    LOGD("ItemRelated::GetAttackActionForItem -> attack action name is %s", GetUTF8StringFromNETString(attackActionComponent->f_Name).c_str());

    ActionEntity* attackActionEntity = actionDataContext->GetEntityWithBlueprint(attackActionComponent->f_Name, ActionDataContext::genericMethodAddrs["DataContext<ActionEntity>$$GetEntityWithBlueprint"]);
    if(!attackActionEntity) {
        LOGD("ItemRelated::GetAttackActionForItem -> attackActionEntity was null");
        return nullptr;
    }

    return attackActionEntity;
}
```
# Initiating Il2Cpp Functions
Before you use any `Il2Cpp` functions, you need to call `Attach` first.

```c++
...
void WaitForAttach()
{
  waitUntilLoaded(); // TODO: create function that loops when libil2cpp.so is not loaded yet.
  if(Il2Cpp::Attach() != 0)
  {
      // Something goes wrong here...
      exit(0);
  }
  // Attached!
  // You can call any Il2Cpp functions now.
}
```
# Bugs
Since I can't foresee all of the problems that could arise trying to convert C# to C++ (from Il2CppDumper's generated C# DLLs), there might be bugs that cause the SDK to not be generated correctly every time. This means that you can't compile your C++ project without modifying the SDK.

If you do encounter these issues and I'm still working on the project, make an issue report with the DLLs you used to generate the assemblies, along with the header file that is causing problems.
If I'm not working on the project, then I suggest forking it and fixing it in your own repo, then making a pull request.

# Credits
dnlib: [dnlib](https://github.com/0xd4d/dnlib)

Il2CppSDKGenerator (by Octowolve & aimardcr): [Il2CppSDKGenerator](https://github.com/Octowolve/Il2CppSDKGenerator/tree/master/Il2CppSDK)

IL2Cpp-Dictionary (by Rednick16): [IL2Cpp-Dictionary](https://github.com/Rednick16/IL2Cpp-Dictionary)
