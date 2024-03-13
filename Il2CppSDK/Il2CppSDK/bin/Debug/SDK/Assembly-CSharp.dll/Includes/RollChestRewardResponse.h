#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RollChestRewardResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RollChestRewardResponse"));
	}

	template <typename T = ServiceMessage*> T& Result() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<Resource*>*> T& List() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RollChestRewardResponse*, uintptr_t))(Il2CppBase() + 0x11A2B9C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RollChestRewardResponse*, uintptr_t))(Il2CppBase() + 0x11A2CB8))(this, reader);
	}

};

