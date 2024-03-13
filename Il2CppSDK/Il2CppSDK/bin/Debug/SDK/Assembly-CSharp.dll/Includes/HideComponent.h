#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HideComponent"));
	}

	template <typename T = HIDEFLAG*> T& Flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(HideComponent*, Il2CppObject*))(Il2CppBase() + 0x1C3C0A4))(this, targetObject);
	}

};

