#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IReplicatedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IReplicatedEntity"));
	}


	template <typename R = bool> R get_isReplicated() {
		return ((R (*)(IReplicatedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isReplicated(bool value) {
		return ((R (*)(IReplicatedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

