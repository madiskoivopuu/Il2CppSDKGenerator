#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveOnUseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoveOnUseComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Tags() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& RemoveSource() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(RemoveOnUseComponent*, Il2CppObject*))(Il2CppBase() + 0x13A0D5C))(this, target);
	}

};

