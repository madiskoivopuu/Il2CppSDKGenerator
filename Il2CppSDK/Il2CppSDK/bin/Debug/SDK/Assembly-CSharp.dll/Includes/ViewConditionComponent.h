#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewConditionComponent"));
	}

	template <typename R = Il2CppString*> R& Contains() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ViewConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x15C8264))(this, target);
	}

};

