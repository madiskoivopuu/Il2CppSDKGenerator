#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRoll {

class Content1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRoll", "Content`1"));
	}

	template <typename T = void*> T& Slot() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Initialize(uintptr_t data) {
		return ((T (*)(Content1*, uintptr_t))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = void> T Deinitialize(uintptr_t parent) {
		return ((T (*)(Content1*, uintptr_t))(Il2CppBase() + 0x0))(this, parent);
	}
	template <typename T = void*> T get_Slot() {
		return ((T (*)(Content1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Slot(void* value) {
		return ((T (*)(Content1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T SetSlot(void* slot) {
		return ((T (*)(Content1*, void*))(Il2CppBase() + 0x0))(this, slot);
	}
	template <typename T = int32_t> T get_Key() {
		return ((T (*)(Content1*))(Il2CppBase() + 0x0))(this);
	}

};

}
