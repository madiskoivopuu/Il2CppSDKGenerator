#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CancelUseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CancelUseComponent"));
	}

	template <typename R = Il2CppString*> R& MagicName() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CancelUseComponent*, Il2CppObject*))(Il2CppBase() + 0x15B6250))(this, targetObject);
	}

};

