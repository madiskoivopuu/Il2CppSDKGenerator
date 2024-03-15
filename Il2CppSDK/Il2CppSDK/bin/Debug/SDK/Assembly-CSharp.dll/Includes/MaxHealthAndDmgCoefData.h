#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MaxHealthAndDmgCoefData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MaxHealthAndDmgCoefData"));
	}

	 Il2CppList<Item>*& Values() {
		return *(Il2CppList<Item>**)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MaxHealthAndDmgCoefData*, uintptr_t))(Il2CppBase() + 0x12CD318))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MaxHealthAndDmgCoefData*, uintptr_t))(Il2CppBase() + 0x12CD384))(this, reader);
	}

};

