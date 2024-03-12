#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MetabolismStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MetabolismStatus"));
	}

	template <typename T = uintptr_t> T& _hungerNormalIcon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _hungerCriticalIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _hungerValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _thirstNormalIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _thirstCriticalIcon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _thirstValue() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& _hunger() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& _thirst() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T UpdateView(uintptr_t entity) {
		return ((T (*)(MetabolismStatus*, uintptr_t))(Il2CppBase() + 0x12D1D74))(this, entity);
	}

};

}
