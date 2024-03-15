#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveOnUseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoveOnUseComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Tags() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& RemoveSource() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(RemoveOnUseComponent*, Il2CppObject*))(Il2CppBase() + 0x13A0D5C))(this, target);
	}

};

