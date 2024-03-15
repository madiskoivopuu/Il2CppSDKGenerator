#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDBossMagicView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBossMagicView"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _counter() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = MagicTracker*> R& _magicTracker() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& _count() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R UpdateView(GameEntity* entity, MagicTracker* magicTracker) {
		return ((R (*)(HUDBossMagicView*, GameEntity*, MagicTracker*))(Il2CppBase() + 0x144C368))(this, entity, magicTracker);
	}

};

