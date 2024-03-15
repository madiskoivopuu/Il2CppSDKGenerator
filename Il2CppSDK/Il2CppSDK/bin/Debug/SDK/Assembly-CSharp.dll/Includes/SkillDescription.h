#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkillDescription
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillDescription"));
	}

	template <typename R = Il2CppString*> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Icon() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Description() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Video() {
		return *(R*)((uintptr_t)this + 0x20);
	}


};

