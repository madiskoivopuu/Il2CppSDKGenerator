#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyMapEventComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyMapEventComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyMapEventComponent*, Il2CppObject*))(Il2CppBase() + 0x1894700))(this, target);
	}

};

