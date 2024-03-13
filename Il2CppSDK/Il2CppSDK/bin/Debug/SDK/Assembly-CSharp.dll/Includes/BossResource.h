#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossResource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossResource"));
	}

	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& TotalPoints() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Condition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& PortalGrade() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& CoolDownSeconds() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

