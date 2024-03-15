#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTracker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTracker"));
	}

	template <typename R = Il2CppString*> R& Icon() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& MaxCount() {
		return *(R*)((uintptr_t)this + 0x30);
	}


};

