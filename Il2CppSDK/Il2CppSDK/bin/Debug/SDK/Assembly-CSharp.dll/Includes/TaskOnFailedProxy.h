#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TaskOnFailedProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TaskOnFailedProxy"));
	}

	template <typename T = Action1uintptr_t>*> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T onFailure(uintptr_t exception) {
		return ((T (*)(TaskOnFailedProxy*, uintptr_t))(Il2CppBase() + 0x1146E3C))(this, exception);
	}

};

