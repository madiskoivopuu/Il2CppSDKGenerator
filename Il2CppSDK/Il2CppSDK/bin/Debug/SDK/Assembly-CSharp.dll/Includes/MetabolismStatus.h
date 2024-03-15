#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MetabolismStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MetabolismStatus"));
	}

	template <typename R = uintptr_t> R& _hungerNormalIcon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _hungerCriticalIcon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _hungerValue() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _thirstNormalIcon() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _thirstCriticalIcon() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _thirstValue() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Nullable1int32_t>*& _hunger() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x48);
	}
	 Nullable1int32_t>*& _thirst() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R UpdateView(GameEntity* entity) {
		return ((R (*)(MetabolismStatus*, GameEntity*))(Il2CppBase() + 0x12D1D74))(this, entity);
	}

};

