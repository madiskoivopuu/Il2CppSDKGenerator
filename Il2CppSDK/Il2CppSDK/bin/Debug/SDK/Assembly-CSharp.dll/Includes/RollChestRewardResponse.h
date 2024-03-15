#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RollChestRewardResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RollChestRewardResponse"));
	}

	template <typename R = ServiceMessage> R& Result() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Il2CppList<Resource>*& List() {
		return *(Il2CppList<Resource>**)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RollChestRewardResponse*, uintptr_t))(Il2CppBase() + 0x11A2B9C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RollChestRewardResponse*, uintptr_t))(Il2CppBase() + 0x11A2CB8))(this, reader);
	}

};

