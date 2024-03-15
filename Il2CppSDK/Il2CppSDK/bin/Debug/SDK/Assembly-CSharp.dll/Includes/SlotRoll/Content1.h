#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRoll {

template <typename TData>
class Content1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRoll", "Content`1"));
	}

	 Slot1TData>*& Slot() {
		return *(Slot1TData>**)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Initialize(TData data) {
		return ((R (*)(Content1*, TData))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename R = void> R Deinitialize(uintptr_t parent) {
		return ((R (*)(Content1*, uintptr_t))(Il2CppBase() + 0x0))(this, parent);
	}
	 Slot1TData>* get_Slot() {
		return ((Slot1TData>* (*)(Content1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_Slot(Slot1TData>* value) {
		return ((R (*)(Content1*, Slot1TData>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R SetSlot(Slot1TData>* slot) {
		return ((R (*)(Content1*, Slot1TData>*))(Il2CppBase() + 0x0))(this, slot);
	}
	template <typename R = int32_t> R get_Key() {
		return ((R (*)(Content1*))(Il2CppBase() + 0x0))(this);
	}

};

}
