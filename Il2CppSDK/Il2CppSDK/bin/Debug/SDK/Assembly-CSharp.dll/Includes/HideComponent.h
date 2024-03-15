#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HideComponent"));
	}

	template <typename R = HIDEFLAG> R& Flag() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(HideComponent*, Il2CppObject*))(Il2CppBase() + 0x1C3C0A4))(this, targetObject);
	}

};

