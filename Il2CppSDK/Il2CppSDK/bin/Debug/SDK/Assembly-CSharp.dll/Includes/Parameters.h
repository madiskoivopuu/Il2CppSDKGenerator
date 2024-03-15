#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Parameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Parameters"));
	}

	template <typename R = Il2CppString*> R& Fishnet() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& LureTag() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& SuccessOscillation() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Nullable1<float>*& SuccessChance() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& MaxDuration() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& EndDuration() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& SuccessEffects() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& SuccessMagics() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& FailEffects() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& FailMagics() {
		return *(R*)((uintptr_t)this + 0x50);
	}


};

