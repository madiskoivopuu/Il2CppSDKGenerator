#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TaskOnFailedProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TaskOnFailedProxy"));
	}

	 Action1<uintptr_t>*& mCallback() {
		return *(Action1<uintptr_t>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R onFailure(uintptr_t exception) {
		return ((R (*)(TaskOnFailedProxy*, uintptr_t))(Il2CppBase() + 0x1146E3C))(this, exception);
	}

};

