#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossResource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossResource"));
	}

	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& TotalPoints() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Condition() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& PortalGrade() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& CoolDownSeconds() {
		return *(R*)((uintptr_t)this + 0x24);
	}


};

