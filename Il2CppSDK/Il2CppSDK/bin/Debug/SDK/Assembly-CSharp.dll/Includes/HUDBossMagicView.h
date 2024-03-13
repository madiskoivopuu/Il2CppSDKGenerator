#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDBossMagicView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBossMagicView"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _counter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = MagicTracker*> T& _magicTracker() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T UpdateView(GameEntity* entity, MagicTracker* magicTracker) {
		return ((T (*)(HUDBossMagicView*, GameEntity*, MagicTracker*))(Il2CppBase() + 0x144C368))(this, entity, magicTracker);
	}

};

