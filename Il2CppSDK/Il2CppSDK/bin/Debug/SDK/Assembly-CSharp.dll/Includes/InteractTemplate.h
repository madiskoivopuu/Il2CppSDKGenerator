#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractTemplate"));
	}

	template <typename T = uintptr_t> T& Action() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RequiredItem() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& RequiredCondition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Condition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& MinGrade() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& NoToolWarning() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& CanUseFromInventory() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(InteractTemplate*, uintptr_t))(Il2CppBase() + 0x146A880))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(InteractTemplate*, uintptr_t))(Il2CppBase() + 0x146A97C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(InteractTemplate*, uintptr_t))(Il2CppBase() + 0x146ACC8))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t targetObject) {
		return ((T (*)(InteractTemplate*, uintptr_t))(Il2CppBase() + 0x146AE0C))(this, targetObject);
	}

};

}
