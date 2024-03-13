#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Parameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Parameters"));
	}

	template <typename T = Il2CppString*> T& Fishnet() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LureTag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SuccessOscillation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Nullable1float>*> T& SuccessChance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& MaxDuration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& EndDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SuccessEffects() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SuccessMagics() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FailEffects() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FailMagics() {
		return *(T*)((uintptr_t)this + 0x50);
	}


};

