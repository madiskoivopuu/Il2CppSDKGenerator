#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RepeatMagicStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RepeatMagicStateComponent"));
	}

	template <typename R = int64_t> R& NextTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

