#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GrabViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GrabViewComponent"));
	}

	template <typename R = Il2CppString*> R& AnimatorKey() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(GrabViewComponent*, Il2CppObject*))(Il2CppBase() + 0x12E1FA8))(this, targetObject);
	}

};

